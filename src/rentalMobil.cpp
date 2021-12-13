#include "iostream"
#include "ctime"
#include "stdlib.h"

using namespace std;

void coutBayar(int total_tagihan)
{
    int uang;
bayar:
    cout << "Silahkan masukkan uang anda: ";
    cin >> uang;

    if (uang < total_tagihan)
    {
        cin.ignore();
        cout << "Uang anda kurang. Silahkan bayar kembali.\nTekan enter untuk membayar ulang...";
        cin.get();
        goto bayar;
    }
    else if (uang > total_tagihan)
    {
        int kembalian = uang - total_tagihan;
        cout << "Kembalian uang anda sebesar: " << kembalian << endl;
    }
}

int main()
{
    string warna[] = {"putih", "hitam", "merah", "hijau", "biru", "kuning", "ungu"};
    string model[] = {"Tesla model S", "Hyundai Staria", "Chevrolet Colorado", "Karin Kuruma", "Toyota Alphard", "Bravado Bison", "Toyota Celica", "Karin Calico", "Vapid Sentinel", "Coil Raiden"};
    int harga[] = {800, 100, 100, 100, 100, 100, 100, 100, 100};
    string warnaGenerate[10];
    string modelGenerate[10];
    int hargaGenerate[10];
    int harga_pilihan, pilihan, lama_minjam, total_tarif, hari = 1, denda = 0;
    char isDikembalikan;

    srand((unsigned int)time(NULL));
    int jumlahMobil = rand() % 5 + 5;
    cout << "Jumlah = " << jumlahMobil << endl;
    for (int i = 0; i < jumlahMobil; i++)
    {
        warnaGenerate[i] = warna[rand() % (sizeof(warna) / sizeof(string))];
        int modelRandom = rand() % (sizeof(model) / sizeof(string));
        modelGenerate[i] = model[modelRandom];
        hargaGenerate[i] = harga[modelRandom];
    }
    for (int i = 0; i < jumlahMobil; i++)
    {
        cout << i + 1 << ". " << modelGenerate[i] << " Warna " << warnaGenerate[i] << " Harga " << hargaGenerate[i] << endl;
    }
    cout << "Pilih mobil nomor: ";
    cin >> pilihan;
    harga_pilihan = hargaGenerate[pilihan - 1];

    cout << "Mobil akan dipinjam berapa lama? : ";
    cin >> lama_minjam;
    total_tarif = harga_pilihan * lama_minjam;

    cout << "Tarif pinjam mobil sebesar: Rp. " << total_tarif << endl;

    coutBayar(total_tarif);

    cout << "Terimakasih boss" << endl;

    do
    {
        cin.ignore();
        cout << "Hari ke-" << hari << endl;
        cout << "Apakah sudah dikembalikan? : ";
        cin.get(isDikembalikan);
        if (hari > lama_minjam)
        {
            denda = denda + (harga_pilihan * 1.1);
        }
        hari++;
    } while (isDikembalikan != 'y');

    if (hari > lama_minjam)
    {
        cout << "Anda terlambat mengembalikan. Anda dikenakan denda sebesar: " << denda << endl;
        coutBayar(denda);
    }

    cout << "Terimakasih" << endl;
}
