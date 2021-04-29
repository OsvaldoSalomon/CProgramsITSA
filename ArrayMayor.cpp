#include <iostream>
using namespace std;

int main() {
    int arrayMayorOSV[30] = {1, 4, 3, 9, 15, 30, 10, 15, 4, 7, 6, 4, 2, 8, 9,
                             1, 3, 5, 2, 5, 78, 100, 45, 36, 23, 54, 87, 34, 12, 34};
    int mayor = 0;

    for (int i = 0; i < 30; ++i) {
        if (arrayMayorOSV[i] > mayor) {
            cout << mayor << " < " << arrayMayorOSV[i] << " | ";
            mayor = arrayMayorOSV[i];
            cout << "El no. mayor es: " << mayor << endl;
        } else {
            cout << mayor << " > " << arrayMayorOSV[i] << " | ";
            cout << "El no. mayor es: " << mayor << endl;
        }
    }
    cout << "El numero mayor es: " << mayor;
}
//Osvaldo Salomon Vazquez