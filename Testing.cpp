#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int a1, b2, c3, d4;
    int *a1_n, *b2_n, *c3_s, *d4_n;
    cout << "Abigail Martinez Rosas" << endl;
    cout << "Escriba el primer numero: ";
    cin >> a1;
    cout << "Escriba el segundo numero: ";
    cin >> b2;
    cout << "Escriba el tercer numero: ";
    cin >> c3;
    cout << "Escriba el cuarto numero: ";
    cin >> d4;
    if (a1 > b2)
        cout << "El mayor es: " << a1;
    else if (b2 > c3)
        cout << "El mayor es: " << b2;
    else if (c3 > d4)
        cout << "El mayor es: " << c3;
    else
        cout << "El mayor es: " << d4;

    cout << "Posicion de memoria de los numeros: " << endl;
    a1_n = &a1;
    b2_n = &b2;
    c3_s = &c3;
    d4_n = &d4;
    cout << "1er numero: " << &a1_n << endl;
    cout << "2do numero: " << &b2_n << endl;
    cout << "3er numero: " << &c3_s << endl;
    cout << "4to numero: " << &d4_n << endl;
    getch();
    return 0;
}