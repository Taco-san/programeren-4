#include "mainwindow.h"
#include "ui_mainwindow.h"



#include <QDateTime>
#include <QDebug>

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

    QState *s_changeRefill = new QState();
    QState *s_refillCoffeeType = new QState();
    QState *s_adminPanel = new QState();
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
    s_waitForOption->addTransition(ui->pb3, &QPushButton::clicked, s_optionCoffee);
    s_waitForOption->addTransition(ui->pb1, &QPushButton::clicked, s_optionCappuchino);
    s_waitForOption->addTransition(ui->pb2, &QPushButton::clicked, s_optionEspresso);
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
    s_dispensingCoffeeState->addTransition(internalEvent, SIGNAL(dispenseCappuchino()), s_dispensingCappuchino);
    s_dispensingCoffeeState->addTransition(internalEvent, SIGNAL(dispenseEspresso()), s_dispensingEspresso);
    s_dispensingCoffeeState->addTransition(internalEvent, SIGNAL(dispenseCoffee()), s_dispensingCoffee);
    s_dispensingCappuchino->addTransition(ui->pb1, &QPushButton::clicked, s_dispensingChangeState);
    s_dispensingEspresso->addTransition(ui->pb1, &QPushButton::clicked, s_dispensingChangeState);
    s_dispensingCoffee->addTransition(ui->pb1, &QPushButton::clicked, s_dispensingChangeState);
    s_dispensingChangeState->addTransition(internalEvent, SIGNAL(dispense100c()), s_dispense100C);
    s_dispensingChangeState->addTransition(internalEvent, SIGNAL(dispense50c()), s_dispense50C);
    s_dispensingChangeState->addTransition(internalEvent, SIGNAL(dispense20c()), s_dispense20C);
    s_dispensingChangeState->addTransition(internalEvent, SIGNAL(dispense10c()), s_dispense10C);
    s_dispensingChangeState->addTransition(internalEvent, SIGNAL(dispense5c()), s_dispense5C);
    s_dispensingChangeState->addTransition(internalEvent, SIGNAL(NoChange()), s_waitForChangePickup);
    s_dispense100C->addTransition(internalEvent, SIGNAL(changeOver()), s_dispensingChangeState);
    s_dispense50C->addTransition(internalEvent, SIGNAL(changeOver()), s_dispensingChangeState);
    s_dispense20C->addTransition(internalEvent, SIGNAL(changeOver()), s_dispensingChangeState);
    s_dispense10C->addTransition(internalEvent, SIGNAL(changeOver()), s_dispensingChangeState);
    s_dispense5C->addTransition(internalEvent, SIGNAL(changeOver()), s_dispensingChangeState);
    s_dispense100C->addTransition(internalEvent, SIGNAL(NoChange()), s_waitForChangePickup);
    s_dispense50C->addTransition(internalEvent, SIGNAL(NoChange()), s_waitForChangePickup);
    s_dispense20C->addTransition(internalEvent, SIGNAL(NoChange()), s_waitForChangePickup);
    s_dispense10C->addTransition(internalEvent, SIGNAL(NoChange()), s_waitForChangePickup);
    s_dispense5C->addTransition(internalEvent, SIGNAL(NoChange()), s_waitForChangePickup);
    s_waitForChangePickup->addTransition(ui->pb1, &QPushButton::clicked, s_waitForOption);
    s_0->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_init->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_waitForOption->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_optionCappuchino->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_optionEspresso->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_optionCoffee->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_waitForCoins->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_process5C->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_process10C->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_process20C->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_process50C->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_process100C->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_dispensingCoffeeState->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_dispensingCappuchino->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_dispensingEspresso->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_dispensingCoffee->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_dispensingChangeState->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_dispense100C->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_dispense50C->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_dispense20C->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_dispense10C->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_dispense5C->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_refill100C->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_refill50C->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_refill20C->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_refill10C->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_refill5C->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_refillCoffee->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_refillEspresso->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_refillCappuchino->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_waitForRefill->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_waitForChangePickup->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_adminPanel->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_refillCoffeeType->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_changeRefill->addTransition(ui->pbShutdown, &QPushButton::clicked, s_shutdown);
    s_optionCoffee->addTransition(internalEvent, SIGNAL(NoCoffeeType()), s_waitForOption);
    s_optionCappuchino->addTransition(internalEvent, SIGNAL(NoCoffeeType()), s_waitForOption);
    s_optionEspresso->addTransition(internalEvent, SIGNAL(NoCoffeeType()), s_waitForOption);
    s_init->addTransition(ui->pb2, &QPushButton::clicked, s_adminPanel);  
    s_waitForOption->addTransition(ui->pb6, &QPushButton::clicked, s_adminPanel);
    s_adminPanel->addTransition(ui->pb1, &QPushButton::clicked, s_refillCoffeeType);
    s_adminPanel->addTransition(ui->pb2, &QPushButton::clicked, s_changeRefill);
    s_adminPanel->addTransition(ui->pb3, &QPushButton::clicked, s_waitForOption);
    s_refillCoffeeType->addTransition(ui->pb3, &QPushButton::clicked, s_refillCoffee);
    s_refillCoffeeType->addTransition(ui->pb2, &QPushButton::clicked, s_refillEspresso);
    s_refillCoffeeType->addTransition(ui->pb1, &QPushButton::clicked, s_refillCappuchino);
    s_refillCoffeeType->addTransition(ui->pb4, &QPushButton::clicked, s_adminPanel);
    s_changeRefill->addTransition(ui->pb5, &QPushButton::clicked, s_refill100C);
    s_changeRefill->addTransition(ui->pb4, &QPushButton::clicked, s_refill50C);
    s_changeRefill->addTransition(ui->pb3, &QPushButton::clicked, s_refill20C);
    s_changeRefill->addTransition(ui->pb2, &QPushButton::clicked, s_refill10C);
    s_changeRefill->addTransition(ui->pb1, &QPushButton::clicked, s_refill5C);
    s_changeRefill->addTransition(ui->pb6, &QPushButton::clicked, s_adminPanel);
    s_refill100C->addTransition(internalEvent, SIGNAL(refillComplete()), s_changeRefill);
    s_refill50C->addTransition(internalEvent, SIGNAL(refillComplete()), s_changeRefill);
    s_refill20C->addTransition(internalEvent, SIGNAL(refillComplete()), s_changeRefill);
    s_refill10C->addTransition(internalEvent, SIGNAL(refillComplete()), s_changeRefill);
    s_refill5C->addTransition(internalEvent, SIGNAL(refillComplete()), s_changeRefill);
    s_refillCoffee->addTransition(internalEvent, SIGNAL(refillComplete()), s_refillCoffeeType);
    s_refillEspresso->addTransition(internalEvent, SIGNAL(refillComplete()), s_refillCoffeeType);
    s_refillCappuchino->addTransition(internalEvent, SIGNAL(refillComplete()), s_refillCoffeeType);




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

    statemachine.addState(s_changeRefill);
    statemachine.addState(s_adminPanel);
    statemachine.addState(s_refillCoffeeType);

    statemachine.setInitialState(s_0);


    // Example: connect state entry/exit signals for all other states
    //connect(s_0, &QState::entered, this, &MainWindow::s1_entered );
    connect(s_init, &QState::entered, this,  &MainWindow::sinit_entered);
    connect(s_shutdown, &QState::entered, this, &MainWindow::onShutdown);

    connect(s_waitForOption, &QState::entered, this, &MainWindow::S_waitForOption_onEntry);
    connect(s_optionCappuchino, &QState::entered, this, &MainWindow::S_OptionCappuchino_onEntry);
    connect(s_optionEspresso, &QState::entered, this, &MainWindow::S_OptionEspresso_onEntry);
    connect(s_optionCoffee, &QState::entered, this, &MainWindow::S_OptionCoffee_onEntry);

    connect(s_waitForCoins, &QState::entered, this, &MainWindow::S_waitingForCoins);
    connect(s_process5C, &QState::entered, this, &MainWindow::S_5C_inserted);
    connect(s_process10C, &QState::entered, this, &MainWindow::S_10C_inserted);
    connect(s_process20C, &QState::entered, this, &MainWindow::S_20C_inserted);
    connect(s_process50C, &QState::entered, this, &MainWindow::S_50C_inserted);
    connect(s_process100C, &QState::entered, this, &MainWindow::S_100C_inserted);

    connect(s_dispensingCoffeeState, &QState::entered, this, &MainWindow::S_ProcessingCoffee);
    connect(s_dispensingCappuchino, &QState::entered, this, &MainWindow::S_dispensedCappuchino);
    connect(s_dispensingEspresso, &QState::entered, this, &MainWindow::S_dispensedEspresso);
    connect(s_dispensingCoffee, &QState::entered, this, &MainWindow::S_dispensedCoffee);

    connect(s_dispensingChangeState, &QState::entered, this, &MainWindow::s_dispensingChange);
    connect(s_dispense100C, &QState::entered, this, &MainWindow::S_dispensing100c);
    connect(s_dispense50C, &QState::entered, this, &MainWindow::S_dispensing50c);
    connect(s_dispense20C, &QState::entered, this, &MainWindow::S_dispensing20c);
    connect(s_dispense10C, &QState::entered, this, &MainWindow::S_dispensing10c);
    connect(s_dispense5C, &QState::entered, this, &MainWindow::S_dispensing5c);
    connect(s_waitForChangePickup, &QState::entered, this, &MainWindow::S_waitForChangePickup);

    connect(s_refill100C, &QState::entered, this, &MainWindow::s_refill100C);
    connect(s_refill50C, &QState::entered, this, &MainWindow::s_refill50C);
    connect(s_refill20C, &QState::entered, this, &MainWindow::s_refill20C);
    connect(s_refill10C, &QState::entered, this, &MainWindow::s_refill10C);
    connect(s_refill5C, &QState::entered, this, &MainWindow::s_refill5C);
    connect(s_refillCoffee, &QState::entered, this, &MainWindow::s_refillCoffee);
    connect(s_refillEspresso, &QState::entered, this, &MainWindow::s_refillEspresso);
    connect(s_refillCappuchino, &QState::entered, this, &MainWindow::s_refillCappuchino);
    connect(s_waitForRefill, &QState::entered, this, [](){ qDebug() << "Entered s_waitForRefill"; });

    connect(s_changeRefill, &QState::entered, this, &MainWindow::s_refillChange);
    connect(s_adminPanel, &QState::entered, this, &MainWindow::s_admininstartionPanel);
    connect(s_refillCoffeeType, &QState::entered, this, &MainWindow::s_refillCoffeeType);
    

    statemachine.start();

    qDebug() << "MainWindow started";
    qDebug() << "Statemachine started started";
}

MainWindow::~MainWindow()
{
    qDebug() << "MainWindow closed";
    delete ui;
}

// init function for the state machine initialises all variables and sets the initial state
void MainWindow::sinit_entered(void)
{
    QString logstring;


    logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entered sinit_entered";
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
    savingHandler::loadData(credit, coffeeType, "data.txt");
    updateCoffeeTypeUI();

    updateChangeUI();

}

// wait for option state is entered when the user has selected a coffee option
void MainWindow::S_waitForOption_onEntry(void)
{
    QString logstring;


    logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entered S_waitForOption";
    ui->plainTextEdit->appendPlainText(logstring);
    credit.setPrice(0); // Reset price for new selection
    credit.setCredit(0); // Reset credit for new selection
    credit.setType(0); // Reset coffee type
    credit.setChange(0); // Reset change
    ui->price->setPlainText(QString::number(credit.getPrice()));
    ui->credit->setPlainText(QString::number(credit.getCredit()));
    ui->change->setPlainText(QString::number(credit.getChange()));

    if (coffeeType.getCappuchinoCount() == 0) {
        ui->pb1->setText("Cappuchino (out of stock)");
    } else {
        ui->pb1->setText("Cappuchino 175 cents");
    }
    if (coffeeType.getEspressoCount() == 0) {
        ui->pb2->setText("Espresso (out of stock)");
    } else {
        ui->pb2->setText("Espresso 225 cents");
    }
    if (coffeeType.getCoffeeCount() == 0) {
        ui->pb3->setText("Coffee (out of stock)");
    } else {
        ui->pb3->setText("Coffee 150 cents");
    }
    ui->pb6->setText("Administration");
    ui->userInfo->appendPlainText("Please choose your coffee");
}


// This function is called when the user selects Cappuchino
// It checks if Cappuchino is available and sets the price and type accordingly
void MainWindow::S_OptionCappuchino_onEntry(void)
{
    QString logstring;
    logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entered S_OptionCappuchino_onEntry";
    ui->plainTextEdit->appendPlainText(logstring);
    if (coffeeType.getCappuchinoCount() == 0) {
        ui->userInfo->appendPlainText("No Cappuchino available. Please choose another option.");
        emit internalEvent->NoCoffeeType();
    } else {
        QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
        credit.setPrice(175);
        credit.setType(1); // Set coffee type to Cappuchino
        ui->userInfo->appendPlainText("Cappuchino selected. Price is 175 cents.");
        ui->pb1->setText("Confirm selection");
        ui->pb2->setText("Cancel selection");
        ui->pb3->setText("");
        ui->price->setPlainText(QString::number(credit.getPrice()));
    }
}

// This function is called when the user selects Espresso
// It checks if Espresso is available and sets the price and type accordingly
void MainWindow::S_OptionEspresso_onEntry(void)
{
    QString logstring;
    logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entered S_OptionEspresso_onEntry";
    ui->plainTextEdit->appendPlainText(logstring);
    if (coffeeType.getEspressoCount() == 0) {
        ui->userInfo->appendPlainText("No Espresso available. Please choose another option.");
        emit internalEvent->NoCoffeeType();
    } else {
        QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
        credit.setPrice(225);
        credit.setType(2); // Set coffee type to Espresso
        ui->userInfo->appendPlainText("Espresso selected. Price is 225 cents.");
        ui->pb1->setText("Confirm selection");
        ui->pb2->setText("Cancel selection");
        ui->pb3->setText("");
        ui->price->setPlainText(QString::number(credit.getPrice()));
    }
}

// This function is called when the user selects Coffee
// It checks if Coffee is available and sets the price and type accordingly
void MainWindow::S_OptionCoffee_onEntry(void)
{
    QString logstring;
    logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entered S_OptionCoffee_onEntry";
    ui->plainTextEdit->appendPlainText(logstring);
    if (coffeeType.getCoffeeCount() == 0) {
        ui->userInfo->appendPlainText("No Coffee available. Please choose another option.");
        emit internalEvent->NoCoffeeType();
    }
    else
    {
    credit.setPrice(150);
    credit.setType(3); // Set coffee type to Coffee
    ui->userInfo->appendPlainText("Coffee selected. Price is 150 cents.");
    ui->pb1->setText("Confirm selection");
    ui->pb2->setText("Cancel selection");
    ui->pb3->setText("");
    ui->price->setPlainText(QString::number(credit.getPrice()));
    }
}

// waiting for coins state updates the UI to prompt the user to insert coins
void MainWindow::S_waitingForCoins()
{
    QString logstring;
    logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entered S_waitingForCoins";
    ui->plainTextEdit->appendPlainText(logstring);
    ui->userInfo->appendPlainText("Please insert coins to pay for your coffee.");
    ui->pb1->setText("Insert 5 cents");
    ui->pb2->setText("Insert 10 cents");
    ui->pb3->setText("Insert 20 cents");
    ui->pb4->setText("Insert 50 cents");
    ui->pb5->setText("Insert 100 cents");
}

// This function is called when the user inserts 5 cents and updates the credit and cointype accordingly
void MainWindow::S_5C_inserted()
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entered S_5C_inserted";
    credit.addCoin5c(1);
    updateChangeUI();
    ui->plainTextEdit->appendPlainText(logstring);
    ProcessMoney(5);
}

// This function is called when the user inserts 10 cents and updates the credit and cointype accordingly
void MainWindow::S_10C_inserted()
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entered S_10C_inserted";
    credit.addCoin10c(1);
    updateChangeUI();
    ui->plainTextEdit->appendPlainText(logstring);
    ProcessMoney(10);
}

// This function is called when the user inserts 20 cents and updates the credit and cointype accordingly
void MainWindow::S_20C_inserted()
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entered S_20C_inserted";
    credit.addCoin20c(1);
    updateChangeUI();
    ui->plainTextEdit->appendPlainText(logstring);
    ProcessMoney(20);
}

// This function is called when the user inserts 50 cents and updates the credit and cointype accordingly
void MainWindow::S_50C_inserted()
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entered S_50C_inserted";
    credit.addCoin50c(1);
    updateChangeUI();
    ui->plainTextEdit->appendPlainText(logstring);
    ProcessMoney(50);
}

// This function is called when the user inserts 100 cents and updates the credit and cointype accordingly
void MainWindow::S_100C_inserted()
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entered S_100C_inserted";
    credit.addCoin100c(1);
    updateChangeUI();
    ui->plainTextEdit->appendPlainText(logstring);
    ProcessMoney(100);
}

// This function processes the money inserted by the user and performs the necessary checks
void MainWindow::ProcessMoney(int money)
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entere processmoney logic";
    ui->plainTextEdit->appendPlainText(logstring);

    credit.setCredit(credit.getCredit() + money);
    // Update the credit text by replacing its content instead of appending
    ui->credit->setPlainText(QString::number(credit.getCredit()));
    ui->change->setPlainText(QString::number(credit.getChange()));

    if (credit.getCredit() >= credit.getPrice()) {
        ui->userInfo->appendPlainText("Enough credit to dispense coffee.");
        statemachine.postEvent(new QEvent(QEvent::User));
        emit internalEvent->customEnough();
    } else {
        ui->userInfo->appendPlainText("Not enough credit. Please insert more coins.");
        emit internalEvent->customNotEnough();
    }
}

// this function performs the logic of which coffee to dispense based on the user's selection
void MainWindow::S_ProcessingCoffee(void)
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    credit.setChange(credit.getCredit() - credit.getPrice());
    logstring += "entered S_ProcessingCoffee";
    ui->plainTextEdit->appendPlainText(logstring);
    switch(credit.getType()) {
        case 1: // Cappuchino
            logstring += "Dispensing Cappuchino";
            statemachine.postEvent(new QEvent(QEvent::User));
            emit internalEvent->dispenseCappuchino();
            break;
        case 2: // Espresso
            logstring += "Dispensing Espresso";
            statemachine.postEvent(new QEvent(QEvent::User));
            emit internalEvent->dispenseEspresso();
            break;
        case 3: // Coffee
            logstring += "Dispensing Coffee";
            statemachine.postEvent(new QEvent(QEvent::User));
            emit internalEvent->dispenseCoffee();
            break;
        default:
            ui->userInfo->appendPlainText("Unknown coffee type selected. ERROR!");
    }
}

// this function prompts the user to take their cappuchino and updates the coffee type count
void MainWindow::S_dispensedCappuchino(void)
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entered S_dispensedCappuchino";
    ui->plainTextEdit->appendPlainText(logstring);
    coffeeType.setCappuchinoCount(coffeeType.getCappuchinoCount() - 1);
    ui->pb1->setText("take your Cappuchino");
    ui->pb2->setText("");
    ui->pb3->setText("");
    ui->pb4->setText("");
    ui->pb5->setText("");
    updateCoffeeTypeUI();
}

// this function prompts the user to take their espresso and updates the coffee type count
void MainWindow::S_dispensedEspresso(void)
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entered S_dispensedEspresso";
    ui->plainTextEdit->appendPlainText(logstring);
    coffeeType.setEspressoCount(coffeeType.getEspressoCount() - 1);
    ui->pb1->setText("take your Espresso");
    ui->pb2->setText("");
    ui->pb3->setText("");
    ui->pb4->setText("");
    ui->pb5->setText("");
    updateCoffeeTypeUI();
}

// this function prompts the user to take their coffee and updates the coffee type count
void MainWindow::S_dispensedCoffee(void)
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entered S_dispensedCoffee";
    ui->plainTextEdit->appendPlainText(logstring);
    coffeeType.setCoffeeCount(coffeeType.getCoffeeCount() - 1);
    ui->pb1->setText("take your Coffee");
    ui->pb2->setText("");
    ui->pb3->setText("");
    ui->pb4->setText("");
    ui->pb5->setText("");
    updateCoffeeTypeUI();
}


// this function performs the logic for dispensing change to the user which includes going from highest to lowest denomination
void MainWindow::s_dispensingChange(void)
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entered s_dispensingChange";
    ui->plainTextEdit->setPlainText(logstring);

    ui->change->setPlainText(QString::number(credit.getChange()));
    

    int change = credit.getChange();
    int change100 = credit.getCoin100cCount();
    int change50 = credit.getCoin50cCount();
    int change20 = credit.getCoin20cCount();
    int change10 = credit.getCoin10cCount();
    int change5 = credit.getCoin5cCount();

    ui->userInfo->appendPlainText("change to dispense:");
    ui->userInfo->appendPlainText(QString::number(change) + " cents");

    if (change >= 100 && change100 > 0){
        emit internalEvent->dispense100c();
    }
    else if (change >= 50 && change50 > 0){
        emit internalEvent->dispense50c();
    }
    else if (change >= 20 && change20 > 0){
        emit internalEvent->dispense20c();
    }
    else if (change >= 10 && change10 > 0){
        emit internalEvent->dispense10c();
    }
    else if (change >= 5 && change5 > 0){
        emit internalEvent->dispense5c();
    }
    else {
        ui->userInfo->appendPlainText("No suitibal change to dispense please call administration.");
        emit internalEvent->NoChange();
        ui->change->setPlainText(QString::number(credit.getChange()));
    }
}


// This function dispenses 100 cents to the user and updates the change and coin count accordingly
void MainWindow::S_dispensing100c(void)
{
    QString logstring;
    logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entered S_dispensing100c";
    ui->plainTextEdit->appendPlainText(logstring);
    int currentChange = credit.getChange();
    int newChange = currentChange - 100;
    credit.setChange(newChange);
    credit.addCoin100c(-1);
    updateChangeUI();
    ui->change->setPlainText(QString::number(credit.getChange()));
    ui->userInfo->appendPlainText("Dispensed 100c.");
    if (credit.getChange() > 0) {
        emit internalEvent->changeOver();
    } else {
        ui->userInfo->appendPlainText("No more change to dispense.");
        emit internalEvent->NoChange();
        credit.setCredit(0);
    }   
}

// This function dispenses 50 cents to the user and updates the change and coin count accordingly
void MainWindow::S_dispensing50c(void)
{
        QString logstring;
    logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entered S_dispensing50c";
    ui->plainTextEdit->appendPlainText(logstring);
    int currentChange = credit.getChange();
    int newChange = currentChange - 50;
    credit.setChange(newChange);
    credit.addCoin50c(-1);
    updateChangeUI();
    ui->change->setPlainText(QString::number(credit.getChange()));
    ui->userInfo->appendPlainText("Dispensed 50c.");
    if (credit.getChange() > 0) {
        emit internalEvent->changeOver();
    } else {
        ui->userInfo->appendPlainText("No more change to dispense.");
        emit internalEvent->NoChange();
    }
}

// This function dispenses 20 cents to the user and updates the change and coin count accordingly
void MainWindow::S_dispensing20c(void)
{
    QString logstring;
    logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entered S_dispensing20c";
    ui->plainTextEdit->appendPlainText(logstring);
    int currentChange = credit.getChange();
    int newChange = currentChange - 20;
    credit.setChange(newChange);
    credit.addCoin20c(-1);
    updateChangeUI();
    ui->change->setPlainText(QString::number(credit.getChange()));
    ui->userInfo->appendPlainText("Dispensed 20c.");
    if (credit.getChange() > 0) {
        emit internalEvent->changeOver();
    } else {
        ui->userInfo->appendPlainText("No more change to dispense.");
        emit internalEvent->NoChange();;
    }
}

// This function dispenses 10 cents to the user and updates the change and coin count accordingly
void MainWindow::S_dispensing10c(void)
{
    QString logstring;
    logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entered S_dispensing10c";
    ui->plainTextEdit->appendPlainText(logstring);
    int currentChange = credit.getChange();
    int newChange = currentChange - 10;
    credit.setChange(newChange);
    credit.addCoin10c(-1);
    updateChangeUI();
    ui->change->setPlainText(QString::number(credit.getChange()));
    ui->userInfo->appendPlainText("Dispensed 10c.");
    if (credit.getChange() > 0) {
        emit internalEvent->changeOver();
    } else {
        ui->userInfo->appendPlainText("No more change to dispense.");
        emit internalEvent->NoChange();
    }
}

// This function dispenses 5 cents to the user and updates the change and coin count accordingly
void MainWindow::S_dispensing5c(void)
{
    QString logstring;
    logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "entered S_dispensing5c";
    ui->plainTextEdit->appendPlainText(logstring);;
    int currentChange = credit.getChange();
    int newChange = currentChange - 5;
    credit.setChange(newChange);
    credit.addCoin5c(-1);
    updateChangeUI();
    ui->change->setPlainText(QString::number(credit.getChange()));
    ui->userInfo->appendPlainText("Dispensed 5c");
    if (credit.getChange() > 0) {
        emit internalEvent->changeOver();
    } else {
        ui->userInfo->appendPlainText("No more change to dispense.");
        emit internalEvent->NoChange();
    }
}


// This function waits for the user to pick up their change after dispensing
void MainWindow::S_waitForChangePickup(void)
{
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "Waiting for change pickup";
    ui->plainTextEdit->appendPlainText(logstring);
    ui->userInfo->appendPlainText("Please take your change.");
    ui->pb1->setText("Take change");
    ui->pb2->setText("");
    ui->pb3->setText("");
    ui->pb4->setText("");
    ui->pb5->setText("");
    ui->price->setPlainText(QString::number(credit.getPrice()));
    ui->change->setPlainText(QString::number(credit.getChange()));
}

// This function updates the UI to show the current change counts
void MainWindow::updateChangeUI()
{
    ui->c5->setPlainText(QString::number(credit.getCoin5cCount()));
    ui->c10->setPlainText(QString::number(credit.getCoin10cCount()));
    ui->c20->setPlainText(QString::number(credit.getCoin20cCount()));
    ui->c50->setPlainText(QString::number(credit.getCoin50cCount()));
    ui->c100->setPlainText(QString::number(credit.getCoin100cCount()));
}

// This function performs the shutdown logic when the application is closed such as saving the data to a file
void MainWindow::onShutdown(){
    savingHandler::saveData(credit, coffeeType, "data.txt");
    qDebug() << "Saving data to file";
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    // ... any other shutdown logic ...
    QApplication::quit();
}

// This function updates the UI to show the current coffee type counts
void MainWindow::updateCoffeeTypeUI()
{
    ui->cappuchinoCount->setPlainText(QString::number(coffeeType.getCappuchinoCount()));
    ui->espressoCount->setPlainText(QString::number(coffeeType.getEspressoCount()));
    ui->coffeeCount->setPlainText(QString::number(coffeeType.getCoffeeCount()));
}


// This function sets the UI for the administration panel where the user can refill coffee and change
void MainWindow::s_admininstartionPanel(void)
{
    ui->pb1->setText("coffee refill");
    ui->pb2->setText("change refill");
    ui->pb3->setText("back to main menu");
    ui->pb4->setText("");
    ui->pb5->setText("");
    ui->pb6->setText("");
}

// This function sets the UI for the refill change state where the user can refill different coffee types
void MainWindow::s_refillCoffeeType(void)
{
    ui->pb1->setText("refill cappuchino");
    ui->pb2->setText("refill espresso");
    ui->pb3->setText("refill coffee");
    ui->pb4->setText("back to administration panel");
}

// This function sets the UI for the refill change state where the user can refill different change denominations
void MainWindow::s_refillChange(void)
{
    ui->pb1->setText("refill 5 cents");
    ui->pb2->setText("refill 10 cents");
    ui->pb3->setText("refill 20 cents");
    ui->pb4->setText("refill 50 cents");
    ui->pb5->setText("refill 100 cents");
    ui->pb6->setText("back to administration panel");
}

// this function refills 100 cents in the change handler and updates the UI accordingly
void MainWindow::s_refill100C(void)
{
    credit.addCoin100c(1); // Use coinhandler
    updateChangeUI();
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "Refilled 100 cents";
    ui->plainTextEdit->appendPlainText(logstring);
    emit internalEvent->refillComplete();
    ui->userInfo->appendPlainText("Refilled 100 cents.");
}

// this function refills 50 cents in the change handler and updates the UI accordingly
void MainWindow::s_refill50C(void)
{
    credit.addCoin50c(1); // Use coinhandler
    updateChangeUI();
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "Refilled 50 cents";
    emit internalEvent->refillComplete();
    ui->plainTextEdit->appendPlainText(logstring);
}

// this function refills 20 cents in the change handler and updates the UI accordingly
void MainWindow::s_refill20C(void)
{
    credit.addCoin20c(1); // Use coinhandler
    updateChangeUI();
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "Refilled 20 cents";
    emit internalEvent->refillComplete();
    ui->plainTextEdit->appendPlainText(logstring);
}

// this function refills 10 cents in the change handler and updates the UI accordingly
void MainWindow::s_refill10C(void)
{
    credit.addCoin10c(1); // Use coinhandler
    updateChangeUI();
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "Refilled 10 cents";
    emit internalEvent->refillComplete();
    ui->plainTextEdit->appendPlainText(logstring);
}

// this function refills 5 cents in the change handler and updates the UI accordingly
void MainWindow::s_refill5C(void)
{
    credit.addCoin5c(1); // Use coinhandler
    updateChangeUI();
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "Refilled 5 cents";
    emit internalEvent->refillComplete();
    ui->plainTextEdit->appendPlainText(logstring);
}

// This function refills the coffee type based on the user's selection and updates the UI accordingly
void MainWindow::s_refillCoffee(void)
{
    coffeeType.addCoffee(1);
    updateCoffeeTypeUI();
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "Refilled Coffee";
    emit internalEvent->refillComplete();
    ui->plainTextEdit->appendPlainText(logstring);
}

// This function refills the espresso type based on the user's selection and updates the UI accordingly
void MainWindow::s_refillEspresso(void)
{
    coffeeType.addEspresso(1);
    updateCoffeeTypeUI();
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "Refilled Espresso";
    emit internalEvent->refillComplete();
    ui->plainTextEdit->appendPlainText(logstring);
}

// This function refills the cappuchino type based on the user's selection and updates the UI accordingly
void MainWindow::s_refillCappuchino(void)
{
    coffeeType.addCappuchino(1);
    updateCoffeeTypeUI();
    emit internalEvent->refillComplete();
    QString logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "Refilled Cappuchino";
    ui->plainTextEdit->appendPlainText(logstring);
}
