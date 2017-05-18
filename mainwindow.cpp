#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>

//#include "Utilities/precisionCalendar.h"
#include "Utilities/utilities.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->button_Enable->setup("Enable Outputs", "Disable Outputs",false);
    ui->button_CV->setup("Voltage Mode", "Current Mode",false);
    ui->button_CalMode->setup("Enable Cal Mode", "Disable Cal Mode",false);



    systemInhibit = &multOmSetup;




    connect(ui->button_Enable,  SIGNAL(clicked()), this, SLOT(runCheckout()));
    connect(ui->button_CV,      SIGNAL(clicked()), this, SLOT(switchModes()));
    connect(ui->button_CalMode, SIGNAL(clicked()), this, SLOT(switchCalMode()));
    connect(ui->button_command, SIGNAL(clicked()), this, SLOT(sendCommand()));

    for (int i = 0; i <= 36; i++)
        ui->menu_analogOut->addItem(QString::number(i));

    // set voltage drive
    voltageDrive = &(multOmSetup.voltageDrive);

    // initialize and inhibit 18 drives
//    for (int i = 0; i < 21; i++)
//    {
//        currentDrive[i] = multOmSetup.currentDrive[i];
//    }

    systemInhibit->inhibit();

    ui->label_status->setText("All Outputs Disabled");

    ui->button_command->setEnabled(false);


}

MainWindow::~MainWindow()
{
    delete ui;
    systemInhibit->inhibit();
}

void MainWindow::switchModes()
{
    if( ui->button_CV->getState() ) {
        ui->label_CV->setText("Voltage");
        ui->label_status->setText("Now Running in Voltage Mode");
        ui->spin_value->setMinimum(-10);
        ui->spin_value->setMaximum(10);
    }
    else {
        ui->label_CV->setText("Current");
        ui->label_status->setText("Now Running in Current Mode");
        ui->spin_value->setMinimum(-5);
        ui->spin_value->setMaximum(5);
    }
}

void MainWindow::switchCalMode()
{
    if( ui->button_CalMode->getState() ) {
        ui->label_status->setText("Now Running in Cal Mode");
        voltageDrive->setCalibrationMode(true);
    }
    else {
        ui->label_status->setText("Now running in normal mode");
        voltageDrive->setCalibrationMode(false);
    }
}

void MainWindow::runCheckout()
{
    if( ui->button_Enable->getState() )
    {
        systemInhibit->enable();
        if( systemInhibit->isEnabled() )
        {
            ui->label_status->setText("Outputs Enabled");
            ui->button_command->setEnabled(true);
        }
        else
            ui->button_Enable->setState(false);

    }
    else
    {
        stopCheckout();
    }
}

void MainWindow::stopCheckout()
{
    ui->button_command->setEnabled(false);
    ui->button_Enable->setState(false); // change button to green
    ui->label_status->setText("All Outputs Disabled");
    systemInhibit->inhibit();

}

void MainWindow::sendCommand()
{
    int channel = ui->menu_analogOut->currentIndex();
    int value = ui->spin_value->value();

    if (systemInhibit->isEnabled())
    {
        if (ui->button_CV->getState())
        {
            // voltage mode
            voltageDrive->Command(value,channel);
            ui->label_status->setText(QString::fromStdString("Commanding ") + QString::number(value) + " Volts to analog output " + QString::number(channel));

        } else
        {
            // current mode
            if (channel > 17)
                ui->label_status->setText("This Channel is not connected to a current drive.");
            else {
                multOmSetup.currentDrive[channel]->Command(value);
                ui->label_status->setText(QString::fromStdString("Commanding ") + QString::number(value) + " Amps to analog output " + QString::number(channel));
            }
            //ui->label_status->setText(QString::fromStdString("Commanding " + to_string<int>(current) + " Amps to analog output " + to_string<int>(channel)));
        }
    }
    else {
        ui->label_status->setText(QString::fromStdString("Command failed: System is inhibited "));
    }
}





