#include <iostream>

using namespace std;

void saludo() {
    cout << "Hola, que tal?" << endl;
}

int suma (int a, int b) {
    return (a + b);
}

int main() {

    saludo();

    int numInput1, numInput2;
    cout << "Ingrese dos numeros separados por un espacio" << endl;
    cin >> numInput1 >> numInput2;

    cout << suma(numInput1, numInput2);

    return 0;
}

//Osvaldo Salomon Vazquez