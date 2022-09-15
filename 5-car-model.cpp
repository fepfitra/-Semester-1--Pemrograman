#include <iostream>

using namespace std;

int main(){
    string cars[4] = {"Volvo", "BMW", "Ford", "Madza"};
    for (int i=0; i< sizeof(cars); i++){  //boleh for (int i=0; i<4; i++){
        cout << cars[i] << endl;
    }
    return 0;
}