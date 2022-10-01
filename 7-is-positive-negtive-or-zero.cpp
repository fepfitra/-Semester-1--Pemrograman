#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Masukkan angka : ";
    cin >> n;

    if( n > 0){
        cout << "Positif";
    }else if(n == 0){
        cout << "Nol";
    }else{
        cout << "Negatif";
    }
}
