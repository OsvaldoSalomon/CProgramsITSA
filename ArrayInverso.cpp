#include <iostream>

using namespace std;

int main() {
    int input[4], output[4], i;

    cout << "Ingrese 4 numeros\n";

    for (i = 0; i < 4; i++) {
        cin >> input[i];
    }

    for (i = 0; i < 4; i++) {
        output[i] = input[4 - i - 1];
    }

    cout << "Numeros inversos\n";
    for (i = 0; i < 4; i++) {
        cout << output[i] << " ";
    }

    return 0;
}