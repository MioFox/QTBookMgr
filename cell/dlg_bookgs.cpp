#include "dlg_bookgs.h"
#include "ui_dlg_bookgs.h"
#include "lib/sqlmgr.h"

Dlg_BookGS::Dlg_BookGS(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dlg_BookGS)
{
    ui->setupUi(this);
}

Dlg_BookGS::~Dlg_BookGS()
{
    delete ui;
}

void Dlg_BookGS::setType(bool isReturn)
{
    m_isReturn = isReturn;
    ui->btn_get->setText("归还");
}

void Dlg_BookGS::setBookId(int id)
{
    m_bookid = id;
}

void Dlg_BookGS::on_btn_get_clicked()
{
    //判断用户名密码正确
    do
    {
        auto strName = ui->le_user->text();
        auto strPass = ui->le_passward->text();
        int userid = 0;
        auto ret = SqlMgr::getInstance()->login(strName,strPass,userid);
        if(!ret)
        {
            this->done(0);
            break;
        }
        if(m_isReturn)
        {
            SqlMgr::getInstance()->returnBook(QString::number(userid),QString::number(m_bookid));
        }
        else
        {
            //图书库存-1,生成借阅记录
            SqlMgr::getInstance()->borrowBook(QString::number(userid),QString::number(m_bookid));
        }
        this->done(1);
    }while(false);
}


void Dlg_BookGS::on_btn_cancel_clicked()
{
    this->done(0);
}

