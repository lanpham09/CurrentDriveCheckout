#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "Devices/Advantech_PCI_1724U_ADIO.h"
#include "Devices/AMC_30A8.h"
#include "AD_IO/deviceInhibit.h"
#include "Devices/MultipleOmnimagnetSetup.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
public slots:
    void runCheckout();
    void stopCheckout();
    void sendCommand();
    void switchModes();
    void switchCalMode();



private:
    Ui::MainWindow *ui;
    Advantech_PCI_1724U_ADIO* voltageDrive;
//    AMC_30A8* currentDrive[21];
    deviceInhibit* systemInhibit;
    MultipleOmnimagnetSetup multOmSetup;

};

#endif // MAINWINDOW_H












/*

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCloseEvent>

#include "Devices/Advantech_PCI_1724U_ADIO.h"
#include "Devices/AMC_30A8.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

protected:
    void closeEvent(QCloseEvent *event);

signals:
    void globalExitSender();

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void setCurrent(double);
    void inhibit(bool);

private:
    Ui::MainWindow *ui;
    Advantech_PCI_1724U_ADIO* voltageDrive;
    AMC_30A8* currentDrive;
};

#endif // MAINWINDOW_H
*/














/*
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QFileDialog>
#include <QString>
#include <QTimer>

#include <QMainWindow>
#include "KatieCode.h"
#include "OmnimagnetDipoleSpinDemo.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void runKatieCode();
    void changeSyncFileName();
    void changeLocFileName();
    void stopRun();
    void updateDisplay();

private:
    Ui::MainWindow *ui;
    KatieCode* katiecode;
    OmnimagnetDipoleSpinDemo* spinningDipole;
    QTimer* timer;
    QTimer* timer2;
    Timing::stopWatch myStopWatch;

};

#endif // MAINWINDOW_H
*/
