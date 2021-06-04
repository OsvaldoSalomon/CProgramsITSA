#include <iostream>
using namespace std;

int main() {
    int noCompu, compuPrecio = 11000;
    float descuento, total, totalSinDescuento;

    cout << "\nIngrese el numero de computadoras que desea comprar" << endl;
    cin >> noCompu;

    if (noCompu < 5) {
        cout << "El descuento es del 10%" << endl;
        descuento = (compuPrecio * noCompu) * 0.10;
        totalSinDescuento = (compuPrecio * noCompu);
        total = totalSinDescuento - descuento;
        cout << "Su total a pagar es: $" << total << endl;
    } else if (noCompu >= 5 && noCompu < 10) {
        cout << "El descuento es del 20%" << endl;
        descuento = (compuPrecio * noCompu) * 0.20;
        totalSinDescuento = (compuPrecio * noCompu);
        total = totalSinDescuento - descuento;
        cout << "Su total a pagar es: $" << total << endl;
    }
    else if (noCompu >= 10) {
        cout << "El descuento es del 40%" << endl;
        descuento = (compuPrecio * noCompu) * 0.40;
        totalSinDescuento = (compuPrecio * noCompu);
        total = totalSinDescuento - descuento;
        cout << "Su total a pagar es: $" << total << endl;
    }
}
//Osvaldo Salomon Vazquez