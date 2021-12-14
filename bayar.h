#include <iostream>
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