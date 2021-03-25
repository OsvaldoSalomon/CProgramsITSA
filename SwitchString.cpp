#include <iostream>

using namespace std;

int main() {
    int a, b, total;
    int seleccion;
    bool terminar = false;
    cout << "Menu" << endl;
    cout << "Escribe  2 cantidades " << endl << endl;
    do  //garantizamos que al menos se ejecute una vez nuestro código
    {
        cout << endl << "Indica el numero de la operacion que desees realizar " << endl;
        cout << "Escribe 0 para terminar" << endl;
        cout << "(1) Suma" << endl;
        cout << "(2) Resta" << endl;
        cout << "(3) Producto" << endl;
        cout << "(0) Salir" << endl;
        cin >> seleccion;
        //Para realizar la operación solicitada utilizamos una estructura switch
        //Switch impide que se ejecuten todas las sentencias case;
        switch (seleccion) {
            case 1:
                cout << "Escribe el primer número: ";
                cin >> a;
                cout << "Escribe el segundo número: ";
                cin >> b;
                cout << "La suma es: " << a + b << endl;
                break;
            case 2: {
                cout << "Escribe el primer número: ";
                cin >> a;
                cout << "Escribe el segundo número: ";
                cin >> b;
                cout << "La resta es: " << a - b << endl;
                break;
            }
            case 3: {
                cout << "Escribe el primer número: ";
                cin >> a;
                cout << "Escribe el segundo número: ";
                cin >> b;
                cout << "El producto es: " << a * b << endl;
                break;
            }

            case 0: {
                terminar = true;
                break;
            }
            default: {
                cout << "Opción no válida, vuelve a intentarlo" << endl;
                break;
            }
        } //Fin de switch
    } //fin de do
    while (not terminar); //Repite el ciclo hasta presionar 0
    cout << "Gracias por utilizar este programa" << endl;
    return 0;
}