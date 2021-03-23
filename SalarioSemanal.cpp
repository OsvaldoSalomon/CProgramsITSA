#include <iostream>

using namespace std;

int main() {
    int horasTrabajadas, horasExtras, horasSinExtra, salario, salarioExtra;
    cout << "Calcular el salario semanal de un obrero" << "\n";
    cout << "Ingrese el numero de horas que trabajo esta semana" << "\n";
    cin >> horasTrabajadas;

    if (horasTrabajadas <= 40) {
        salario = horasTrabajadas * 16;
        cout << "Su salario de esta semana es: " << salario << "\n";
    } else {
        horasExtras = (horasTrabajadas - 40);
        salarioExtra = horasExtras * 20;
        horasSinExtra = horasTrabajadas - horasExtras;
        salario = (horasSinExtra * 16) + salarioExtra;
        cout << "Su salario de esta semana es: " << salario;
    }
}
// Osvaldo Salomon Vazquez