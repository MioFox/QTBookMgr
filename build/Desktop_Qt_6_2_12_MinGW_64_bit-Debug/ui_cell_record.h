/********************************************************************************
** Form generated from reading UI file 'cell_record.ui'
**
** Created by: Qt User Interface Compiler version 6.2.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_RECORD_H
#define UI_CELL_RECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cell_Record
{
public:
    QGridLayout *gridLayout_2;
    QLabel *lb_title;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *le_search;
    QPushButton *btn_clear;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_return;
    QTableView *tableView;

    void setupUi(QWidget *Cell_Record)
    {
        if (Cell_Record->objectName().isEmpty())
            Cell_Record->setObjectName(QString::fromUtf8("Cell_Record"));
        Cell_Record->resize(923, 761);
        gridLayout_2 = new QGridLayout(Cell_Record);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lb_title = new QLabel(Cell_Record);
        lb_title->setObjectName(QString::fromUtf8("lb_title"));

        gridLayout_2->addWidget(lb_title, 0, 0, 1, 1);

        widget = new QWidget(Cell_Record);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        le_search = new QLineEdit(widget);
        le_search->setObjectName(QString::fromUtf8("le_search"));
        le_search->setMinimumSize(QSize(250, 0));
        le_search->setMaximumSize(QSize(250, 16777215));

        gridLayout->addWidget(le_search, 0, 1, 1, 1);

        btn_clear = new QPushButton(widget);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));

        gridLayout->addWidget(btn_clear, 0, 3, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(370, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);

        btn_return = new QPushButton(widget);
        btn_return->setObjectName(QString::fromUtf8("btn_return"));

        gridLayout->addWidget(btn_return, 0, 2, 1, 1);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);

        tableView = new QTableView(Cell_Record);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 2, 0, 1, 1);


        retranslateUi(Cell_Record);

        QMetaObject::connectSlotsByName(Cell_Record);
    } // setupUi

    void retranslateUi(QWidget *Cell_Record)
    {
        Cell_Record->setWindowTitle(QCoreApplication::translate("Cell_Record", "Form", nullptr));
        Cell_Record->setProperty("name", QVariant(QCoreApplication::translate("Cell_Record", "bg", nullptr)));
        lb_title->setText(QCoreApplication::translate("Cell_Record", "QT\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237/\345\200\237\351\230\205\350\256\260\345\275\225", nullptr));
        lb_title->setProperty("name", QVariant(QCoreApplication::translate("Cell_Record", "title", nullptr)));
        le_search->setProperty("name", QVariant(QCoreApplication::translate("Cell_Record", "le", nullptr)));
        btn_clear->setText(QCoreApplication::translate("Cell_Record", "\346\270\205\347\251\272\350\256\260\345\275\225", nullptr));
        btn_clear->setProperty("name", QVariant(QCoreApplication::translate("Cell_Record", "btn", nullptr)));
        label->setText(QCoreApplication::translate("Cell_Record", "\346\220\234\347\264\242", nullptr));
        label->setProperty("name", QVariant(QCoreApplication::translate("Cell_Record", "lb", nullptr)));
        btn_return->setText(QCoreApplication::translate("Cell_Record", "\345\233\276\344\271\246\345\275\222\350\277\230", nullptr));
        btn_return->setProperty("name", QVariant(QCoreApplication::translate("Cell_Record", "btn", nullptr)));
        tableView->setProperty("name", QVariant(QCoreApplication::translate("Cell_Record", "table", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class Cell_Record: public Ui_Cell_Record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_RECORD_H
