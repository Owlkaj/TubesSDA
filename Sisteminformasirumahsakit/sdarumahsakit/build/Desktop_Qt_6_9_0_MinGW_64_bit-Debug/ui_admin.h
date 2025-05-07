/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label_7;
    QPushButton *tambah1;
    QPushButton *hapus1;
    QPushButton *tambah2;
    QLineEdit *id1;
    QLineEdit *id2;
    QLineEdit *nmpasien1;
    QLineEdit *nmpasien2;
    QLineEdit *umr1;
    QLineEdit *umr2;
    QLineEdit *nmrhp1;
    QLineEdit *nmrhp2;
    QLineEdit *almt1;
    QLineEdit *klhn1;
    QLineEdit *almt2;
    QLineEdit *klhn2;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_14;
    QLabel *label;
    QTextEdit *kolomkolom;
    QPushButton *next;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QWidget *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName("Admin");
        Admin->resize(500, 700);
        Admin->setMaximumSize(QSize(500, 700));
        centralwidget = new QWidget(Admin);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setGeometry(QRect(0, 0, 491, 651));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, -20, 491, 691));
        label_2->setMaximumSize(QSize(500, 700));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/InputPasien.png);"));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(230, 280, 16, 271));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(40, 210, 451, 16));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(40, 260, 451, 16));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(-10, -10, 511, 671));
        label_7->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/WhatsApp Image 2025-05-06 at 22.29.07_e6fefde9.jpg);"));
        tambah1 = new QPushButton(centralwidget);
        tambah1->setObjectName("tambah1");
        tambah1->setGeometry(QRect(60, 560, 101, 31));
        tambah1->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        hapus1 = new QPushButton(centralwidget);
        hapus1->setObjectName("hapus1");
        hapus1->setGeometry(QRect(60, 610, 101, 41));
        hapus1->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        tambah2 = new QPushButton(centralwidget);
        tambah2->setObjectName("tambah2");
        tambah2->setGeometry(QRect(320, 560, 101, 31));
        tambah2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        id1 = new QLineEdit(centralwidget);
        id1->setObjectName("id1");
        id1->setGeometry(QRect(20, 300, 191, 28));
        id1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        id2 = new QLineEdit(centralwidget);
        id2->setObjectName("id2");
        id2->setGeometry(QRect(270, 300, 191, 28));
        id2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        nmpasien1 = new QLineEdit(centralwidget);
        nmpasien1->setObjectName("nmpasien1");
        nmpasien1->setGeometry(QRect(20, 340, 191, 28));
        nmpasien1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        nmpasien2 = new QLineEdit(centralwidget);
        nmpasien2->setObjectName("nmpasien2");
        nmpasien2->setGeometry(QRect(270, 340, 191, 28));
        nmpasien2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        umr1 = new QLineEdit(centralwidget);
        umr1->setObjectName("umr1");
        umr1->setGeometry(QRect(20, 380, 191, 28));
        umr1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        umr2 = new QLineEdit(centralwidget);
        umr2->setObjectName("umr2");
        umr2->setGeometry(QRect(270, 380, 191, 28));
        umr2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        nmrhp1 = new QLineEdit(centralwidget);
        nmrhp1->setObjectName("nmrhp1");
        nmrhp1->setGeometry(QRect(20, 420, 191, 28));
        nmrhp1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        nmrhp2 = new QLineEdit(centralwidget);
        nmrhp2->setObjectName("nmrhp2");
        nmrhp2->setGeometry(QRect(270, 420, 191, 28));
        nmrhp2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        almt1 = new QLineEdit(centralwidget);
        almt1->setObjectName("almt1");
        almt1->setGeometry(QRect(20, 460, 191, 28));
        almt1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        klhn1 = new QLineEdit(centralwidget);
        klhn1->setObjectName("klhn1");
        klhn1->setGeometry(QRect(20, 500, 191, 28));
        klhn1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        almt2 = new QLineEdit(centralwidget);
        almt2->setObjectName("almt2");
        almt2->setGeometry(QRect(270, 460, 191, 28));
        almt2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        klhn2 = new QLineEdit(centralwidget);
        klhn2->setObjectName("klhn2");
        klhn2->setGeometry(QRect(270, 500, 191, 28));
        klhn2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_13 = new QLineEdit(centralwidget);
        lineEdit_13->setObjectName("lineEdit_13");
        lineEdit_13->setGeometry(QRect(20, 230, 191, 28));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        font.setPointSize(10);
        lineEdit_13->setFont(font);
        lineEdit_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_14 = new QLineEdit(centralwidget);
        lineEdit_14->setObjectName("lineEdit_14");
        lineEdit_14->setGeometry(QRect(270, 230, 191, 28));
        lineEdit_14->setFont(font);
        lineEdit_14->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 20, 321, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        font1.setPointSize(14);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        kolomkolom = new QTextEdit(centralwidget);
        kolomkolom->setObjectName("kolomkolom");
        kolomkolom->setGeometry(QRect(40, 50, 411, 161));
        kolomkolom->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);\n"
"color: rgb(0, 0, 0);"));
        next = new QPushButton(centralwidget);
        next->setObjectName("next");
        next->setGeometry(QRect(320, 610, 101, 29));
        next->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 20, 63, 20));
        label_7->raise();
        label_2->raise();
        line->raise();
        line_2->raise();
        line_3->raise();
        tambah1->raise();
        hapus1->raise();
        tambah2->raise();
        id1->raise();
        id2->raise();
        nmpasien1->raise();
        nmpasien2->raise();
        umr1->raise();
        umr2->raise();
        nmrhp1->raise();
        nmrhp2->raise();
        almt1->raise();
        klhn1->raise();
        almt2->raise();
        klhn2->raise();
        lineEdit_13->raise();
        lineEdit_14->raise();
        label->raise();
        kolomkolom->raise();
        next->raise();
        label_3->raise();
        menubar = new QMenuBar(Admin);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 500, 25));
        statusbar = new QStatusBar(Admin);
        statusbar->setObjectName("statusbar");
        statusbar->setGeometry(QRect(0, 0, 3, 25));

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QWidget *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "Admin", nullptr));
        label_2->setText(QString());
        label_7->setText(QString());
        tambah1->setText(QCoreApplication::translate("Admin", "Tambah", nullptr));
        hapus1->setText(QCoreApplication::translate("Admin", "Hapus", nullptr));
        tambah2->setText(QCoreApplication::translate("Admin", "Edit", nullptr));
        id1->setPlaceholderText(QCoreApplication::translate("Admin", "                ID Pasien", nullptr));
        id2->setPlaceholderText(QCoreApplication::translate("Admin", "                ID Pasien", nullptr));
        nmpasien1->setPlaceholderText(QCoreApplication::translate("Admin", "             Nama Pasien", nullptr));
        nmpasien2->setPlaceholderText(QCoreApplication::translate("Admin", "             Nama Pasien", nullptr));
        umr1->setPlaceholderText(QCoreApplication::translate("Admin", "                   Umur", nullptr));
        umr2->setPlaceholderText(QCoreApplication::translate("Admin", "                   Umur", nullptr));
        nmrhp1->setPlaceholderText(QCoreApplication::translate("Admin", "              Nomor Hp", nullptr));
        nmrhp2->setPlaceholderText(QCoreApplication::translate("Admin", "              Nomor Hp", nullptr));
        almt1->setPlaceholderText(QCoreApplication::translate("Admin", "                 Alamat", nullptr));
        klhn1->setPlaceholderText(QCoreApplication::translate("Admin", "                 keluhan", nullptr));
        almt2->setPlaceholderText(QCoreApplication::translate("Admin", "                 Alamat", nullptr));
        klhn2->setPlaceholderText(QCoreApplication::translate("Admin", "                 Keluhan", nullptr));
        lineEdit_13->setText(QCoreApplication::translate("Admin", "               Input data Pasien", nullptr));
        lineEdit_14->setText(QCoreApplication::translate("Admin", "                                          Edit", nullptr));
        label->setText(QCoreApplication::translate("Admin", "INPUT DATA PASIEN", nullptr));
        next->setText(QCoreApplication::translate("Admin", "next", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
