#include <iostream>

using namespace std;

int main(void) {
    int arreglo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int *ptr;
    for (int i = 0; i < 15; i++) {
        ptr = &arreglo[i];
        cout << "arreglo[" << i << "] = " << arreglo[i] << endl;
        cout << "Puntero arreglo[" << i << "] = " << ptr << endl;
    }
    return 0;
}

//Osvaldo Salomon Vazquez