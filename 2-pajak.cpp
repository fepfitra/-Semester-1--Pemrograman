#include<iostream>

using namespace std;

int main(){
    //deklarasi variabel
    string item;
    int harga, total;

    //masukkan nama item
    cout << "Nama item : ";
    cin >> item;;

    cout << "Harga barang : ";
    cin >> harga;

    //informasi pajak
    cout << "Pajak: 11%" << endl;

    //hitung
    total = harga*1.11;

    //cetak
    cout << "Harga : " << total;
    
}   