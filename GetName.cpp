#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Por favor ingrese su nombre:" << "\n";

    string nombre;
    getline(cin, nombre);

    cout << "Por favor ingrese su apellido:" << "\n";

    string apellido;
    getline(cin, apellido);

    cout << "Bienvenido " << nombre << " " << apellido << ". Que tengas un excelente dia." << "\n";

    return 0;
}
