/********************************************************************************
** Form generated from reading UI file 'cell_main.ui'
**
** Created by: Qt User Interface Compiler version 6.2.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_MAIN_H
#define UI_CELL_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cell_Main
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QWidget *tool;
    QGridLayout *gridLayout;
    QToolButton *btn_book;
    QToolButton *btn_user;
    QSpacerItem *verticalSpacer;
    QToolButton *btn_his;
    QStackedWidget *stackedWidget;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *Cell_Main)
    {
        if (Cell_Main->objectName().isEmpty())
            Cell_Main->setObjectName(QString::fromUtf8("Cell_Main"));
        Cell_Main->resize(1165, 816);
        Cell_Main->setStyleSheet(QString::fromUtf8("QStackedWidget{\n"
"	background-color:#c8aeff;\n"
"}\n"
"QPushButton[name=\"btn\"]{\n"
"	border-radius:4px;\n"
"	background:#9c9ce8;\n"
"	color:black;\n"
"	font:16px;\n"
"	min-height:28px;\n"
"	min-width:85px;\n"
"	padding:4px;\n"
"}\n"
"QPushButton[name=\"btn\"]:pressed{\n"
"	border-radius:4px;\n"
"	background:#7070ff;\n"
"	color:black;\n"
"	font:16px;\n"
"	min-height:28px;\n"
"	min-width:85px;\n"
"	padding:4px;\n"
"}\n"
"QPushButton[name=\"btnr\"]{\n"
"	border-radius:4px;\n"
"	background:#ff0000;\n"
"	color:yellow;\n"
"	font:16px;\n"
"	min-height:28px;\n"
"	min-width:85px;\n"
"	padding:4px;\n"
"}\n"
"QLineEdit[name=\"le\"]{\n"
"	border-radius:4px;\n"
"	min-height:25px;\n"
"	border:1px solid black;\n"
"	color:black;\n"
"}\n"
"QLabel[name=\"title\"]{\n"
"	font:18px '\351\273\221\344\275\223\342\200\230;\n"
"	color:black;\n"
"}\n"
"QLabel[name=\"lb\"]{\n"
"	font:20px '\346\245\267\344\275\223\342\200\230;\n"
"	color:black;\n"
"}\n"
""));
        centralwidget = new QWidget(Cell_Main);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#tool{\n"
"	background: #ababff;\n"
"}\n"
"\n"
"\n"
"QWidget#tool QToolButton {\n"
"    background: #ababff;\n"
"    color: black;\n"
"    min-height: 55px;\n"
"    font: 14px '\351\273\221\344\275\223';\n"
"    qproperty-iconSize: 18px 18px;\n"
"}\n"
"\n"
"\n"
"QWidget#tool QToolButton:checked {\n"
"    background: #2f2f46;\n"
"}\n"
"\n"
""));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tool = new QWidget(centralwidget);
        tool->setObjectName(QString::fromUtf8("tool"));
        tool->setMinimumSize(QSize(120, 0));
        tool->setMaximumSize(QSize(120, 16777215));
        gridLayout = new QGridLayout(tool);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_book = new QToolButton(tool);
        buttonGroup = new QButtonGroup(Cell_Main);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(btn_book);
        btn_book->setObjectName(QString::fromUtf8("btn_book"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_book->sizePolicy().hasHeightForWidth());
        btn_book->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setBold(false);
        font.setItalic(false);
        font.setKerning(false);
        btn_book->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Reading.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_book->setIcon(icon);
        btn_book->setCheckable(true);
        btn_book->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(btn_book, 1, 0, 1, 1);

        btn_user = new QToolButton(tool);
        buttonGroup->addButton(btn_user);
        btn_user->setObjectName(QString::fromUtf8("btn_user"));
        sizePolicy.setHeightForWidth(btn_user->sizePolicy().hasHeightForWidth());
        btn_user->setSizePolicy(sizePolicy);
        btn_user->setFont(font);
        btn_user->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/SetUp.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_user->setIcon(icon1);
        btn_user->setCheckable(true);
        btn_user->setChecked(false);
        btn_user->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(btn_user, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        btn_his = new QToolButton(tool);
        buttonGroup->addButton(btn_his);
        btn_his->setObjectName(QString::fromUtf8("btn_his"));
        sizePolicy.setHeightForWidth(btn_his->sizePolicy().hasHeightForWidth());
        btn_his->setSizePolicy(sizePolicy);
        btn_his->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Files.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_his->setIcon(icon2);
        btn_his->setCheckable(true);
        btn_his->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(btn_his, 2, 0, 1, 1);


        gridLayout_2->addWidget(tool, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        gridLayout_2->addWidget(stackedWidget, 0, 1, 1, 1);

        Cell_Main->setCentralWidget(centralwidget);

        retranslateUi(Cell_Main);

        QMetaObject::connectSlotsByName(Cell_Main);
    } // setupUi

    void retranslateUi(QMainWindow *Cell_Main)
    {
        Cell_Main->setWindowTitle(QCoreApplication::translate("Cell_Main", "QT\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        btn_book->setText(QCoreApplication::translate("Cell_Main", "  \345\233\276\344\271\246\347\256\241\347\220\206", nullptr));
        btn_user->setText(QCoreApplication::translate("Cell_Main", "  \347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        btn_his->setText(QCoreApplication::translate("Cell_Main", "  \345\200\237\351\230\205\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cell_Main: public Ui_Cell_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_MAIN_H
