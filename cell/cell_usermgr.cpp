#include "cell_usermgr.h"
#include "ui_cell_usermgr.h"
#include "lib/sqlmgr.h"

#include <QFileDialog>
#include<QMessageBox>


Cell_UserMgr::Cell_UserMgr(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cell_UserMgr)
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

Cell_UserMgr::~Cell_UserMgr()
{
    delete ui;
}

void Cell_UserMgr::initPage(QString strCondition)
{
    auto l = SqlMgr::getInstance()->getUser(strCondition);
    m_model.clear();
    m_model.setHorizontalHeaderLabels(QStringList{"用户ID","姓名","密码","用户名","权限","院系","年级"});
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

void Cell_UserMgr::on_btn_del_clicked()
{
    int r = ui->tableView->currentIndex().row();
    if(r<0)
    {
        QMessageBox::warning(nullptr,"Message","UnSelected");
    }
    else
    {
        auto id = m_model.item(r,0)->text();
        SqlMgr::getInstance()->delUser(id);
        initPage();
    }
}

void Cell_UserMgr::on_btn_import_clicked()
{
    auto strPath = QFileDialog::getOpenFileName(nullptr,"输入文件路径");
    if(!strPath.isEmpty())
    {
        QFile f(strPath);
        f.open(QFile::ReadOnly);
        QVector<QStringList> vecData;
        while(!f.atEnd())
        {
            QString str = f.readLine();
            auto l = str.split(",");
            for(auto &itC:l)
            {
                itC = convertUTF8(itC);
            }
            if(l.size()!=6)
            {
                QMessageBox::warning(nullptr,"Message","Import Fail!");
                return;
            }
            l[l.size()-1] = l[l.size()-1].chopped(2);    //去掉行末端的\n
            vecData.push_back(l);
        }
        SqlMgr::getInstance()->addUser(vecData);
        ui->le_search->clear();
        initPage();
    }
}


void Cell_UserMgr::on_le_search_textChanged(const QString &arg1)
{
    QString strCondition = QString("where username like '%%1%' or nickname like '%%1%'").arg(arg1);
    initPage(strCondition);
}

QString Cell_UserMgr::convertUTF8(QString strGBK)
{
    QByteArray gbkBytes = strGBK.toLocal8Bit();
    QString utf8String = QString::fromUtf8(gbkBytes);
    return utf8String;
}


