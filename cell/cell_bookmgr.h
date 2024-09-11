#ifndef CELL_BOOKMGR_H
#define CELL_BOOKMGR_H

#include <QWidget>
#include<QStandardItemModel>

namespace Ui {
class Cell_BookMgr;
}

class Cell_BookMgr : public QWidget
{
    Q_OBJECT

public:
    explicit Cell_BookMgr(QWidget *parent = nullptr);
    ~Cell_BookMgr();

    //初始化界面,查询数据库并显示
    void initPage(QString strCondition="");

private slots:

    //图书借阅
    void on_btn_get_clicked();

    //添加图书
    void on_btn_add_clicked();

    //修改
    void on_btn_update_clicked();

    //删除图书
    void on_btn_del_clicked();


    void on_le_search_textChanged(const QString &arg1);

private:
    Ui::Cell_BookMgr *ui;

    QStandardItemModel m_model;
};

#endif // CELL_BOOKMGR_H
