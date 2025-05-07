#include "inputdata.h"
#include "ui_inputdata.h"
#include "datapasien.h"
#include <QMessageBox>

inputdata::inputdata(QWidget *parent) : QWidget(parent), ui(new Ui::inputdata)
{
    ui->setupUi(this);
    this->setFixedSize(500, 700);

    // Koneksi tombol
    connect(ui->caricari, &QPushButton::clicked, this, &inputdata::cariPasien);  // Tombol Cari
    connect(ui->quit, &QPushButton::clicked, this, &inputdata::keluar);          // Tombol Quit
}

inputdata::~inputdata()
{
    delete ui;
}

void inputdata::cariPasien()
{
    QString idPasien = ui->idpasienline->text().trimmed();  // Ambil ID dari QLineEdit

    if (idPasien.isEmpty()) {
        QMessageBox::warning(this, "Error", "ID pasien tidak boleh kosong!");
        return;
    }

    // Mencari pasien dalam daftar menggunakan Linear Search
    bool ditemukan = false;
    QString output;
    QList<DataPasien::Pasien> pasienList = DataPasien::instance().getPasienList();

    for (const auto& pasien : pasienList) {
        if (pasien.id == idPasien) {
            ditemukan = true;
            output = QString("ID: %1\nNama: %2\nUmur: %3\nNo HP: %4\nAlamat: %5\nKeluhan: %6")
                         .arg(pasien.id)
                         .arg(pasien.nama)
                         .arg(pasien.umur)
                         .arg(pasien.nomorHp)
                         .arg(pasien.alamat)
                         .arg(pasien.keluhan);
            break;  // Jika ditemukan, keluar dari loop
        }
    }

    if (ditemukan) {
        ui->kotakidoutput->setPlainText(output);  // Menampilkan data yang ditemukan
    } else {
        ui->kotakidoutput->setPlainText("Pasien dengan ID tersebut tidak ditemukan.");
    }
}

void inputdata::keluar()
{
    QApplication::quit();  // Keluar dari aplikasi
}
