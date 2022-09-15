#include<iostream>

using namespace std;

int main(){
    //deklarasi variabel
    int panjang, lebar, tinggi, lPermukaan;

    //keterangan
    cout << "Masukkan panjang lebar tinggi : ";

    //masukkan input
    cin >> panjang >> lebar >> tinggi;

    //hitung
    lPermukaan = 2*(panjang*lebar+lebar*tinggi+tinggi*panjang);

    //keluarkan output
    cout << "Luas permukaan : " << lPermukaan;
}
