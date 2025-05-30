#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStateMachine>
#include "coinhandler.h"

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
};


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    coinhandler credit;
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

private:
    Ui::MainWindow *ui;

    QStateMachine statemachine;
};
#endif // MAINWINDOW_H
