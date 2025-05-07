#include "login.h"
#include "ui_login.h"  // Untuk menggunakan file .ui
#include "admin.h"
#include "user.h"

#include <QMessageBox>

login::login(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::login)   // Inisialisasi ui
{
    ui->setupUi(this);    // Setup dari file .ui
    this->setFixedSize(500, 700);

    // Hubungkan tombol login ke slot handleLogin
    connect(ui->btnLogin, &QPushButton::clicked, this, &login::handleLogin);
}

login::~login()
{
    delete ui;  // Hapus object ui saat widget ditutup
}

void login::handleLogin()
{
    QString username = ui->inputUsername->text();   // Ambil username dari ui
    QString password = ui->inputPassword->text();   // Ambil password dari ui

    if (username == "admin" && password == "admin") {
        Admin *adminWindow = new Admin();  // Tampilkan jendela admin
        adminWindow->show();
        this->close();  // Tutup halaman login
    } else if (username == "pasien" && password == "pasien") {
        user *userWindow = new user();  // Tampilkan jendela user
        connect(userWindow, &user::showLogin, this, &login::show);  // Menangani signal showLogin dari user
        userWindow->show();
        this->close();  // Tutup halaman login
    } else {
        // Tampilkan pesan kesalahan jika login gagal
        QMessageBox::warning(this, "Login Failed", "Username atau password salah!");
    }
}
