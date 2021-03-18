#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float radio, area;

    cout << "Ingrese el radio del circulo: " << "\n";

    cin >> radio;

    area = M_PI * (radio * radio);

    cout << "El area del circulo es: " << area;

    return 0;
}

// Osvaldo Salomon Vazquez
