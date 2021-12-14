#include <iostream>
#include <conio.h>
#include "bayar.h"
using namespace std;

void ifTersedia(int harga_pilihan)
{
    int lama_minjam, total_tarif, hari = 1, denda = 0;
    cout << "Mobil akan dipinjam berapa lama? : ";
    cin >> lama_minjam;
    total_tarif = harga_pilihan * lama_minjam;

    cout << "Tarif pinjam mobil sebesar: Rp. " << total_tarif << endl;

    coutBayar(total_tarif);

    cout << "Terimakasih boss" << endl;

    do
    {
        system("cls");
        cout << "Hari ke-" << hari << endl;
        cout << "Apakah sudah dikembalikan?\n(tekan y jika sudah, tekan enter jika belum)" << endl;

        if (hari > lama_minjam)
        {
            denda = denda + (harga_pilihan * 1.1);
        }
        hari++;
    } while (getch() != 'y');

    if (hari > lama_minjam)
    {
        cout << "Anda terlambat mengembalikan. Anda mendapatkan denda sebesar: " << denda << endl;
        coutBayar(denda);
    }

    cout << "Terimakasih" << endl;
}
