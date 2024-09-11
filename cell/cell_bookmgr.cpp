#include "cell_bookmgr.h"
#include "ui_cell_bookmgr.h"
#include "lib/sqlmgr.h"
#include "dlg_bookau.h"
#include "dlg_bookgs.h"

#include <QMessageBox>

Cell_BookMgr::Cell_BookMgr(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cell_BookMgr)
{
    ui->setupUi(this);
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

    // 自动调整列宽和行高
    ui->tableView->resizeColumnsToContents();
    ui->tableView->resizeRowsToContents();
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableView->setStyleSheet(
        "QHeaderView::section { font-size: 16pt; }"  // 修改表头字体
        "QTableView { font-size: 15pt; }"            // 修改表格内容字体
    );
}

Cell_BookMgr::~Cell_BookMgr()
{
    delete ui;
}

void Cell_BookMgr::initPage(QString strCondition)
{
    auto l = SqlMgr::getInstance()->getBooks(strCondition);
    m_model.clear();
    m_model.setHorizontalHeaderLabels(QStringList{"图书ID","图书名称","价格","类型1","类型2","类型3","数量"});
    for(int i=0;i<l.size();i++)
    {
        QList<QStandardItem*> items;
        for(int j=0;j<l[i].size();j++)
        {
            QStandardItem* item = new QStandardItem(l[i][j]);
            items.append(item);
        }
        m_model.appendRow(items);
    }
}

void Cell_BookMgr::on_btn_get_clicked()
{
    int r = ui->tableView->currentIndex().row();
    if(r<0)
    {
        QMessageBox::warning(nullptr,"Message","UnSelected!");
        return;
    }
    auto id = m_model.item(r,0)->text();
    auto cnt = m_model.item(r,6)->text().toInt();
    if(cnt<=0)
    {
        QMessageBox::warning(nullptr,"Message","NO BOOKS TO BORROW!");
        return;
    }
    Dlg_BookGS dlg;
    dlg.setBookId(id.toInt());
    int ret = dlg.exec();
    QMessageBox::information(nullptr,"Message",ret? "Successful.":"Fail To Borrow!");
    if(ret)
    {
        initPage();
    }
}


void Cell_BookMgr::on_btn_add_clicked()
{
    Dlg_BookAU dlg;
    dlg.exec();
    initPage();
}


void Cell_BookMgr::on_btn_update_clicked()
{
    int r = ui->tableView->currentIndex().row();
    if(r<0)
    {
        QMessageBox::warning(nullptr,"Message","UnSelected!");
    }
    else
    {
        auto id = m_model.item(r,0)->text();
        Dlg_BookAU dlg;
        dlg.setData(id.toInt());
        dlg.exec();
        initPage();
    }
}


void Cell_BookMgr::on_btn_del_clicked()
{
    int r = ui->tableView->currentIndex().row();
    if (r < 0)
    {
        QMessageBox::warning(nullptr, "Message", "Unselected");
    }
    else
    {
        // 提示用户确认删除
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirm Delete", "Are you sure you want to delete this book?",
                                      QMessageBox::Yes | QMessageBox::No);

        // 根据用户的选择执行删除操作
        if (reply == QMessageBox::Yes)
        {
            auto id = m_model.item(r, 0)->text();
            auto str = SqlMgr::getInstance()->delBook(id);
            QMessageBox::information(this, "Message", str.isEmpty() ? "Delete Successful" : str);
            initPage();
        }
    }
}


void Cell_BookMgr::on_le_search_textChanged(const QString &arg1)
{
    QString strCondition = QString("where name like '%%1%' or type1 like '%%1%' or type2 like '%%1%' or type3 like '%%1%'").arg(arg1);
    initPage(strCondition);
}

