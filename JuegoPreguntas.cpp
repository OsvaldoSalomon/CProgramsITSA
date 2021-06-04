#include <iostream>
#include <string>
using namespace std;

int main() {
    string opcion{};
    cout << "----------------- Inicia el juego de preguntas -----------------" << endl;
    cout << "Escriba SI o NO" << endl;

    cout << "\nColon descubrio America?" << endl;
    cin >> opcion;
    if (opcion == "SI") {
        cout << "Es correcto" << endl;
        cout << "\nLa independencia de Mexico fue en el anio de 1810?" << endl;
        cin >> opcion;
        if (opcion == "SI") {
            cout << "Es correcto" << endl;
            cout << "\nThe Doors fue un grupo de Rock Americano?" << endl;
            cin >> opcion;
            if (opcion == "SI") {
                cout << "Es correcto" << endl;
                cout << "Ha ganado el juego!" << endl;
            }
        }
    } else {
        cout << "Se ha equivocado. El juego ha terminado" << endl;
    }
}
//Osvaldo Salomon Vazquez