#include <iostream>

using namespace std;

int main() {
    float edad, numPulso;

    cout << "Ingrese su edad: " << "\n";

    cin >> edad;

    numPulso = (220 - edad) / 10;

    cout << "El numero de pulsaciones por cada 10 segundos es: " << numPulso;

    return 0;
}


//num. pulsaciones=(220-edad)/10
// Osvaldo Salomon Vazquez
