#include<iostream>

using namespace std;

int main(){
    struct {
        string nama;
        int nim;
    } mahasiswa[3];

    cout << "Input : " << endl;

    for( int i=0; i<3; i++){
        cout << "Masukkan nama " << i+1 << " : ";
        cin.ignore();
        getline(cin, mahasiswa[i].nama);

        cout << "Masukkan nim " << i+1 << " : ";
        cin >> mahasiswa[i].nim;

        cout << endl;
    }

    cout << "Output : " << endl;

    for( int i=0; i<3; i++){
        cout << "Nama [" << i+1 << "] : " << mahasiswa[i].nama << endl;

        cout << "NIM  [" << i+1 << "] : " << mahasiswa[i].nim << endl;

        cout << endl;
    }
}