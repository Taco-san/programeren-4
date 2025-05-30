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
    QPushButton *pbExit;
    QPlainTextEdit *price;
    QPlainTextEdit *credit;
    QPlainTextEdit *change;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
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
        pbExit = new QPushButton(centralwidget);
        pbExit->setObjectName("pbExit");
        pbExit->setGeometry(QRect(9, 430, 80, 24));
        price = new QPlainTextEdit(centralwidget);
        price->setObjectName("price");
        price->setGeometry(QRect(880, 290, 241, 61));
        credit = new QPlainTextEdit(centralwidget);
        credit->setObjectName("credit");
        credit->setGeometry(QRect(880, 200, 241, 61));
        change = new QPlainTextEdit(centralwidget);
        change->setObjectName("change");
        change->setGeometry(QRect(880, 370, 241, 61));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(880, 180, 101, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(880, 260, 151, 21));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(880, 350, 151, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1128, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pbExit, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

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
        pbExit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Inserted money", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Current price of coffee", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Change to be returned", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
