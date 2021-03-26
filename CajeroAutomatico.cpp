#include <iostream>

using namespace std;

int main() {

    int saldo = 15000;
    int opcion, retiro;
    do {
        cout << "----------- BANCOMER -----------" << "\n\n";
        cout << "1.- Consultar saldo inicial\n";
        cout << "2.- Retirar efectivo\n";
        cout << "3.- Salir\n";
        cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "Su saldo inicial es de: " << saldo << "\n";
                break;
            case 2:
                cout << "Ingrese la cantidad a retirar:" << "\n";
                cin >> retiro;
                saldo = saldo - retiro;
                cout << "el nuevo saldo es: " << saldo << "\n";
                break;
        }
    } while (opcion != 3);
}
//Osvaldo Salomon Vazquez