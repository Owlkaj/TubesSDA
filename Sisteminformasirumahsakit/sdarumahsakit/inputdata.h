#ifndef INPUTDATA_H
#define INPUTDATA_H

#include <QWidget>

namespace Ui {
class inputdata;
}

class inputdata : public QWidget
{
    Q_OBJECT

public:
    explicit inputdata(QWidget *parent = nullptr);
    ~inputdata();

private slots:
    void cariPasien();  // Slot untuk mencari pasien berdasarkan ID
    void keluar();      // Slot untuk keluar aplikasi

private:
    Ui::inputdata *ui;
};

#endif // INPUTDATA_H
