#ifndef CELL_USERMGR_H
#define CELL_USERMGR_H

#include <QWidget>
#include<QStandardItemModel>

namespace Ui {
class Cell_UserMgr;
}

class Cell_UserMgr : public QWidget
{
    Q_OBJECT

public:
    explicit Cell_UserMgr(QWidget *parent = nullptr);
    ~Cell_UserMgr();

    //初始化界面,查询数据库并显示
    void initPage(QString strCondition ="");

private slots:

    //删除用户
    void on_btn_del_clicked();

    //导入用户(.csv文件)
    void on_btn_import_clicked();

    //查询用户
    void on_le_search_textChanged(const QString &arg1);

private:
    Ui::Cell_UserMgr *ui;

    QStandardItemModel m_model;

    //将GBK转换成UTF-8
    static QString convertUTF8(QString strGBK);
};

#endif // CELL_USERMGR_H
