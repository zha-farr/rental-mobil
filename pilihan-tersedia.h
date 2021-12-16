#include <iostream>
#include <conio.h>
using namespace std;

void ifTersedia(string model, string warna, int harga, int jumlah_mobil, int pilihan)
{
    int uang, lama_minjam, total_tarif, hari = 1, denda = 0;

bayar:
    system("cls");
    cout << "Anda meminjam mobil jenis " << model << " warna " << warna << endl;
    cout << "Mobil akan dipinjam berapa lama? (hari): ";
    cin >> lama_minjam;

    total_tarif = harga * lama_minjam;

    cout << "Tarif pinjam mobil sebesar: Rp." << total_tarif << endl;
    cout << "Silahkan masukkan uang anda: ";
    cin >> uang;

    if (uang < total_tarif)
    {
        cin.ignore();
        cout << "Uang anda kurang. Silahkan bayar kembali.\nTekan enter untuk membayar ulang...";
        cin.get();
        goto bayar;
    }
    else if (uang > total_tarif)
    {
        int kembalian = uang - total_tarif;
        cout << "Kembalian uang anda sebesar: " << kembalian << endl;
    }

    cin.ignore();
    cout << "Terimakasih boss" << endl;
    cin.get();

    do
    {
        system("cls");
        cout << "Hari ke-" << hari << endl;
        cout << "Apakah sudah dikembalikan?\n(tekan y jika sudah, tekan enter jika belum)" << endl;

        if (hari > lama_minjam)
        {
            denda = denda + (harga * 1.1);
        }
        hari++;
    } while (getch() != 'y');

    if (hari > lama_minjam)
    {
    bayar2:
        system("cls");
        cout << "Anda terlambat mengembalikan. Anda mendapatkan denda sebesar: " << denda << endl;
        cout << "Silahkan masukkan uang anda: ";
        cin >> uang;
        if (uang < denda)
        {
            cin.ignore();
            cout << "Uang anda kurang. Silahkan bayar kembali.\nTekan enter untuk membayar ulang...";
            cin.get();
            goto bayar2;
        }
        else if (uang > denda)
        {
            int kembalian = uang - denda;
            cout << "Kembalian uang anda sebesar: " << kembalian << endl;
        }
    }

    cout << "Terimakasih" << endl;
}