#include <iostream>
using namespace std;

int main() {
    int opcion;
    int f = 1;
    int c = 1;
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

        cout << "Ingrese el numero de filas:" << endl;
        cin >> f;
        cout << "Ingrese el numero de columnas:" << endl;
        cin >> c;

        int matriz1OSV[f][c];
        int matriz2OSV[f][c];

        // Ingresar valores de matriz 1
        cout << "Ingrese los valores de la primera matriz" << endl;
        for (int i = 0; i < f; ++i) {
            for (int j = 0; j < c; ++j) {
                cout << "Ingresa un numero [" << i << "][" << j << "]:" << endl;
                cin >> matriz1OSV[i][j];
            }
        }
        // Imprimir matriz 1
        for (int i = 0; i < f; ++i) {
            for (int j = 0; j < c; ++j) {
                cout << "matriz1OSV[" << i << "][" << j << "] = " << matriz1OSV[i][j] << endl;
            }
        }

        // Ingresar valores de matriz 2
        cout << "Ingrese los valores de la segunda matriz" << endl;
        for (int i = 0; i < f; ++i) {
            for (int j = 0; j < c; ++j) {
                cout << "Ingresa un numero [" << i << "][" << j << "]:" << endl;
                cin >> matriz2OSV[i][j];
            }
        }
        // Imprimir matriz 2
        for (int i = 0; i < f; ++i) {
            for (int j = 0; j < c; ++j) {
                cout << "matriz2OSV[" << i << "][" << j << "] = " << matriz2OSV[i][j] << endl;
            }
        }

        switch (opcion) {
            case 1:
                cout << "--------------" << endl;
                for (int i = 0; i < f; i++) {
                    for (int j = 0; j < c; j++) {
                        suma += matriz1OSV[i][j] + matriz2OSV[i][j];
                    }
                }
                cout << "La suma es: " << suma << endl;
                break;
            case 2:
                cout << "--------------" << endl;
                for (int i = 0; i < f; ++i) {
                    for (int j = 0; j < c; ++j) {
                        resta -= matriz1OSV[i][j] - matriz2OSV[i][j];
                    }
                }
                cout << "La resta es: " << resta << endl;
                break;
            case 3:
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