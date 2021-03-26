#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero" << "\n";
    cin >> numero;

    for (int i = 1; i < 11; ++i) {
        cout << numero << " x " << i << " = " << i * numero << "\n";
    }

}
