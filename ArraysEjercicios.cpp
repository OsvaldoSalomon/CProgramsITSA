#include <iostream>
using namespace std;

int main() {
    int x[8] = {10, 10, 10, 10, 10, 10, 10, 15};
    int suma = 0;

    for (int i = 0; i < 8; ++i) {
        cout << "x[" << i << "] = " << x[i] << endl;
        suma += x[i];
    }
    cout << "Suma = " << suma;
}
