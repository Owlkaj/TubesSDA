#include "user.h"
#include "ui_user.h"
#include "login.h"  // Menyertakan kelas login
#include <QMessageBox>
#include <QRandomGenerator>  // Untuk generate ID random

user::user(QWidget *parent)
    : QWidget(parent), ui(new Ui::user)
{
    ui->setupUi(this);  // Setup UI dari file user.ui
    this->setFixedSize(500, 700);

    // Connect tombol save dan cancel ke slot masing-masing
    connect(ui->save, &QPushButton::clicked, this, &user::saveData);
    connect(ui->cancel, &QPushButton::clicked, this, &user::cancelLogin);
}

user::~user()
{
    delete ui;  // Hapus objek ui saat window user ditutup
}

void user::saveData()
{
    // Mengambil data dari QLineEdits
    QString nama = ui->namaline->text();
    QString nomorHp = ui->nomorhpline->text();
    QString keluhan = ui->keluhanline->text();
    QString alamat = ui->alamatline->text();
    int umur = ui->umurline->text().toInt();

    if (nama.isEmpty() || nomorHp.isEmpty() || keluhan.isEmpty() || alamat.isEmpty() || umur == 0) {
        // Validasi input
        QMessageBox::warning(this, "Error", "Semua kolom harus diisi!");
        return;
    }

    // Generate ID random untuk pasien
    QString pasienId = QString::number(QRandomGenerator::global()->bounded(1000, 9999));

    // Simpan data pasien dalam singleton
    DataPasien::Pasien newPasien = {pasienId, nama, nomorHp, keluhan, alamat, umur};
    DataPasien::instance().addPasien(newPasien);

    // Menampilkan pesan sukses
    QMessageBox::information(this, "Data Tersimpan", "Data pasien berhasil disimpan!");

    // Kosongkan form setelah data disimpan
    ui->namaline->clear();
    ui->nomorhpline->clear();
    ui->keluhanline->clear();
    ui->alamatline->clear();
    ui->umurline->clear();
}

void user::cancelLogin()
{
    // Kembali ke halaman login
    this->close();  // Menutup window user
    emit showLogin();  // Emit sinyal untuk membuka login kembali
}
