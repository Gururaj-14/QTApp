/********************************************************************************
** Form generated from reading UI file 'hello.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLO_H
#define UI_HELLO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hello
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *hello)
    {
        if (hello->objectName().isEmpty())
            hello->setObjectName(QString::fromUtf8("hello"));
        hello->resize(489, 238);
        centralwidget = new QWidget(hello);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 72, 251, 41));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 226, 52);"));
        label->setAlignment(Qt::AlignCenter);
        hello->setCentralWidget(centralwidget);
        menubar = new QMenuBar(hello);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 489, 28));
        hello->setMenuBar(menubar);
        statusbar = new QStatusBar(hello);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        hello->setStatusBar(statusbar);

        retranslateUi(hello);

        QMetaObject::connectSlotsByName(hello);
    } // setupUi

    void retranslateUi(QMainWindow *hello)
    {
        hello->setWindowTitle(QCoreApplication::translate("hello", "hello", nullptr));
        label->setText(QCoreApplication::translate("hello", "Welcome to FinEcho Engineering", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hello: public Ui_hello {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLO_H
