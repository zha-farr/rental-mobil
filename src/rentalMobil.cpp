#include "iostream"
#include "ctime"
#include "stdlib.h"

using namespace std;

int main()
{
	string warna[] = {"putih", "hitam", "merah", "hijau", "biru", "kuning", "ungu"};
	string model[] = {"Tesla model S", "Hyundai Staria", "Chevrolet Colorado", "Karin Kuruma", "Toyota Alphard", "Bravado Bison", "Toyota Celica", "Karin Calico", "Vapid Sentinel"};
	int harga[] = {800,100,100,100,100,100,100,100,100};
	string warnaGenerate[10];
	string modelGenerate[10];
	int hargaGenerate[10];
	int harga_pilihan, pilihan, lama_minjam, total_tagihan;
	
	srand((unsigned int)time(NULL));
	int jumlahMobil = rand() % 5 + 5;
	cout << "Jumlah = " << jumlahMobil <<endl;
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
	harga_pilihan = hargaGenerate[pilihan-1];
	
	cout << "Mobil akan dipinjam berapa lama? : ";
	cin >> lama_minjam;
	total_tagihan = harga_pilihan * lama_minjam;
	
	cout << "Tarif pinjam mobil sebesar: Rp. " << total_tagihan << endl;
	cout << "Silahkan masukkan uang anda (Rp.)
	
	
}
