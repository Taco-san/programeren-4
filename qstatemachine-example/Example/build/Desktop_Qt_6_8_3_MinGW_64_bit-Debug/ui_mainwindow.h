/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb1;
    QPushButton *pb2;
    QPushButton *pb3;
    QPushButton *pb4;
    QPushButton *pb5;
    QLabel *label_2;
    QPlainTextEdit *userInfo;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QPlainTextEdit *price;
    QPlainTextEdit *credit;
    QPlainTextEdit *change;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPlainTextEdit *c5;
    QPlainTextEdit *c10;
    QPlainTextEdit *c20;
    QPlainTextEdit *c50;
    QPlainTextEdit *c100;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pbShutdown;
    QLabel *label_12;
    QPlainTextEdit *coffeeCount;
    QPlainTextEdit *cappuchinoCount;
    QPlainTextEdit *espressoCount;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1128, 506);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(9, 9, 1111, 81));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        pb1 = new QPushButton(groupBox);
        pb1->setObjectName("pb1");

        horizontalLayout->addWidget(pb1);

        pb2 = new QPushButton(groupBox);
        pb2->setObjectName("pb2");

        horizontalLayout->addWidget(pb2);

        pb3 = new QPushButton(groupBox);
        pb3->setObjectName("pb3");

        horizontalLayout->addWidget(pb3);

        pb4 = new QPushButton(groupBox);
        pb4->setObjectName("pb4");

        horizontalLayout->addWidget(pb4);

        pb5 = new QPushButton(groupBox);
        pb5->setObjectName("pb5");

        horizontalLayout->addWidget(pb5);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 100, 47, 16));
        userInfo = new QPlainTextEdit(centralwidget);
        userInfo->setObjectName("userInfo");
        userInfo->setEnabled(false);
        userInfo->setGeometry(QRect(10, 120, 591, 141));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 260, 63, 16));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(9, 278, 591, 146));
        price = new QPlainTextEdit(centralwidget);
        price->setObjectName("price");
        price->setGeometry(QRect(870, 210, 241, 61));
        credit = new QPlainTextEdit(centralwidget);
        credit->setObjectName("credit");
        credit->setGeometry(QRect(870, 120, 241, 61));
        change = new QPlainTextEdit(centralwidget);
        change->setObjectName("change");
        change->setGeometry(QRect(870, 290, 241, 61));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(870, 100, 101, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(870, 180, 151, 21));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(870, 270, 151, 21));
        c5 = new QPlainTextEdit(centralwidget);
        c5->setObjectName("c5");
        c5->setGeometry(QRect(630, 430, 61, 31));
        c10 = new QPlainTextEdit(centralwidget);
        c10->setObjectName("c10");
        c10->setGeometry(QRect(700, 430, 61, 31));
        c20 = new QPlainTextEdit(centralwidget);
        c20->setObjectName("c20");
        c20->setGeometry(QRect(770, 430, 61, 31));
        c50 = new QPlainTextEdit(centralwidget);
        c50->setObjectName("c50");
        c50->setGeometry(QRect(840, 430, 61, 31));
        c100 = new QPlainTextEdit(centralwidget);
        c100->setObjectName("c100");
        c100->setGeometry(QRect(910, 430, 61, 31));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(630, 380, 181, 31));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(640, 400, 41, 31));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(710, 400, 41, 31));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(770, 400, 41, 31));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(840, 400, 41, 31));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(920, 400, 41, 31));
        pbShutdown = new QPushButton(centralwidget);
        pbShutdown->setObjectName("pbShutdown");
        pbShutdown->setGeometry(QRect(10, 430, 212, 24));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(630, 300, 181, 31));
        coffeeCount = new QPlainTextEdit(centralwidget);
        coffeeCount->setObjectName("coffeeCount");
        coffeeCount->setGeometry(QRect(630, 350, 61, 31));
        cappuchinoCount = new QPlainTextEdit(centralwidget);
        cappuchinoCount->setObjectName("cappuchinoCount");
        cappuchinoCount->setGeometry(QRect(700, 350, 61, 31));
        espressoCount = new QPlainTextEdit(centralwidget);
        espressoCount->setObjectName("espressoCount");
        espressoCount->setGeometry(QRect(770, 350, 61, 31));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(640, 320, 41, 31));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(700, 320, 61, 31));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(770, 320, 61, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1128, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QStateMachine - example", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Generate transitions", nullptr));
        pb1->setText(QCoreApplication::translate("MainWindow", "init", nullptr));
        pb2->setText(QString());
        pb3->setText(QString());
        pb4->setText(QString());
        pb5->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "User info", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "State logger", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Inserted money", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Current price of coffee", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Change to be returned", nullptr));
        c5->setPlainText(QCoreApplication::translate("MainWindow", "x", nullptr));
        c10->setPlainText(QCoreApplication::translate("MainWindow", "x", nullptr));
        c20->setPlainText(QCoreApplication::translate("MainWindow", "x", nullptr));
        c50->setPlainText(QCoreApplication::translate("MainWindow", "x", nullptr));
        c100->setPlainText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Amount of change in machine", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "5c", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "10c", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "20c", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "50c", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "100c", nullptr));
        pbShutdown->setText(QCoreApplication::translate("MainWindow", "Shutdown", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Amount of coffee in machine", nullptr));
        coffeeCount->setPlainText(QCoreApplication::translate("MainWindow", "x", nullptr));
        cappuchinoCount->setPlainText(QCoreApplication::translate("MainWindow", "x", nullptr));
        espressoCount->setPlainText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Coffee", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Capuchino", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Espresso", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
