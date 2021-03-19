#include <iostream>

using namespace std;

int main() {
    int persona;
    float edad1, edad2, pulsaciones;
    cout << "Calcular el numero de pulsaciones de una persona" << "\n";
    cout << "Escriba 1 si es hombre, escriba 2 si es mujer" << "\n";
    cin >> persona;

    if (persona == 1) {
        cout << "Ingrese su edad " << "\n";
        cin >> edad1;
        pulsaciones = (210 - edad1) / 10;
        cout << "Las pulsaciones que tiene cada 10 seg son: " << pulsaciones << "\n";
    } else {
        cout << "Ingrese su edad" << "\n";
        cin >> edad2;
        pulsaciones = (220 - edad2) / 10;
        cout << "Las pulsaciones que tiene cada 10 seg son: " << pulsaciones;
    }
}
