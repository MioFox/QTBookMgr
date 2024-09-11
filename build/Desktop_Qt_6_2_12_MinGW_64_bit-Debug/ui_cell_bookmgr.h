/********************************************************************************
** Form generated from reading UI file 'cell_bookmgr.ui'
**
** Created by: Qt User Interface Compiler version 6.2.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_BOOKMGR_H
#define UI_CELL_BOOKMGR_H

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

class Ui_Cell_BookMgr
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *le_search;
    QPushButton *btn_get;
    QPushButton *btn_add;
    QLabel *label;
    QPushButton *btn_del;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_update;
    QTableView *tableView;
    QLabel *lb_title;

    void setupUi(QWidget *Cell_BookMgr)
    {
        if (Cell_BookMgr->objectName().isEmpty())
            Cell_BookMgr->setObjectName(QString::fromUtf8("Cell_BookMgr"));
        Cell_BookMgr->resize(853, 617);
        Cell_BookMgr->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(Cell_BookMgr);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget = new QWidget(Cell_BookMgr);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        le_search = new QLineEdit(widget);
        le_search->setObjectName(QString::fromUtf8("le_search"));
        le_search->setMinimumSize(QSize(250, 0));
        le_search->setMaximumSize(QSize(250, 16777215));

        gridLayout->addWidget(le_search, 0, 1, 1, 1);

        btn_get = new QPushButton(widget);
        btn_get->setObjectName(QString::fromUtf8("btn_get"));

        gridLayout->addWidget(btn_get, 0, 5, 1, 1);

        btn_add = new QPushButton(widget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));

        gridLayout->addWidget(btn_add, 0, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setTextFormat(Qt::AutoText);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        btn_del = new QPushButton(widget);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));

        gridLayout->addWidget(btn_del, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 6, 1, 1);

        btn_update = new QPushButton(widget);
        btn_update->setObjectName(QString::fromUtf8("btn_update"));

        gridLayout->addWidget(btn_update, 0, 3, 1, 1);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);

        tableView = new QTableView(Cell_BookMgr);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 2, 0, 1, 1);

        lb_title = new QLabel(Cell_BookMgr);
        lb_title->setObjectName(QString::fromUtf8("lb_title"));

        gridLayout_2->addWidget(lb_title, 0, 0, 1, 1);


        retranslateUi(Cell_BookMgr);

        QMetaObject::connectSlotsByName(Cell_BookMgr);
    } // setupUi

    void retranslateUi(QWidget *Cell_BookMgr)
    {
        Cell_BookMgr->setWindowTitle(QCoreApplication::translate("Cell_BookMgr", "Form", nullptr));
        Cell_BookMgr->setProperty("name", QVariant(QCoreApplication::translate("Cell_BookMgr", "bg", nullptr)));
        le_search->setProperty("name", QVariant(QCoreApplication::translate("Cell_BookMgr", "le", nullptr)));
        btn_get->setText(QCoreApplication::translate("Cell_BookMgr", "\345\233\276\344\271\246\345\200\237\351\230\205", nullptr));
        btn_get->setProperty("name", QVariant(QCoreApplication::translate("Cell_BookMgr", "btn", nullptr)));
        btn_add->setText(QCoreApplication::translate("Cell_BookMgr", "\345\242\236\345\212\240", nullptr));
        btn_add->setProperty("name", QVariant(QCoreApplication::translate("Cell_BookMgr", "btn", nullptr)));
        label->setText(QCoreApplication::translate("Cell_BookMgr", "\346\220\234\347\264\242", nullptr));
        label->setProperty("name", QVariant(QCoreApplication::translate("Cell_BookMgr", "lb", nullptr)));
        btn_del->setText(QCoreApplication::translate("Cell_BookMgr", "\345\210\240\351\231\244", nullptr));
        btn_del->setProperty("name", QVariant(QCoreApplication::translate("Cell_BookMgr", "btn", nullptr)));
        btn_update->setText(QCoreApplication::translate("Cell_BookMgr", "\344\277\256\346\224\271", nullptr));
        btn_update->setProperty("name", QVariant(QCoreApplication::translate("Cell_BookMgr", "btn", nullptr)));
        tableView->setProperty("name", QVariant(QCoreApplication::translate("Cell_BookMgr", "table", nullptr)));
        lb_title->setText(QCoreApplication::translate("Cell_BookMgr", "QT\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237/\345\233\276\344\271\246\347\256\241\347\220\206", nullptr));
        lb_title->setProperty("name", QVariant(QCoreApplication::translate("Cell_BookMgr", "title", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class Cell_BookMgr: public Ui_Cell_BookMgr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_BOOKMGR_H
