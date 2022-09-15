#include<iostream>

using namespace std;

int main(){
    int n;
    n = 5;

    //hitung i dari 1 ke 5
    for(int i = 1; i <= n; i++){
        //hitung j dari i ke 5 
        for(int j = i; j < n; j++){
            cout << " ";
        }

        //hitung j dari 1 ke i*2-1
        for(int j = 1; j <= i*2-1; j++){
            cout << "*";
        }

        cout << endl;
    }

    //kurangi nilai n
    n--;
    // hitung i dari 1 ke 4
    for(int i = 1; i <= n; i++){
        //hitung j dari 1 ke i
        for(int j = 1; j <= i; j++){
            cout << " ";
        }

        //hitung j dari 1 ke (n-i)*2+1
        for(int j = 1; j <= (n-i)*2+1; j++){
            cout << "*";
        }

        cout << endl;
    }
}