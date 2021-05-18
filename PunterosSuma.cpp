#include <iostream>

using namespace std;

int main() {
    int num1, *dirNum1;
    int num2, *dirNum2;
    int suma, *dirSuma;
    cout << "Ingrese dos numeros separados por un espacio:" << endl;
    cin >> num1 >> num2;
    dirNum1 = &num1;
    dirNum2 = &num2;
    dirSuma = &suma;

    *dirSuma = *dirNum1 + *dirNum2;
    cout << "dirSuma = " << dirSuma << endl;
    cout << "*dirSuma = " << *dirSuma << endl;
    cout << "dirNum1 = " << dirNum1 << endl;
    cout << "*dirNum1 = " << *dirNum1 << endl;
    cout << "dirNum2 = " << dirNum2 << endl;
    cout << "*dirNum2 = " << *dirNum2 << endl;

}
//Osvaldo Salomon Vazquez