/********************************************************************************
** Form generated from reading UI file 'dlg_bookau.ui'
**
** Created by: Qt User Interface Compiler version 6.2.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_BOOKAU_H
#define UI_DLG_BOOKAU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg_BookAU
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *le_name;
    QLabel *label_2;
    QLineEdit *le_price;
    QLabel *label_6;
    QLineEdit *le_cnt;
    QLabel *label_3;
    QComboBox *cb1;
    QLabel *label_4;
    QComboBox *cb2;
    QLabel *label_5;
    QComboBox *cb3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QDialog *Dlg_BookAU)
    {
        if (Dlg_BookAU->objectName().isEmpty())
            Dlg_BookAU->setObjectName(QString::fromUtf8("Dlg_BookAU"));
        Dlg_BookAU->resize(450, 461);
        gridLayout_2 = new QGridLayout(Dlg_BookAU);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(Dlg_BookAU);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 50));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        le_name = new QLineEdit(Dlg_BookAU);
        le_name->setObjectName(QString::fromUtf8("le_name"));

        gridLayout_2->addWidget(le_name, 0, 1, 1, 1);

        label_2 = new QLabel(Dlg_BookAU);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 50));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        le_price = new QLineEdit(Dlg_BookAU);
        le_price->setObjectName(QString::fromUtf8("le_price"));

        gridLayout_2->addWidget(le_price, 1, 1, 1, 1);

        label_6 = new QLabel(Dlg_BookAU);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(0, 50));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        le_cnt = new QLineEdit(Dlg_BookAU);
        le_cnt->setObjectName(QString::fromUtf8("le_cnt"));

        gridLayout_2->addWidget(le_cnt, 2, 1, 1, 1);

        label_3 = new QLabel(Dlg_BookAU);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 50));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        cb1 = new QComboBox(Dlg_BookAU);
        cb1->addItem(QString());
        cb1->addItem(QString());
        cb1->addItem(QString());
        cb1->addItem(QString());
        cb1->addItem(QString());
        cb1->setObjectName(QString::fromUtf8("cb1"));

        gridLayout_2->addWidget(cb1, 3, 1, 1, 1);

        label_4 = new QLabel(Dlg_BookAU);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 50));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        cb2 = new QComboBox(Dlg_BookAU);
        cb2->addItem(QString());
        cb2->addItem(QString());
        cb2->addItem(QString());
        cb2->addItem(QString());
        cb2->addItem(QString());
        cb2->setObjectName(QString::fromUtf8("cb2"));

        gridLayout_2->addWidget(cb2, 4, 1, 1, 1);

        label_5 = new QLabel(Dlg_BookAU);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 50));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_5, 5, 0, 1, 1);

        cb3 = new QComboBox(Dlg_BookAU);
        cb3->addItem(QString());
        cb3->addItem(QString());
        cb3->addItem(QString());
        cb3->addItem(QString());
        cb3->addItem(QString());
        cb3->setObjectName(QString::fromUtf8("cb3"));

        gridLayout_2->addWidget(cb3, 5, 1, 1, 1);

        widget = new QWidget(Dlg_BookAU);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 60));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_ok = new QPushButton(widget);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(btn_ok, 0, 0, 1, 1);

        btn_cancel = new QPushButton(widget);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(btn_cancel, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 6, 0, 1, 2);


        retranslateUi(Dlg_BookAU);

        QMetaObject::connectSlotsByName(Dlg_BookAU);
    } // setupUi

    void retranslateUi(QDialog *Dlg_BookAU)
    {
        Dlg_BookAU->setWindowTitle(QCoreApplication::translate("Dlg_BookAU", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dlg_BookAU", "\345\220\215\347\247\260", nullptr));
        label_2->setText(QCoreApplication::translate("Dlg_BookAU", "\344\273\267\346\240\274", nullptr));
        label_6->setText(QCoreApplication::translate("Dlg_BookAU", "\346\225\260\351\207\217", nullptr));
        label_3->setText(QCoreApplication::translate("Dlg_BookAU", "\347\261\273\345\210\2531", nullptr));
        cb1->setItemText(0, QCoreApplication::translate("Dlg_BookAU", "\347\210\261\346\203\205", nullptr));
        cb1->setItemText(1, QCoreApplication::translate("Dlg_BookAU", "\346\225\260\345\255\246", nullptr));
        cb1->setItemText(2, QCoreApplication::translate("Dlg_BookAU", "\345\212\250\344\275\234", nullptr));
        cb1->setItemText(3, QCoreApplication::translate("Dlg_BookAU", "\345\216\206\345\217\262", nullptr));
        cb1->setItemText(4, QCoreApplication::translate("Dlg_BookAU", "\344\272\272\346\226\207", nullptr));

        label_4->setText(QCoreApplication::translate("Dlg_BookAU", "\347\261\273\345\210\2532", nullptr));
        cb2->setItemText(0, QCoreApplication::translate("Dlg_BookAU", "\347\210\261\346\203\205", nullptr));
        cb2->setItemText(1, QCoreApplication::translate("Dlg_BookAU", "\346\225\260\345\255\246", nullptr));
        cb2->setItemText(2, QCoreApplication::translate("Dlg_BookAU", "\345\212\250\344\275\234", nullptr));
        cb2->setItemText(3, QCoreApplication::translate("Dlg_BookAU", "\345\216\206\345\217\262", nullptr));
        cb2->setItemText(4, QCoreApplication::translate("Dlg_BookAU", "\344\272\272\346\226\207", nullptr));

        label_5->setText(QCoreApplication::translate("Dlg_BookAU", "\347\261\273\345\210\2533", nullptr));
        cb3->setItemText(0, QCoreApplication::translate("Dlg_BookAU", "\347\210\261\346\203\205", nullptr));
        cb3->setItemText(1, QCoreApplication::translate("Dlg_BookAU", "\346\225\260\345\255\246", nullptr));
        cb3->setItemText(2, QCoreApplication::translate("Dlg_BookAU", "\345\212\250\344\275\234", nullptr));
        cb3->setItemText(3, QCoreApplication::translate("Dlg_BookAU", "\345\216\206\345\217\262", nullptr));
        cb3->setItemText(4, QCoreApplication::translate("Dlg_BookAU", "\344\272\272\346\226\207", nullptr));

        btn_ok->setText(QCoreApplication::translate("Dlg_BookAU", "\347\241\256\345\256\232", nullptr));
        btn_cancel->setText(QCoreApplication::translate("Dlg_BookAU", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dlg_BookAU: public Ui_Dlg_BookAU {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_BOOKAU_H
