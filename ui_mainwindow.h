/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed May 14 15:48:04 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <GUI/InterfaceButtons.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    SwitcherButton *button_Enable;
    QPushButton *button_command;
    QLabel *label;
    QLabel *label_CV;
    QLabel *label_status;
    QComboBox *menu_analogOut;
    QSpinBox *spin_value;
    SwitcherButton *button_CV;
    SwitcherButton *button_CalMode;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(608, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        button_Enable = new SwitcherButton(centralWidget);
        button_Enable->setObjectName(QString::fromUtf8("button_Enable"));
        button_Enable->setGeometry(QRect(30, 30, 181, 31));
        button_command = new QPushButton(centralWidget);
        button_command->setObjectName(QString::fromUtf8("button_command"));
        button_command->setGeometry(QRect(240, 120, 98, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 100, 101, 17));
        label_CV = new QLabel(centralWidget);
        label_CV->setObjectName(QString::fromUtf8("label_CV"));
        label_CV->setGeometry(QRect(150, 100, 51, 20));
        label_status = new QLabel(centralWidget);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        label_status->setGeometry(QRect(40, 190, 400, 17));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_status->sizePolicy().hasHeightForWidth());
        label_status->setSizePolicy(sizePolicy);
        menu_analogOut = new QComboBox(centralWidget);
        menu_analogOut->setObjectName(QString::fromUtf8("menu_analogOut"));
        menu_analogOut->setGeometry(QRect(30, 120, 78, 27));
        spin_value = new QSpinBox(centralWidget);
        spin_value->setObjectName(QString::fromUtf8("spin_value"));
        spin_value->setGeometry(QRect(150, 120, 60, 27));
        spin_value->setMinimum(-5);
        spin_value->setMaximum(5);
        button_CV = new SwitcherButton(centralWidget);
        button_CV->setObjectName(QString::fromUtf8("button_CV"));
        button_CV->setGeometry(QRect(240, 30, 181, 31));
        button_CalMode = new SwitcherButton(centralWidget);
        button_CalMode->setObjectName(QString::fromUtf8("button_CalMode"));
        button_CalMode->setGeometry(QRect(440, 30, 121, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 608, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        button_Enable->setText(QApplication::translate("MainWindow", "Enable / Disable Outputs", 0, QApplication::UnicodeUTF8));
        button_command->setText(QApplication::translate("MainWindow", "Command", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Current Drive", 0, QApplication::UnicodeUTF8));
        label_CV->setText(QApplication::translate("MainWindow", "Current", 0, QApplication::UnicodeUTF8));
        label_status->setText(QApplication::translate("MainWindow", "Status", 0, QApplication::UnicodeUTF8));
        button_CV->setText(QApplication::translate("MainWindow", "Current / Voltage Mode", 0, QApplication::UnicodeUTF8));
        button_CalMode->setText(QApplication::translate("MainWindow", "Cal Mode Off", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
