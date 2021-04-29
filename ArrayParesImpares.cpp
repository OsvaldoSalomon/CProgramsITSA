#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>arrayPares;
    vector<int>arrayImpares;
    int arrayNum[50] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,
                        26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};

    for (int i = 0; i < 50; ++i) {
        if (arrayNum[i] % 2 == 0) {
            arrayPares.push_back(arrayNum[i]);
        } else {
            arrayImpares.push_back(arrayNum[i]);
        }
    }
    cout << "Numeros impares : ";
    for (int i = 0; i < 25; ++i) {
        cout << arrayImpares[i] << " ,";
    }
    cout << endl;
    cout << "Numeros pares : ";
    for (int i = 0; i < 25; ++i) {
        cout << arrayPares[i] << " ,";
    }

//    for (int i = 0; i < 50; ++i) {
//        if (arrayNum[i] % 2 == 0){
//            cout << arrayNum[i] << " = Par "  << endl;
//        } else {
//            cout << arrayNum[i] << " = Impar "  << endl;
//        }
//    }
}
//Osvaldo Salomon Vazquez