/********************************************************************************
** Form generated from reading UI file 'dlg_bookgs.ui'
**
** Created by: Qt User Interface Compiler version 6.2.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_BOOKGS_H
#define UI_DLG_BOOKGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg_BookGS
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *lb_name;
    QLineEdit *le_user;
    QLabel *label_3;
    QLineEdit *le_passward;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_get;
    QPushButton *btn_cancel;

    void setupUi(QDialog *Dlg_BookGS)
    {
        if (Dlg_BookGS->objectName().isEmpty())
            Dlg_BookGS->setObjectName(QString::fromUtf8("Dlg_BookGS"));
        Dlg_BookGS->resize(469, 352);
        gridLayout_2 = new QGridLayout(Dlg_BookGS);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(Dlg_BookGS);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 50));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(Dlg_BookGS);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 50));

        gridLayout_2->addWidget(label_4, 0, 1, 1, 1);

        lb_name = new QLabel(Dlg_BookGS);
        lb_name->setObjectName(QString::fromUtf8("lb_name"));
        lb_name->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(lb_name, 1, 0, 1, 1);

        le_user = new QLineEdit(Dlg_BookGS);
        le_user->setObjectName(QString::fromUtf8("le_user"));
        le_user->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(le_user, 1, 1, 1, 1);

        label_3 = new QLabel(Dlg_BookGS);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        le_passward = new QLineEdit(Dlg_BookGS);
        le_passward->setObjectName(QString::fromUtf8("le_passward"));
        le_passward->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(le_passward, 2, 1, 1, 1);

        widget = new QWidget(Dlg_BookGS);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 60));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_get = new QPushButton(widget);
        btn_get->setObjectName(QString::fromUtf8("btn_get"));
        btn_get->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(btn_get, 0, 0, 1, 1);

        btn_cancel = new QPushButton(widget);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(btn_cancel, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 3, 0, 1, 2);


        retranslateUi(Dlg_BookGS);

        QMetaObject::connectSlotsByName(Dlg_BookGS);
    } // setupUi

    void retranslateUi(QDialog *Dlg_BookGS)
    {
        Dlg_BookGS->setWindowTitle(QCoreApplication::translate("Dlg_BookGS", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dlg_BookGS", "\345\233\276\344\271\246\345\220\215\347\247\260", nullptr));
        label_4->setText(QCoreApplication::translate("Dlg_BookGS", "XXX", nullptr));
        lb_name->setText(QCoreApplication::translate("Dlg_BookGS", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("Dlg_BookGS", "\345\257\206\347\240\201", nullptr));
        btn_get->setText(QCoreApplication::translate("Dlg_BookGS", "\345\200\237\351\230\205", nullptr));
        btn_cancel->setText(QCoreApplication::translate("Dlg_BookGS", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dlg_BookGS: public Ui_Dlg_BookGS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_BOOKGS_H
