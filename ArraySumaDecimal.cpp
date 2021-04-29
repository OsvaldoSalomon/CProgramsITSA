#include <iostream>

using namespace std;

int main() {
    float arrayDecOSV[20] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0,
                             2.2, 4.4, 6.6, 8.8, 10.0, 12.2, 14.4, 16.6, 18.8, 20.0};
    float suma = 0.0;

    for (int i = 0; i < 20; ++i) {
        cout << "arrayDecOSV[" << i << "] = " << arrayDecOSV[i] << endl;
        suma += arrayDecOSV[i];
    }
    cout << "Suma = " << suma;
}
//Osvaldo Salomon Vazquez