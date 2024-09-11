#ifndef CELL_RECORD_H
#define CELL_RECORD_H

#include <QStandardItemModel>
#include <QWidget>

namespace Ui {
class Cell_Record;
}

class Cell_Record : public QWidget
{
    Q_OBJECT

public:
    explicit Cell_Record(QWidget *parent = nullptr);
    ~Cell_Record();

    //初始化界面,查询数据库并显示
    void initPage(QString strCondition="");
private slots:
    void on_btn_clear_clicked();

    void on_le_search_textChanged(const QString &arg1);

    void on_btn_return_clicked();

private:
    Ui::Cell_Record *ui;

    QStandardItemModel m_model;
};

#endif // CELL_RECORD_H
