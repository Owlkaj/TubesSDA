/********************************************************************************
** Form generated from reading UI file 'inputdata.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTDATA_H
#define UI_INPUTDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inputdata
{
public:
    QLabel *label;
    QPushButton *caricari;
    QPushButton *quit;
    QLineEdit *idpasienline;
    QTextEdit *kotakidoutput;
    QLabel *label_2;

    void setupUi(QWidget *inputdata)
    {
        if (inputdata->objectName().isEmpty())
            inputdata->setObjectName("inputdata");
        inputdata->resize(561, 689);
        label = new QLabel(inputdata);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 511, 761));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/WhatsApp Image 2025-05-06 at 22.29.07_e6fefde9.jpg);"));
        caricari = new QPushButton(inputdata);
        caricari->setObjectName("caricari");
        caricari->setGeometry(QRect(70, 430, 141, 29));
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        caricari->setFont(font);
        caricari->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        quit = new QPushButton(inputdata);
        quit->setObjectName("quit");
        quit->setGeometry(QRect(300, 430, 141, 29));
        QFont font1;
        font1.setPointSize(12);
        quit->setFont(font1);
        quit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 0, 0);"));
        idpasienline = new QLineEdit(inputdata);
        idpasienline->setObjectName("idpasienline");
        idpasienline->setGeometry(QRect(70, 390, 371, 28));
        idpasienline->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        kotakidoutput = new QTextEdit(inputdata);
        kotakidoutput->setObjectName("kotakidoutput");
        kotakidoutput->setGeometry(QRect(70, 130, 371, 201));
        kotakidoutput->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        label_2 = new QLabel(inputdata);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 360, 101, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(inputdata);

        QMetaObject::connectSlotsByName(inputdata);
    } // setupUi

    void retranslateUi(QWidget *inputdata)
    {
        inputdata->setWindowTitle(QCoreApplication::translate("inputdata", "Form", nullptr));
        label->setText(QString());
        caricari->setText(QCoreApplication::translate("inputdata", "Cari", nullptr));
        quit->setText(QCoreApplication::translate("inputdata", "quit", nullptr));
        label_2->setText(QCoreApplication::translate("inputdata", "ID PASIEN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inputdata: public Ui_inputdata {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTDATA_H
