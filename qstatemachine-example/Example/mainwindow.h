#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStateMachine>
#include "coinhandler.h"
#include "coffeeTypeHandler.h"
#include "savingHandler.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class CustomObject : public QObject
{
    Q_OBJECT
public:
    CustomObject(QObject *parent = nullptr) : QObject(parent) {}

signals:
    void customSignal();                    /// three possible signals to be used with this object
    void customEnough();
    void customNotEnough();
    void dispenseCoffee();
    void dispenseCappuchino();
    void dispenseEspresso();
    void dispense5c();
    void dispense10c();
    void dispense20c();
    void dispense50c();
    void dispense100c();
    void NoChange();
    void changeOver();
    void NoCoffeeType();
};


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    coinhandler credit;
    CoffeeTypeHandler coffeeType;
    CustomObject *internalEvent = new CustomObject;

private slots:
    void sinit_entered(void);
    void S_OptionCappuchino_onEntry(void);
    void S_OptionEspresso_onEntry(void);
    void S_OptionCoffee_onEntry(void);
    void S_waitForOption_onEntry(void);
    void S_waitingForCoins(void);
    void S_5C_inserted(void);
    void S_10C_inserted(void);
    void S_20C_inserted(void);
    void S_50C_inserted(void);
    void S_100C_inserted(void);
    void ProcessMoney(int money);
    void S_ProcessingCoffee(void);
    void S_dispensedCappuchino(void);
    void S_dispensedEspresso(void);
    void S_dispensedCoffee(void);
    void s_dispensingChange(void);
    void S_dispensing100c(void);
    void S_dispensing50c(void);
    void S_dispensing20c(void);
    void S_dispensing10c(void);
    void S_dispensing5c(void);
    void S_waitForChangePickup(void);
    void updateChangeUI();
    void onShutdown();
    void updateCoffeeTypeUI();

private:
    Ui::MainWindow *ui;

    QStateMachine statemachine;
};
#endif // MAINWINDOW_H
