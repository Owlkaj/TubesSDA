/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QLabel *labelUsername;
    QLabel *labelPassword;
    QLineEdit *inputUsername;
    QLineEdit *inputPassword;
    QPushButton *btnLogin;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(490, 694);
        login->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(login);
        centralwidget->setObjectName("centralwidget");
        labelUsername = new QLabel(centralwidget);
        labelUsername->setObjectName("labelUsername");
        labelUsername->setGeometry(QRect(10, 240, 91, 20));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        labelUsername->setFont(font);
        labelUsername->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        labelPassword = new QLabel(centralwidget);
        labelPassword->setObjectName("labelPassword");
        labelPassword->setGeometry(QRect(10, 290, 91, 20));
        labelPassword->setFont(font);
        labelPassword->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        inputUsername = new QLineEdit(centralwidget);
        inputUsername->setObjectName("inputUsername");
        inputUsername->setGeometry(QRect(100, 240, 311, 28));
        inputUsername->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        inputPassword = new QLineEdit(centralwidget);
        inputPassword->setObjectName("inputPassword");
        inputPassword->setGeometry(QRect(100, 290, 311, 28));
        inputPassword->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        inputPassword->setEchoMode(QLineEdit::EchoMode::Password);
        btnLogin = new QPushButton(centralwidget);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setGeometry(QRect(200, 340, 83, 29));
        btnLogin->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 85, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-10, -30, 521, 741));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/Hijau dan Putih Modern Strategi Pengembangan Bisnis Rumah Sakit Presentasi (500 x 700 piksel).png);"));
        label_2->raise();
        labelUsername->raise();
        labelPassword->raise();
        inputUsername->raise();
        inputPassword->raise();
        btnLogin->raise();
        menubar = new QMenuBar(login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 490, 25));
        statusbar = new QStatusBar(login);
        statusbar->setObjectName("statusbar");

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "login", nullptr));
        labelUsername->setText(QCoreApplication::translate("login", "Username:", nullptr));
        labelPassword->setText(QCoreApplication::translate("login", "Password :", nullptr));
        btnLogin->setText(QCoreApplication::translate("login", "Login", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
