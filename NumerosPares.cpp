#include <iostream>

using namespace std;

int main() {
//    int i = 1;
//    cout << "Numeros pares: ";
//    while (i < 50) {
//        cout << " ";
//        i++;
//        cout << i;
//        i++;
//    }
    cout << "Numeros pares: ";
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0)
            cout << i << " ";
    }
}
