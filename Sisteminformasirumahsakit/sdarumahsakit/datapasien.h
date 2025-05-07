#ifndef DATAPASIEN_H
#define DATAPASIEN_H

#include <QString>
#include <QList>

class DataPasien
{
public:
    struct Pasien {
        QString id;
        QString nama;
        QString nomorHp;
        QString keluhan;
        QString alamat;
        int umur;
    };

    // Singleton pattern: Mengembalikan instance yang sama
    static DataPasien& instance() {
        static DataPasien instance;
        return instance;
    }

    // Fungsi untuk menambahkan pasien
    void addPasien(const Pasien &pasien) {
        pasienList.append(pasien);
    }

    // Fungsi untuk mendapatkan daftar pasien
    QList<Pasien> getPasienList() const {
        return pasienList;
    }

    // Fungsi untuk menghapus pasien berdasarkan ID
    void removePasien(const QString &id) {
        for (int i = 0; i < pasienList.size(); ++i) {
            if (pasienList[i].id == id) {
                pasienList.removeAt(i);
                break;
            }
        }
    }

    // Fungsi untuk update pasien
    bool updatePasien(const Pasien &updatedPasien) {
        for (int i = 0; i < pasienList.size(); ++i) {
            if (pasienList[i].id == updatedPasien.id) {
                pasienList[i] = updatedPasien;
                return true;
            }
        }
        return false;  // Jika tidak ditemukan
    }

private:
    DataPasien() {}  // Konstruktor privat untuk Singleton
    QList<Pasien> pasienList;
};

#endif // DATAPASIEN_H
