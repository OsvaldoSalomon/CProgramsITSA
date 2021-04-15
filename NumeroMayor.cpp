#include <iostream>
using namespace std;

int main() {
    int i = 0;
    float n1, n2, n3;
    do {
        cout << "Ingrese un numero entero o decimal." << "\n";
        cin >> n1;
        i++;
        cout << "Ingrese un numero entero o decimal." << "\n";
        cin >> n2;
        i++;
        cout << "Ingrese un numero entero o decimal." << "\n";
        cin >> n3;
        i++;
    } while (i < 3 );

    if (n1 > n2 && n1 > n3){
        cout << n1;
    }
    else if (n2 > n1 && n2 > n3) {
        cout << n2;
    }
    else if (n3 > n1 && n3 > n2) {
        cout << n3;
    }
}
//Osvaldo Salomon Vazquez