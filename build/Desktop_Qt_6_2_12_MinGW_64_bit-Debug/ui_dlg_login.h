/********************************************************************************
** Form generated from reading UI file 'dlg_login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_LOGIN_H
#define UI_DLG_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg_login
{
public:
    QGridLayout *gridLayout;
    QWidget *bg;
    QGridLayout *gridLayout_2;
    QLabel *lb_title;
    QLabel *lb_txt1;
    QLineEdit *le_user;
    QLabel *lb_txt2;
    QLineEdit *le_password;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QPushButton *btn_login;
    QPushButton *btn_exit;

    void setupUi(QDialog *Dlg_login)
    {
        if (Dlg_login->objectName().isEmpty())
            Dlg_login->setObjectName(QString::fromUtf8("Dlg_login"));
        Dlg_login->resize(353, 422);
        Dlg_login->setStyleSheet(QString::fromUtf8("QLabel#lb_title{\n"
"	font:40px '\351\273\221\344\275\223';\n"
"	color:black\n"
"}\n"
"QLabel#lb_txt1,QLabel#lb_txt2{\n"
"	font:18px '\345\256\213\344\275\223';\n"
"	color:white\n"
"}\n"
"QLineEdit{\n"
"	border-radius:4px;\n"
"	min-height:25px;\n"
"	border:1px solid black;\n"
"	background:white;\n"
"	color:black\n"
"}\n"
"QPushButton{\n"
"	border-radius:4px;\n"
"	border:1px solid black;\n"
"	background:white;font-size:16px;\n"
"	color:black}\n"
"QWidget#bg{\n"
"	background:qlineargradient(spread:pad, x1:0.078, y1:0, x2:1, y2:0, stop:0.0782123 rgba(84, 0, 169, 255), stop:1 rgba(255, 134, 255, 255))\n"
"}"));
        gridLayout = new QGridLayout(Dlg_login);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        bg = new QWidget(Dlg_login);
        bg->setObjectName(QString::fromUtf8("bg"));
        gridLayout_2 = new QGridLayout(bg);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lb_title = new QLabel(bg);
        lb_title->setObjectName(QString::fromUtf8("lb_title"));
        lb_title->setMaximumSize(QSize(16777215, 60));
        lb_title->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lb_title, 0, 0, 1, 2);

        lb_txt1 = new QLabel(bg);
        lb_txt1->setObjectName(QString::fromUtf8("lb_txt1"));
        lb_txt1->setMaximumSize(QSize(65, 16777215));
        lb_txt1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lb_txt1, 1, 0, 1, 1);

        le_user = new QLineEdit(bg);
        le_user->setObjectName(QString::fromUtf8("le_user"));
        le_user->setMaximumSize(QSize(220, 16777215));

        gridLayout_2->addWidget(le_user, 1, 1, 1, 1);

        lb_txt2 = new QLabel(bg);
        lb_txt2->setObjectName(QString::fromUtf8("lb_txt2"));
        lb_txt2->setMaximumSize(QSize(65, 16777215));
        lb_txt2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lb_txt2, 2, 0, 1, 1);

        le_password = new QLineEdit(bg);
        le_password->setObjectName(QString::fromUtf8("le_password"));
        le_password->setMaximumSize(QSize(220, 16777215));

        gridLayout_2->addWidget(le_password, 2, 1, 1, 1);

        widget = new QWidget(bg);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 35));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(20);
        gridLayout_3->setVerticalSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        btn_login = new QPushButton(widget);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        btn_login->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(btn_login, 0, 0, 1, 1);

        btn_exit = new QPushButton(widget);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));
        btn_exit->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(btn_exit, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 3, 0, 1, 2);


        gridLayout->addWidget(bg, 0, 0, 1, 1);


        retranslateUi(Dlg_login);

        QMetaObject::connectSlotsByName(Dlg_login);
    } // setupUi

    void retranslateUi(QDialog *Dlg_login)
    {
        Dlg_login->setWindowTitle(QCoreApplication::translate("Dlg_login", "\347\231\273\345\275\225", nullptr));
        lb_title->setText(QCoreApplication::translate("Dlg_login", "QT\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        lb_txt1->setText(QCoreApplication::translate("Dlg_login", "\347\224\250\346\210\267\345\220\215 ", nullptr));
        lb_txt2->setText(QCoreApplication::translate("Dlg_login", "\345\257\206  \347\240\201 ", nullptr));
        btn_login->setText(QCoreApplication::translate("Dlg_login", "\347\231\273\345\275\225", nullptr));
        btn_exit->setText(QCoreApplication::translate("Dlg_login", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dlg_login: public Ui_Dlg_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_LOGIN_H
