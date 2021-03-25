#include <iostream>

using namespace std;

int main() {
    int opcion;
    string platillo;
    float precio, cantidad, descuento, subtotal, total;
    cout << "----------- MENU -----------" << "\n";

    cout << "Estos son nuestros combos del dia, indica cual deseas ordenar." << "\n" << "\n";
    cout << "1. Hamburguesa y papas" << "\n";
    cout << "2. Tacos arabes y refresco" << "\n";
    cout << "3. Hot dog y refresco" << "\n";
    cin >> opcion;
    cout << "Ingrese la cantidad de platos" << "\n";
    cin >> cantidad;
    cout << "Ingrese el precio del platillo" << "\n";
    cin >> precio;

    switch (opcion) {
        case 1:
            cout << "Tipo de plato..............Hamburguesa y papas" << "\n";
            cout << "Cantidad de platos........." << cantidad << "\n";
            cout << "Precio del platillo........." << precio << "\n";
            subtotal = precio * cantidad;
            cout << "Subtotal........." << subtotal << "\n";
            descuento = (subtotal * 0.1);
            cout << "Descuento........." << descuento << "\n";
            total = subtotal - descuento;
            cout << "Total........." << total << "\n";
            break;
        case 2:
            cout << "Tipo de plato..............Tacos arabes y refresco" << "\n";
            cout << "Cantidad de platos........." << cantidad << "\n";
            cout << "Precio del platillo........." << precio << "\n";
            subtotal = precio * cantidad;
            cout << "Subtotal........." << subtotal << "\n";
            descuento = (subtotal * 0.1);
            cout << "Descuento........." << descuento << "\n";
            total = subtotal - descuento;
            cout << "Total........." << total << "\n";
            break;
        case 3:
            cout << "Tipo de plato..............Hot dog y refresco" << "\n";
            cout << "Cantidad de platos........." << cantidad << "\n";
            cout << "Precio del platillo........." << precio << "\n";
            subtotal = precio * cantidad;
            cout << "Subtotal........." << subtotal << "\n";
            descuento = (subtotal * 0.1);
            cout << "Descuento........." << descuento << "\n";
            total = subtotal - descuento;
            cout << "Total........." << total << "\n";
            break;
        default:
            cout << "Usted a ingresado una opcion incorrecta." << "\n";
    }
}