/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QPushButton *save;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *keluhanline;
    QPushButton *cancel;
    QLineEdit *alamatline;
    QLineEdit *nomorhpline;
    QLineEdit *umurline;
    QLineEdit *namaline;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QWidget *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName("user");
        user->resize(500, 700);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(user->sizePolicy().hasHeightForWidth());
        user->setSizePolicy(sizePolicy);
        user->setStyleSheet(QString::fromUtf8(""));
        save = new QPushButton(user);
        save->setObjectName("save");
        save->setGeometry(QRect(120, 610, 83, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setBold(true);
        save->setFont(font);
        save->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(170, 0, 0);"));
        label_4 = new QLabel(user);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 40, 351, 61));
        QFont font1;
        font1.setPointSize(21);
        font1.setBold(true);
        font1.setItalic(true);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"color: rgb(0, 0, 0);"));
        label_3 = new QLabel(user);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-440, -100, 951, 1161));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("System")});
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(true);
        font2.setStrikeOut(true);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/WhatsApp Image 2025-05-06 at 17.34.13_210a1957.jpg);"));
        keluhanline = new QLineEdit(user);
        keluhanline->setObjectName("keluhanline");
        keluhanline->setGeometry(QRect(60, 500, 381, 91));
        keluhanline->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        cancel = new QPushButton(user);
        cancel->setObjectName("cancel");
        cancel->setGeometry(QRect(300, 610, 83, 41));
        cancel->setFont(font);
        cancel->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(170, 0, 0);"));
        alamatline = new QLineEdit(user);
        alamatline->setObjectName("alamatline");
        alamatline->setGeometry(QRect(60, 420, 381, 41));
        alamatline->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        nomorhpline = new QLineEdit(user);
        nomorhpline->setObjectName("nomorhpline");
        nomorhpline->setGeometry(QRect(60, 340, 381, 41));
        nomorhpline->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        umurline = new QLineEdit(user);
        umurline->setObjectName("umurline");
        umurline->setGeometry(QRect(60, 260, 381, 41));
        umurline->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        namaline = new QLineEdit(user);
        namaline->setObjectName("namaline");
        namaline->setGeometry(QRect(60, 180, 381, 41));
        namaline->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        label = new QLabel(user);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 150, 63, 20));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setItalic(true);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2 = new QLabel(user);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 230, 63, 20));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_5 = new QLabel(user);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 310, 121, 20));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_6 = new QLabel(user);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(70, 390, 121, 20));
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_7 = new QLabel(user);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(70, 470, 191, 20));
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_8 = new QLabel(user);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(-20, -10, 541, 711));
        label_8->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/WhatsApp Image 2025-05-06 at 17.34.13_210a1957.jpg);"));
        label_8->raise();
        label_3->raise();
        label_4->raise();
        save->raise();
        keluhanline->raise();
        cancel->raise();
        alamatline->raise();
        nomorhpline->raise();
        umurline->raise();
        namaline->raise();
        label->raise();
        label_2->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();

        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QWidget *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "Dialog", nullptr));
        save->setText(QCoreApplication::translate("user", "save", nullptr));
        label_4->setText(QCoreApplication::translate("user", "   PENDAFTARAN PASIEN", nullptr));
        label_3->setText(QString());
        cancel->setText(QCoreApplication::translate("user", "cancel", nullptr));
        namaline->setPlaceholderText(QString());
        label->setText(QCoreApplication::translate("user", "NAMA", nullptr));
        label_2->setText(QCoreApplication::translate("user", "UMUR", nullptr));
        label_5->setText(QCoreApplication::translate("user", "NOMOR HP", nullptr));
        label_6->setText(QCoreApplication::translate("user", "ALAMAT", nullptr));
        label_7->setText(QCoreApplication::translate("user", "KELUHAN SINGKAT", nullptr));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
