#include <iostream>

using namespace std;

int main() {
    float precio, descuento;
    cout << "Ingrese el precio del articulo: " << endl;
    cin >> precio;

    descuento = (precio*20)/100;

    cout << "Precio original: " << precio << endl;
    cout << "20% de descuento: " << descuento << endl;

}
//Osvaldo Salomon Vazquez