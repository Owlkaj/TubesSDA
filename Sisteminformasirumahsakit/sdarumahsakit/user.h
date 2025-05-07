#ifndef USER_H
#define USER_H

#include <QWidget>
#include "datapasien.h"  // Menyertakan kelas DataPasien

namespace Ui {
class user;  // Deklarasi namespace untuk UI
}

class user : public QWidget
{
    Q_OBJECT

public:
    explicit user(QWidget *parent = nullptr);
    ~user();

signals:
    void showLogin();

private slots:
    void saveData();  // Fungsi untuk menyimpan data pasien
    void cancelLogin();  // Fungsi untuk kembali ke halaman login

private:
    Ui::user *ui;  // Pointer ke object Ui yang di-generate oleh Qt Designer
};

#endif // USER_H
