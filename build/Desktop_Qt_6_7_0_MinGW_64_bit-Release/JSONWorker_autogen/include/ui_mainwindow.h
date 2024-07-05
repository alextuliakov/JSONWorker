/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btn_choose;
    QLabel *label_2;
    QListWidget *listWidget;
    QProgressBar *progressBar;
    QLabel *label_3;
    QPushButton *btn_delete;
    QPushButton *btn_create;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(490, 435);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btn_choose = new QPushButton(centralwidget);
        btn_choose->setObjectName("btn_choose");
        btn_choose->setGeometry(QRect(10, 30, 461, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 10, 211, 16));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 90, 411, 192));
        listWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(220, 360, 251, 23));
        progressBar->setValue(0);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 360, 201, 16));
        btn_delete = new QPushButton(centralwidget);
        btn_delete->setObjectName("btn_delete");
        btn_delete->setGeometry(QRect(430, 90, 31, 31));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        btn_delete->setFont(font);
        btn_create = new QPushButton(centralwidget);
        btn_create->setObjectName("btn_create");
        btn_create->setGeometry(QRect(10, 290, 461, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 490, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_choose->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 JSON \321\204\320\260\320\271\320\273\321\213:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\263\321\200\320\265\321\201\321\201 \321\201\320\272\320\273\320\265\320\270\320\262\320\260\320\275\320\270\321\217 JSON \321\204\320\260\320\271\320\273\320\276\320\262:", nullptr));
        btn_delete->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn_create->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\273\320\265\320\270\321\202\321\214 \321\204\320\260\320\271\320\273\321\213 \320\262 \320\276\320\264\320\270\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
