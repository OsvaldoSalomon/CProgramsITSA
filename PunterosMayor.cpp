#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3, num4;
    int *pNum1, *pNum2, *pNum3, *pNum4;
    cout << "Escriba cuatro numeros separados por un espacio:" << endl;
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 > num2) {
        cout << "El numero mayor es: " << num1 << endl;
    }
    else if (num2 > num3) {
        cout << "El numero mayor es: " << num2 << endl;
    }
    else if (num3 > num4) {
        cout << "El numero mayor es: " << num3 << endl;
    }
    else {
        cout << "El numero mayor es: " << num4 << endl;
    }

    pNum1 = &num1;
    pNum2 = &num2;
    pNum3 = &num3;
    pNum4 = &num4;

    cout << "Primer numero: " << &pNum1 << endl;
    cout << "Segundo numero: " << &pNum2 << endl;
    cout << "Tercer numero: " << &pNum3 << endl;
    cout << "Cuarto numero: " << &pNum4 << endl;

    return 0;
}
//Osvaldo Salomon Vazquez