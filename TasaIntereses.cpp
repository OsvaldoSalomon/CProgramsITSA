#include <iostream>

using namespace std;

int main() {
    float cantidad, tasaInteres, interes;

    cout << "Ingrese la cantidad a invertir: " << "\n";
    cin >> cantidad;

    cout << "Ingrese la tasa de interes: " << "\n";
    cin >> tasaInteres;

    interes = (cantidad * tasaInteres);

    if (interes > 7000) {
        cout << "Su cantidad ganada es: $" << interes << " superan los $7000" << "\n";
    } else {
        cout << "Su cantidad ganada es: $" << interes << " no superan los $7000" << "\n";
    }

    cout << "El saldo generado es: $" << (cantidad + interes);
}
// Osvaldo Salomon Vazquez