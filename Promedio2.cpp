#include <iostream>
#include <string>

using namespace std;

int main() {
    float calif1, calif2, calif3, calif4, calif5;
    float promedio = 0;

    cout << "Ingrese su nombre:" << "\n";
    string nombre;
    cin >> nombre;

    cout << "Ingrese la primera calificacion" << "\n";
    cin >> calif1;

    cout << "Ingrese la segunda calificacion" << "\n";
    cin >> calif2;

    cout << "Ingrese la tercera calificacion" << "\n";
    cin >> calif3;

    cout << "Ingrese la cuarta calificacion" << "\n";
    cin >> calif4;

    cout << "Ingrese la quinta calificacion" << "\n";
    cin >> calif5;

    promedio = (calif1 + calif2 + calif3 + calif4 + calif5) / 5;
    cout << "Nombre del alumno: " << nombre << "\n";
    cout << "Su promedio del primer parcial es: " << promedio;
}
//Osvaldo Salomon Vazquez
