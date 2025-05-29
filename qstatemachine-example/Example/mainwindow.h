#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStateMachine>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void sinit_entered(void);
    void S_OptionCappuchino_onEntry(void);
    void S_OptionEspresso_onEntry(void);
    void S_OptionCoffee_onEntry(void);
    void S_waitForOption_onEntry(void);

private:
    Ui::MainWindow *ui;

    QStateMachine statemachine;
};
#endif // MAINWINDOW_H
