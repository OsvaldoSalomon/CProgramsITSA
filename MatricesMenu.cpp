#include <iostream>
using namespace std;

int f = 1;
int c = 1;
int matriz1OSV[10][10];
int matriz2OSV[10][10];

void llenadoMatrizOSV() {
    cout << "Ingrese el numero de filas:" << endl;
    cin >> f;
    cout << "Ingrese el numero de columnas:" << endl;
    cin >> c;
    cout << "Ingrese los valores de la primera matriz" << endl;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Ingresa un numero [" << i << "][" << j << "]:" << endl;
            cin >> matriz1OSV[i][j];
        }
    }
    cout << "Ingrese los valores de la segunda matriz" << endl;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Ingresa un numero [" << i << "][" << j << "]:" << endl;
            cin >> matriz2OSV[i][j];
        }
    }
}

int main() {
    int opcion;
    int suma = 0;
    int resta = 0;
    int multiplicacion = 1;
    do {
        cout << "----------- Menu -----------" << endl << endl;
        cout << "1.- Suma de matrices" << endl;
        cout << "2.- Resta de matrices" << endl;
        cout << "3.- Multiplicacion de matrices" << endl;
        cout << "4.- Salir" << endl;
        cout << "Ingrese su opcion: " << endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "---------SUMA DE MATRICES---------" << endl;
                llenadoMatrizOSV();
                cout << "--------------" << endl;
                for (int i = 0; i < f; i++) {
                    for (int j = 0; j < c; j++) {
                        suma += matriz1OSV[i][j] + matriz2OSV[i][j];
                    }
                }
                cout << "La suma es: " << suma << endl;
                break;
            case 2:
                cout << "---------RESTA DE MATRICES---------" << endl;
                llenadoMatrizOSV();
                cout << "--------------" << endl;
                for (int i = 0; i < f; ++i) {
                    for (int j = 0; j < c; ++j) {
                        resta -= matriz1OSV[i][j] - matriz2OSV[i][j];
                    }
                }
                cout << "La resta es: " << resta << endl;
                break;
            case 3:
                cout << "---------MULTIPLICACION DE MATRICES---------" << endl;
                llenadoMatrizOSV();
                cout << "--------------" << endl;
                for (int i = 0; i < f; ++i) {
                    for (int j = 0; j < c; ++j) {
                        multiplicacion *= matriz1OSV[i][j] * matriz2OSV[i][j];
                    }
                }
                cout << "La multiplicacion es: " << multiplicacion << endl;
                break;
        }
    } while (opcion != 4);
}
//Osvaldo Salomon Vazquez