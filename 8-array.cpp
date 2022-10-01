#include<iostream>

using namespace std;

int main(){
    int arr[8] = {6,4,7,4,8,5,9,4};
    int balik[8], kkb[8], bkk[8];

    for (int i=0; i<8; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Balik : ";
    for (int i=0; i<8; i++){
        balik[i] = arr[7-i];
        cout << balik [i] << " ";
    }
    cout << endl;

    for (int i=0; i<8; i++){
        kkb[i] = arr[i];
        bkk[i] = arr[i];
    }


    for( int i=0; i<7; i++){
        for(int j=i; j<7; i++){
            cout << "test";
            if(kkb[i]>kkb[i+1]){
                int temp = kkb[i];
                kkb[i] = kkb[i+1];
                kkb[i+1] = -temp; 
            }

            if(bkk[i]<bkk[i+1]){
                int temp = bkk[i];
                bkk[i] = bkk[i+1];
                bkk[i+1] = temp;
            }
        }
    }

    cout << "Kecil ke besar (KKB) : ";
    for(int i=0; i<8; i++){
        cout << kkb[i] << " ";
    }
    cout << endl;

    cout << "Besar ke kecil (KKB) : ";
    for(int i=0; i<8; i++){
        cout << bkk[i] << " ";
    }
}