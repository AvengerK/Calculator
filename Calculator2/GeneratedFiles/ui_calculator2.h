/********************************************************************************
** Form generated from reading UI file 'calculator2.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR2_H
#define UI_CALCULATOR2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator2Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Calculator2Class)
    {
        if (Calculator2Class->objectName().isEmpty())
            Calculator2Class->setObjectName(QStringLiteral("Calculator2Class"));
        Calculator2Class->resize(600, 400);
        menuBar = new QMenuBar(Calculator2Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Calculator2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Calculator2Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Calculator2Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(Calculator2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Calculator2Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Calculator2Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Calculator2Class->setStatusBar(statusBar);

        retranslateUi(Calculator2Class);

        QMetaObject::connectSlotsByName(Calculator2Class);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator2Class)
    {
        Calculator2Class->setWindowTitle(QApplication::translate("Calculator2Class", "Calculator2", 0));
    } // retranslateUi

};

namespace Ui {
    class Calculator2Class: public Ui_Calculator2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR2_H
