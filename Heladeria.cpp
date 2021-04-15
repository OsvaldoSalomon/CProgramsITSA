#include <iostream>
using namespace std;
int main() {
    float precio, total;
    int cantidad, opcion, opcion2;
    do {
        cout << "----------- Heladeria Salomon -----------" << "\n\n";
        cout << "1.- Helado Simple\n";
        cout << "2.- Helado Doble\n";
        cout << "3.- Helado para llevar\n";
        cout << "4.- Salir\n";
        cout << "Ingrese su opcion:\n";
        cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "Helados de un sabor" << "\n";
                cout << "Ingrese el precio del helado: " << "\n";
                cin >> precio;
                cout << "Ingrese la cantidad: " << "\n";
                cin >> cantidad;
                total = precio * cantidad;
                cout << "El precio por " << cantidad << " helados de un sabor es " << total << ".00 pesos" << "\n";
                break;
            case 2:
                cout << "Helados de dos sabores" << "\n";
                cout << "Ingrese el precio del helado: " << "\n";
                cin >> precio;
                cout << "Ingrese la cantidad: " << "\n";
                cin >> cantidad;
                total = precio * cantidad;
                cout << "El precio por " << cantidad << " helados de dos sabores es " << total << ".00 pesos" << "\n";
                break;
            case 3:
                cout << "Helados de medio litro y litro" << "\n";
                cout << "1.- Medio litro" << "\n";
                cout << "2.- Litro" << "\n";
                cin >> opcion2;
                switch (opcion2) {
                    case 1:
                        cout << "Ingrese el precio del helado de medio litro: " << "\n";
                        cin >> precio;
                        cout << "Ingrese la cantidad: " << "\n";
                        cin >> cantidad;
                        total = precio * cantidad;
                        cout << "El precio por " << cantidad << " helados de medio litro es " << total << ".00 pesos" << "\n";
                        break;
                    case 2:
                        cout << "Ingrese el precio del helado de litro: " << "\n";
                        cin >> precio;
                        cout << "Ingrese la cantidad: " << "\n";
                        cin >> cantidad;
                        total = precio * cantidad;
                        cout << "El precio por " << cantidad << " helados de un litro es " << total << ".00 pesos" << "\n";
                        break;
                }
                break;
        }
    } while (opcion != 4);
}
//Osvaldo Salomon Vazquez