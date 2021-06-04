#include <iostream>
using namespace std;

int main() {
    int noLlantas, total;

    cout << "--------- Llantera Oz ---------" << endl;
    cout << "\nIngrese el numero de llantas que desea comprar" << endl;
    cin >> noLlantas;

    if (noLlantas < 10) {
        total = noLlantas * 900;
        cout << "Su total a pagar es: $" << total << endl;
    } else if (noLlantas >= 10) {
        total = noLlantas * 700;
        cout << "Su total a pagar es: $" << total << endl;
    }

}
//Osvaldo Salomon Vazquez