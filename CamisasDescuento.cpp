#include <iostream>

using namespace std;

int main() {
    int noCamisas;
    float precio1, precio2, precio3, suma, total;
    cout << "Calcular el total a pagar por las camisas." << "\n";
    cout << "Escriba 1,2 o 3 dependiendo del numero de camisas que compro." << "\n";
    cin >> noCamisas;

    if (noCamisas == 3) {
        cout << "Ingrese el precio: " << "\n";
        cin >> precio1;
        cout << "Ingrese el precio: " << "\n";
        cin >> precio2;
        cout << "Ingrese el precio: " << "\n";
        cin >> precio3;
        suma = precio1 + precio2 + precio3 ;
        total = (suma * 20)/100;
        cout << "El precio total sin descuento es : " << suma << "\n";
        cout << "El precio total con descuento es : " << total << "\n";
    } else if (noCamisas == 2) {
        cout << "Ingrese el precio: " << "\n";
        cin >> precio1;
        cout << "Ingrese el precio: " << "\n";
        cin >> precio2;
        suma = precio1 + precio2;
        total = (suma * 10)/100;
        cout << "El precio total sin descuento es : " << suma << "\n";
        cout << "El precio total con descuento es : " << total << "\n";
    } else {
        cout << "Ingrese el precio: " << "\n";
        cin >> precio1;
        total = (precio1 * 10)/100;
        cout << "El precio total sin descuento es : " << precio1 << "\n";
        cout << "El precio total con descuento es : " << total << "\n";
    }
}
