#include <iostream>

using namespace std;

int main() {
    int opcion;
    cout << "----------- MENU -----------" << "\n";

    cout << "Estos son nuestros combos del dia, indica cual deseas ordenar." << "\n" << "\n";
    cout << "1. Tacos arabes y refresco" << "\n";
    cout << "2. Hamburguesa y papas" << "\n";
    cout << "3. Hot dog y refresco" << "\n";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ordenaste el combo 1. Procede a pagar" << "\n";
            break;
        case 2:
            cout << "Ordenaste el combo 2. Procede a pagar" << "\n";
            break;
        case 3:
            cout << "Ordenaste el combo 3. Procede a pagar" << "\n";
            break;
        default:
            cout << "Usted a ingresado una opcion incorrecta." << "\n";
    }
}