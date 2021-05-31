#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    float totalNormal, descuento, totalConDescuento = 0;

    cout << "Ingrese el total de su compra:" << endl;
    cin >> totalNormal;

    srand((unsigned int)time(NULL));
    int numAzar = (rand() % 100) + 1;
    cout << "Numero al azar: " << numAzar << endl;
    if (numAzar < 74) {
        descuento = totalNormal * 0.15;
        totalConDescuento = totalNormal - descuento;
        cout << "El total con descuento es: " << totalConDescuento << endl;
    } else if (numAzar >= 74) {
        descuento = totalNormal * 0.20;
        totalConDescuento = totalNormal - descuento;
        cout << "El total con descuento es: " << totalConDescuento << endl;
    }
}
//Osvaldo Salomon Vazquez