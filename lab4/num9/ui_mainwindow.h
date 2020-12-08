/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QMenu *menuDialog;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(474, 265);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 120, 89, 25));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 120, 89, 25));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 170, 89, 25));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(160, 170, 89, 25));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(360, 110, 89, 25));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(360, 150, 89, 25));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(360, 190, 89, 25));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 20, 241, 81));
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(290, 20, 151, 70));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 67, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(280, 0, 67, 17));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 474, 22));
        menuDialog = new QMenu(menubar);
        menuDialog->setObjectName(QStringLiteral("menuDialog"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuDialog->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(pushButton_6, SIGNAL(clicked()), textEdit, SLOT(clear()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), textEdit_2, SLOT(clear()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(textEdit, SIGNAL(textChanged()), MainWindow, SLOT(changedTextState()));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(slotAdd()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(slotSub()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(slotMul()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), MainWindow, SLOT(slotDiv()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), MainWindow, SLOT(slotResult()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "+", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "-", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "*", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "/", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "=", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "clear", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "exit", 0));
        label->setText(QApplication::translate("MainWindow", "input", 0));
        label_2->setText(QApplication::translate("MainWindow", "result", 0));
        menuDialog->setTitle(QApplication::translate("MainWindow", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
