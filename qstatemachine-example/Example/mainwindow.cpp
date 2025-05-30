#include "mainwindow.h"
#include "ui_mainwindow.h"



#include <QDateTime>
#include <QDebug>


//          *                                 +---------+
//          |                                 |         |
//          v                                 v         | button 2
//     +--------+                         +--------+    | clicked
//     |   S1   |                         |   S2   |----+
//     +--------+    button 2 clicked     +--------+
//     |        |------------------------>|        |
//     +--------+                         +--------+
//          ^                                  |
//          | button 1                         | button 3
//          | clicked   +--------+             | clicked
//          |           |   S3   |             |
//          |           +--------+             |
//          +-----------|        |<------------+
//                      +--------+

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QState *s_0 = new QState();
    QState *s_init = new QState();
    QState *s_shutdown = new QState();

    QState *s_waitForOption = new QState();
    QState *s_optionCappuchino = new QState();
    QState *s_optionEspresso = new QState();
    QState *s_optionCoffee = new QState();

    QState *s_waitForCoins = new QState();
    QState *s_process5C = new QState();
    QState *s_process10C = new QState();
    QState *s_process20C = new QState();
    QState *s_process50C = new QState();
    QState *s_process100C = new QState();

    QState *s_dispensingCoffeeState = new QState();
    QState *s_dispensingCappuchino = new QState();
    QState *s_dispensingEspresso = new QState();
    QState *s_dispensingCoffee = new QState();

    QState *s_dispensingChangeState = new QState();
    QState *s_dispense100C = new QState();
    QState *s_dispense50C = new QState();
    QState *s_dispense20C = new QState();
    QState *s_dispense10C = new QState();
    QState *s_dispense5C = new QState();

    QState *s_refill100C = new QState();
    QState *s_refill50C = new QState();
    QState *s_refill20C = new QState();
    QState *s_refill10C = new QState();
    QState *s_refill5C = new QState();
    QState *s_refillCoffee = new QState();
    QState *s_refillEspresso = new QState();
    QState *s_refillCappuchino = new QState();
    QState *s_waitForRefill = new QState();

    QState *s_waitForChangePickup = new QState();


    s_0->addTransition(ui->pb1, &QPushButton::clicked, s_init);
    s_init->addTransition(ui->pb1, &QPushButton::clicked, s_waitForOption);
    s_waitForOption->addTransition(ui->pb1, &QPushButton::clicked, s_optionCoffee);
    s_waitForOption->addTransition(ui->pb2, &QPushButton::clicked, s_optionCappuchino);
    s_waitForOption->addTransition(ui->pb3, &QPushButton::clicked, s_optionEspresso);
    s_optionCappuchino->addTransition(ui->pb1, &QPushButton::clicked, s_waitForCoins);
    s_optionEspresso->addTransition(ui->pb1, &QPushButton::clicked, s_waitForCoins);
    s_optionCoffee->addTransition(ui->pb1, &QPushButton::clicked, s_waitForCoins);
    s_optionCappuchino->addTransition(ui->pb2, &QPushButton::clicked, s_waitForOption);
    s_optionEspresso->addTransition(ui->pb2, &QPushButton::clicked, s_waitForOption);
    s_optionCoffee->addTransition(ui->pb2, &QPushButton::clicked, s_waitForOption);
    s_waitForCoins->addTransition(ui->pb1, &QPushButton::clicked, s_process5C);
    s_waitForCoins->addTransition(ui->pb2, &QPushButton::clicked, s_process10C);
    s_waitForCoins->addTransition(ui->pb3, &QPushButton::clicked, s_process20C);
    s_waitForCoins->addTransition(ui->pb4, &QPushButton::clicked, s_process50C);
    s_waitForCoins->addTransition(ui->pb5, &QPushButton::clicked, s_process100C);
    s_process5C->addTransition(internalEvent, SIGNAL(customNotEnough()), s_waitForCoins);
    s_process5C->addTransition(internalEvent, SIGNAL(customEnough()), s_dispensingCoffeeState);
    s_process10C->addTransition(internalEvent, SIGNAL(customNotEnough()), s_waitForCoins);
    s_process10C->addTransition(internalEvent, SIGNAL(customEnough()), s_dispensingCoffeeState);
    s_process20C->addTransition(internalEvent, SIGNAL(customNotEnough()), s_waitForCoins);
    s_process20C->addTransition(internalEvent, SIGNAL(customEnough()), s_dispensingCoffeeState);
    s_process50C->addTransition(internalEvent, SIGNAL(customNotEnough()), s_waitForCoins);
    s_process50C->addTransition(internalEvent, SIGNAL(customEnough()), s_dispensingCoffeeState);
    s_process100C->addTransition(internalEvent, SIGNAL(customNotEnough()), s_waitForCoins);
    s_process100C->addTransition(internalEvent, SIGNAL(customEnough()), s_dispensingCoffeeState);


    // Add all other states
    statemachine.addState(s_0);
    statemachine.addState(s_init);
    statemachine.addState(s_shutdown);

    statemachine.addState(s_waitForOption);
    statemachine.addState(s_optionCappuchino);
    statemachine.addState(s_optionEspresso);
    statemachine.addState(s_optionCoffee);

    statemachine.addState(s_waitForCoins);
    statemachine.addState(s_process5C);
    statemachine.addState(s_process10C);
    statemachine.addState(s_process20C);
    statemachine.addState(s_process50C);
    statemachine.addState(s_process100C);

    statemachine.addState(s_dispensingCoffeeState);
    statemachine.addState(s_dispensingCappuchino);
    statemachine.addState(s_dispensingEspresso);
    statemachine.addState(s_dispensingCoffee);

    statemachine.addState(s_dispensingChangeState);
    statemachine.addState(s_dispense100C);
    statemachine.addState(s_dispense50C);
    statemachine.addState(s_dispense20C);
    statemachine.addState(s_dispense10C);
    statemachine.addState(s_dispense5C);

    statemachine.addState(s_refill100C);
    statemachine.addState(s_refill50C);
    statemachine.addState(s_refill20C);
    statemachine.addState(s_refill10C);
    statemachine.addState(s_refill5C);
    statemachine.addState(s_refillCoffee);
    statemachine.addState(s_refillEspresso);
    statemachine.addState(s_refillCappuchino);
    statemachine.addState(s_waitForRefill);

    statemachine.addState(s_waitForChangePickup);

    statemachine.setInitialState(s_0);


    // Example: connect state entry/exit signals for all other states
    //connect(s_0, &QState::entered, this, &MainWindow::s1_entered );
    connect(s_init, &QState::entered, this,  &MainWindow::sinit_entered);
    connect(s_shutdown, &QState::entered, this, [](){ qDebug() << "Entered s_shutdown"; });

    connect(s_waitForOption, &QState::entered, this, &MainWindow::S_waitForOption_onEntry);
    connect(s_optionCappuchino, &QState::entered, this, &MainWindow::S_OptionCappuchino_onEntry);
    connect(s_optionEspresso, &QState::entered, this, &MainWindow::S_OptionEspresso_onEntry);
    connect(s_optionCoffee, &QState::entered, this, &MainWindow::S_OptionCoffee_onEntry);

    connect(s_waitForCoins, &QState::entered, this, &MainWindow::S_waitingForCoins);
    connect(s_process5C, &QState::entered, this, &MainWindow::S_5C_inserted);
    connect(s_process10C, &QState::entered, this, &MainWindow::S_10C_inserted);
    connect(s_process20C, &QState::entered, this, &MainWindow::S_20C_inserted);
    connect(s_process50C, &QState::entered, this,  &MainWindow::S_50C_inserted);
    connect(s_process100C, &QState::entered, this, &MainWindow::S_100C_inserted);

    connect(s_dispensingCoffeeState, &QState::entered, this, [](){ qDebug() << "Entered s_dispensingCoffeeState"; });
    connect(s_dispensingCappuchino, &QState::entered, this, [](){ qDebug() << "Entered s_dispensingCappuchino"; });
    connect(s_dispensingEspresso, &QState::entered, this, [](){ qDebug() << "Entered s_dispensingEspresso"; });
    connect(s_dispensingCoffee, &QState::entered, this, [](){ qDebug() << "Entered s_dispensingCoffee"; });

    connect(s_dispensingChangeState, &QState::entered, this, [](){ qDebug() << "Entered s_dispensingChangeState"; });
    connect(s_dispense100C, &QState::entered, this, [](){ qDebug() << "Entered s_dispense100C"; });
    connect(s_dispense50C, &QState::entered, this, [](){ qDebug() << "Entered s_dispense50C"; });
    connect(s_dispense20C, &QState::entered, this, [](){ qDebug() << "Entered s_dispense20C"; });
    connect(s_dispense10C, &QState::entered, this, [](){ qDebug() << "Entered s_dispense10C"; });
    connect(s_dispense5C, &QState::entered, this, [](){ qDebug() << "Entered s_dispense5C"; });

    connect(s_refill100C, &QState::entered, this, [](){ qDebug() << "Entered s_refill100C"; });
    connect(s_refill50C, &QState::entered, this, [](){ qDebug() << "Entered s_refill50C"; });
    connect(s_refill20C, &QState::entered, this, [](){ qDebug() << "Entered s_refill20C"; });
    connect(s_refill10C, &QState::entered, this, [](){ qDebug() << "Entered s_refill10C"; });
    connect(s_refill5C, &QState::entered, this, [](){ qDebug() << "Entered s_refill5C"; });
    connect(s_refillCoffee, &QState::entered, this, [](){ qDebug() << "Entered s_refillCoffee"; });
    connect(s_refillEspresso, &QState::entered, this, [](){ qDebug() << "Entered s_refillEspresso"; });
    connect(s_refillCappuchino, &QState::entered, this, [](){ qDebug() << "Entered s_refillCappuchino"; });
    connect(s_waitForRefill, &QState::entered, this, [](){ qDebug() << "Entered s_waitForRefill"; });

    connect(s_waitForChangePickup, &QState::entered, this, [](){ qDebug() << "Entered s_waitForChangePickup"; });

    statemachine.start();

    qDebug() << "MainWindow started";
    qDebug() << "Statemachine started started";
}

MainWindow::~MainWindow()
{
    qDebug() << "MainWindow closed";
    delete ui;
}

void MainWindow::sinit_entered(void)
{
    QString logstring;


    logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "Initialisation succesfull";
    ui->plainTextEdit->appendPlainText(logstring);

    credit.setCredit(0);
    ui->credit->appendPlainText(QString::number(credit.getCredit()));
    credit.setPrice(0);
    ui->price->appendPlainText(QString::number(credit.getPrice()));
    credit.setChange(0);
    ui->change->appendPlainText(QString::number(credit.getChange()));
    ui->userInfo->appendPlainText("Coffee Machine initialised.");
    ui->pb1->setText("Choose coffee option");
    ui->pb2->setText("administration");
}

void MainWindow::S_waitForOption_onEntry(void)
{
    QString logstring;


    logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entered S_waitForOption";
    ui->plainTextEdit->appendPlainText(logstring);
    credit.setPrice(0); // Reset price for new selection

    ui->pb1->setText("Coffee 150 cents");
    ui->pb2->setText("Cappuchino 175 cents");
    ui->pb3->setText("Espresso 225 cents");
    ui->userInfo->appendPlainText("Please choose your coffee");
}

void MainWindow::S_OptionCappuchino_onEntry(void)
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    credit.setPrice(175);
    ui->userInfo->appendPlainText("Cappuchino selected. Price is 175 cents.");
    ui->pb1->setText("Confirm selection");
    ui->pb2->setText("Cancel selection");
    ui->pb3->setText("");
    ui->price->appendPlainText(QString::number(credit.getPrice()));
}

void MainWindow::S_OptionEspresso_onEntry(void)
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    ui->userInfo->appendPlainText("Espresso selected. Price is 225 cents.");
    credit.setPrice(225);
    ui->pb1->setText("Confirm selection");
    ui->pb2->setText("Cancel selection");
    ui->pb3->setText("");
    ui->price->appendPlainText(QString::number(credit.getPrice()));
}

void MainWindow::S_OptionCoffee_onEntry(void)
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    credit.setPrice(150);
    ui->userInfo->appendPlainText("Coffee selected. Price is 150 cents.");
    ui->pb1->setText("Confirm selection");
    ui->pb2->setText("Cancel selection");
    ui->pb3->setText("");
    ui->price->appendPlainText(QString::number(credit.getPrice()));
}

void MainWindow::S_waitingForCoins()
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "Waiting for coins to be inserted";
    ui->plainTextEdit->appendPlainText(logstring);
    ui->userInfo->appendPlainText("Please insert coins to pay for your coffee.");
    ui->pb1->setText("Insert 5 cents");
    ui->pb2->setText("Insert 10 cents");
    ui->pb3->setText("Insert 20 cents");
    ui->pb4->setText("Insert 50 cents");
    ui->pb5->setText("Insert 100 cents");
}

void MainWindow::S_5C_inserted()
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "5 cents inserted";
    ui->plainTextEdit->appendPlainText(logstring);
    ProcessMoney(5);
}

void MainWindow::S_10C_inserted()
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "10 cents inserted";
    ui->plainTextEdit->appendPlainText(logstring);
    ProcessMoney(10);
}

void MainWindow::S_20C_inserted()
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "20 cents inserted";
    ui->plainTextEdit->appendPlainText(logstring);
    ProcessMoney(20);
}

void MainWindow::S_50C_inserted()
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "50 cents inserted";
    ui->plainTextEdit->appendPlainText(logstring);
    ProcessMoney(50);
}

void MainWindow::S_100C_inserted()
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "100 cents inserted";
    ui->plainTextEdit->appendPlainText(logstring);
    ProcessMoney(100);
}
void MainWindow::ProcessMoney(int money)
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "Processing money: " + QString::number(money) + " cents";
    ui->plainTextEdit->appendPlainText(logstring);

    credit.setCredit(credit.getCredit() + money);
    ui->credit->appendPlainText(QString::number(credit.getCredit()));

    if (credit.getCredit() >= credit.getPrice()) {
        // Enough credit to dispense coffee
        ui->userInfo->appendPlainText("Enough credit to dispense coffee.");
        // Transition to dispensing state
        statemachine.postEvent(new QEvent(QEvent::User));
        emit internalEvent->customEnough();
    } else {
        ui->userInfo->appendPlainText("Not enough credit. Please insert more coins.");
        emit internalEvent->customNotEnough();
    }
}
