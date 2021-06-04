#include <iostream>
using namespace std;

int main() {
    int noCamisas, total;

    cout << "\nIngrese el numero de camisas que desea comprar" << endl;
    cin >> noCamisas;

    if (noCamisas < 5) {
        cout << "El precio de las camisas es de $300" << endl;
        total = noCamisas * 300;
        cout << "Su total a pagar es: $" << total << endl;
    } else if (noCamisas >= 5 && noCamisas <= 10) {
        cout << "El precio de las camisas es de $250" << endl;
        total = noCamisas * 250;
        cout << "Su total a pagar es: $" << total << endl;
    }
    else if (noCamisas >= 10) {
        cout << "El precio de las camisas es de $200" << endl;
        total = noCamisas * 200;
        cout << "Su total a pagar es: $" << total << endl;
    }
}
//Osvaldo Salomon Vazquez