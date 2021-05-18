#include <iostream>

using namespace std;

int main() {
    int num, *dirNum;
    cout << "Ingrese un numero:" << endl;
    cin >> num;
    dirNum = &num;

    if (*dirNum % 2 == 0) {
        cout << "El numero " << *dirNum << " es par" << endl;
        cout << "Su direccion de memoria es " << dirNum;
    } else {
        cout << "El numero " << *dirNum << " es impar" << endl;
        cout << "Su direccion de memoria es " << dirNum;
    }
}
//Osvaldo Salomon Vazquez