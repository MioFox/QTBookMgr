#include "cell_record.h"
#include "dlg_bookgs.h"
#include "ui_cell_record.h"
#include "lib/sqlmgr.h"

#include <QMessageBox>

Cell_Record::Cell_Record(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cell_Record)
{
    ui->setupUi(this);
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

    // 自动调整列宽和行高
    ui->tableView->resizeColumnsToContents();
    ui->tableView->resizeRowsToContents();


    ui->tableView->setStyleSheet(
        "QHeaderView::section { font-size: 12pt; }"  // 修改表头字体
        "QTableView { font-size: 10pt; }"            // 修改表格内容字体
    );
}

Cell_Record::~Cell_Record()
{
    delete ui;
}

void Cell_Record::initPage(QString strCondition)
{
    auto l = SqlMgr::getInstance()->getRecord(strCondition);
    m_model.clear();
    m_model.setHorizontalHeaderLabels(QStringList{"记录ID","用户ID","图书ID","借阅时间","归还时间","NAME","PASSWARD","USERNAME","LEVEL","MAJOR","GRADE","BOOKNAME","PRICE","T1","T2","T3","BN"});
    for(int i=0;i<l.size();i++)
    {
        QList<QStandardItem*> items;
        for(int j=0;j<l[i].size();j++)
        {
            items.append(new QStandardItem(l[i][j]));
        }
        m_model.appendRow(items);
    }
}

void Cell_Record::on_btn_clear_clicked()
{
    // 提示用户确认清除记录
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirm Clear", "Are you sure you want to clear ALL records?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {
        SqlMgr::getInstance()->clearRecord();
        initPage();
    }
}


void Cell_Record::on_le_search_textChanged(const QString &arg1)
{

    initPage(arg1);
}


void Cell_Record::on_btn_return_clicked()
{
    int r = ui->tableView->currentIndex().row();
    if(r<0)
    {
        return;
    }
    auto id = m_model.item(r,2)->text();
    Dlg_BookGS dlg;
    dlg.setType(true);
    dlg.setBookId(id.toInt());
    int ret = dlg.exec();
    QMessageBox::information(nullptr,"Message",ret? "Successful.":"Fail To Return!");
    if(ret)
    {
        initPage();
    }
}

