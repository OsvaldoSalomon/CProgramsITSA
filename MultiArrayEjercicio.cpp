#include <iostream>
using namespace std;

int main() {
    int f = 0, c = 0;

    cout << "Ingrese el numero de filas:" << endl;
    cin >> f;
    cout << "Ingrese el numero de columnas:" << endl;
    cin >> c;
    int nums[f][c];

    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Ingresa un numero [" << i << "][" << j << "]:" << endl;
            cin >> nums[i][j];
        }
    }
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "nums[" << i << "][" << j << "] = " << nums[i][j] << endl;
        }
    }

}
// Osvaldo Salomon Vazquez