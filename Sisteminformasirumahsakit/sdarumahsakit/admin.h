#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>
#include "inputdata.h"  // Mengimpor InputData

namespace Ui {
class Admin;
}

class Admin : public QWidget
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();

private slots:
    void tambahPasien();
    void hapusPasien();
    void editPasien();
    void pergiKeInputData();  // Slot untuk pergi ke InputData
    void tampilkanData();  // Untuk refresh tampilan QTextEdit

private:
    Ui::Admin *ui;
};

#endif // ADMIN_H
