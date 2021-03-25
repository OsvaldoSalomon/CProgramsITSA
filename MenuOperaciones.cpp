#include <iostream>

using namespace std;

int main() {
    int opc;
    float num1, num2, total;
    cout << "Menu:" << "\n" << "1 - Suma" << "\n" << "2 - Resta" << "\n" << "3 - Multiplicacion" << "\n";
    cout << "Ingrese su opc: " << "\n";
    cin >> opc;

    if (opc == 1) {
        cout << "Ingrese el primer valor: " << "\n";
        cin >> num1;
        cout << "Ingrese el segundo valor: " << "\n";
        cin >> num2;
        total = num1 + num2;
        cout << "El resultado de la suma es: " << total;
    }
    else if (opc == 2) {
        cout << "Ingrese el primer valor: " << "\n";
        cin >> num1;
        cout << "Ingrese el segundo valor: " << "\n";
        cin >> num2;
        total = num1 - num2;
        cout << "El resultado de la resta es: " << total;
    }
    else if (opc == 3) {
        cout << "Ingrese el primer valor: " << "\n";
        cin >> num1;
        cout << "Ingrese el segundo valor: " << "\n";
        cin >> num2;
        total = num1 * num2;
        cout << "El resultado de la multiplicacion es: " << total;
    }
    else {
        cout << "Esa no es una opc valida." << "\n";
    }
}