#include <iostream>

using namespace std;

int main() {
    int suma = 0;
    int matriz1[2][2] = {{1, 2},
                         {3, 4}};
    int matriz2[2][2] = {{5, 6},
                         {7, 8}};

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            suma += matriz1[i][j] + matriz2[i][j];
        }
    }
    cout << "La suma es: " << suma << endl;
}
// Osvaldo Salomon Vazquez