/********************************************************************************
** Form generated from reading UI file 'cell_usermgr.ui'
**
** Created by: Qt User Interface Compiler version 6.2.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_USERMGR_H
#define UI_CELL_USERMGR_H

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

class Ui_Cell_UserMgr
{
public:
    QGridLayout *gridLayout_2;
    QLabel *lb_title;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *le_search;
    QPushButton *btn_import;
    QLabel *label;
    QPushButton *btn_del;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView;

    void setupUi(QWidget *Cell_UserMgr)
    {
        if (Cell_UserMgr->objectName().isEmpty())
            Cell_UserMgr->setObjectName(QString::fromUtf8("Cell_UserMgr"));
        Cell_UserMgr->resize(867, 734);
        gridLayout_2 = new QGridLayout(Cell_UserMgr);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lb_title = new QLabel(Cell_UserMgr);
        lb_title->setObjectName(QString::fromUtf8("lb_title"));

        gridLayout_2->addWidget(lb_title, 0, 0, 1, 1);

        widget = new QWidget(Cell_UserMgr);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        le_search = new QLineEdit(widget);
        le_search->setObjectName(QString::fromUtf8("le_search"));
        le_search->setMinimumSize(QSize(250, 0));
        le_search->setMaximumSize(QSize(250, 16777215));

        gridLayout->addWidget(le_search, 0, 1, 1, 1);

        btn_import = new QPushButton(widget);
        btn_import->setObjectName(QString::fromUtf8("btn_import"));

        gridLayout->addWidget(btn_import, 0, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        btn_del = new QPushButton(widget);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));

        gridLayout->addWidget(btn_del, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(370, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);

        tableView = new QTableView(Cell_UserMgr);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 2, 0, 1, 1);


        retranslateUi(Cell_UserMgr);

        QMetaObject::connectSlotsByName(Cell_UserMgr);
    } // setupUi

    void retranslateUi(QWidget *Cell_UserMgr)
    {
        Cell_UserMgr->setWindowTitle(QCoreApplication::translate("Cell_UserMgr", "Form", nullptr));
        Cell_UserMgr->setProperty("name", QVariant(QCoreApplication::translate("Cell_UserMgr", "bg", nullptr)));
        lb_title->setText(QCoreApplication::translate("Cell_UserMgr", "QT\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237/\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        lb_title->setProperty("name", QVariant(QCoreApplication::translate("Cell_UserMgr", "title", nullptr)));
        le_search->setProperty("name", QVariant(QCoreApplication::translate("Cell_UserMgr", "le", nullptr)));
        btn_import->setText(QCoreApplication::translate("Cell_UserMgr", "\347\224\250\346\210\267\345\257\274\345\205\245", nullptr));
        btn_import->setProperty("name", QVariant(QCoreApplication::translate("Cell_UserMgr", "btn", nullptr)));
        label->setText(QCoreApplication::translate("Cell_UserMgr", "\346\220\234\347\264\242", nullptr));
        label->setProperty("name", QVariant(QCoreApplication::translate("Cell_UserMgr", "lb", nullptr)));
        btn_del->setText(QCoreApplication::translate("Cell_UserMgr", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        btn_del->setProperty("name", QVariant(QCoreApplication::translate("Cell_UserMgr", "btn", nullptr)));
        tableView->setProperty("name", QVariant(QCoreApplication::translate("Cell_UserMgr", "table", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class Cell_UserMgr: public Ui_Cell_UserMgr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_USERMGR_H
