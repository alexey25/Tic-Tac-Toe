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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QToolButton *toolButton;
    QToolButton *toolButton_6;
    QToolButton *toolButton_9;
    QToolButton *toolButton_2;
    QToolButton *toolButton_5;
    QToolButton *toolButton_8;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QToolButton *toolButton_7;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(446, 320);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 99, 27));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 200, 99, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 200, 181, 20));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(100, 60, 181, 121));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        toolButton = new QToolButton(widget);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        gridLayout->addWidget(toolButton, 0, 0, 1, 1);

        toolButton_6 = new QToolButton(widget);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));

        gridLayout->addWidget(toolButton_6, 0, 1, 1, 1);

        toolButton_9 = new QToolButton(widget);
        toolButton_9->setObjectName(QStringLiteral("toolButton_9"));

        gridLayout->addWidget(toolButton_9, 0, 2, 1, 1);

        toolButton_2 = new QToolButton(widget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));

        gridLayout->addWidget(toolButton_2, 1, 0, 1, 1);

        toolButton_5 = new QToolButton(widget);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));

        gridLayout->addWidget(toolButton_5, 1, 1, 1, 1);

        toolButton_8 = new QToolButton(widget);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));

        gridLayout->addWidget(toolButton_8, 1, 2, 1, 1);

        toolButton_3 = new QToolButton(widget);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));

        gridLayout->addWidget(toolButton_3, 2, 0, 1, 1);

        toolButton_4 = new QToolButton(widget);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));

        gridLayout->addWidget(toolButton_4, 2, 1, 1, 1);

        toolButton_7 = new QToolButton(widget);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));

        gridLayout->addWidget(toolButton_7, 2, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 446, 25));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214!", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214!", 0));
        label->setText(QString());
        toolButton->setText(QString());
        toolButton_6->setText(QString());
        toolButton_9->setText(QString());
        toolButton_2->setText(QString());
        toolButton_5->setText(QString());
        toolButton_8->setText(QString());
        toolButton_3->setText(QString());
        toolButton_4->setText(QString());
        toolButton_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
