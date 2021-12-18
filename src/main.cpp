#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <conio.h>
#include "pilihan-tersedia.h"
using namespace std;

int main()
{
    string warna[] = {"putih", "hitam", "merah", "hijau", "biru", "kuning", "ungu"};
    string model[] = {"Tesla model S", "Hyundai Staria", "Chevrolet Colorado", "Karin Kuruma", "Toyota Alphard", "Bravado Bison", "Toyota Celica", "Karin Calico", "Vapid Sentinel"};
    int harga[] = {100, 200, 300, 400, 500, 600, 700, 800, 900};
    int pilihan;

    srand((unsigned int)time(NULL));

    int jumlahMobil = rand() % 5 + 5;

    string warnaGenerate[jumlahMobil];
    string modelGenerate[jumlahMobil];
    int hargaGenerate[jumlahMobil];
    for (int i = 0; i < jumlahMobil; i++)
    {
        int modelRandom = rand() % (sizeof(model) / sizeof(string));
        warnaGenerate[i] = warna[rand() % (sizeof(warna) / sizeof(string))];
        modelGenerate[i] = model[modelRandom];
        hargaGenerate[i] = harga[modelRandom];
    }
menu:
    system("cls");
    cout << "Selamat Datang" << endl;
    cout << "Jumlah = " << jumlahMobil << endl;

    for (int i = 0; i < jumlahMobil; i++)
    {
        cout << i + 1 << ". " << modelGenerate[i] << " Warna " << warnaGenerate[i] << " Harga Rp." << hargaGenerate[i] << "/hari" << endl;
    }

    cout << "Pilih mobil nomor: ";
    cin >> pilihan;

    if ((pilihan > jumlahMobil) || (pilihan < 1))
    {
        cout << "Pilihan anda tidak tersedia. Tekan sembarang tombol untuk memilih kembali.." << endl;
        getch();
        system("cls");
        goto menu;
    }
    else
    {
        ifTersedia(modelGenerate[pilihan - 1], warnaGenerate[pilihan - 1], hargaGenerate[pilihan - 1], jumlahMobil, pilihan);
    }
}
class DataMobil
{
    public:
    string Model;
    int FuelCapacity;
    int SeatCapacity;
    int EngineDisplacement;
    int DailyPrice;
    string PriorityColor;
    bool HasAirConditioner;
    bool HasAutomaticEngine;
    string FuelType;
    DataMobil(string model, int bensin, int kursi, int cc, int harga, string warna, 
    bool ac, bool matic, string bahanBakar)
    {
        Model = model;
        FuelCapacity = bensin;
        SeatCapacity = kursi;
        EngineDisplacement = cc;
        DailyPrice = harga;
        PriorityColor = warna;
        HasAirConditioner = ac;
        HasAutomaticEngine = matic;
        FuelType = bahanBakar;
    }
};
class Mobil
{
    public:
    DataMobil Data;
    string Warna;
    string LicensePlate;
    int Kilometer;
};
