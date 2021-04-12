//#include <iostream>
//using namespace std;
//
//float operaciones() {
//    int cantidad;
//    float precio, total;
//    cout << "Ingrese el precio del helado: " << "\n";
//    cin >> precio;
//    cout << "Ingrese la cantidad: " << "\n";
//    cin >> cantidad;
//    total = cantidad * precio;
//    cout << "El precio por " << cantidad << " helados de un sabor es " << total << ".00 pesos" << "\n";
//    return total;
//}
//
//int main() {
//    float precio;
//    int cantidad, opcion;
//    do {
//        cout << "----------- Heladeria Salomon -----------" << "\n\n";
//        cout << "1.- Helado Simple\n";
//        cout << "2.- Helado Doble\n";
//        cout << "3.- Helado para llevar\n";
//        cout << "4.- Salir\n";
//        cout << "Ingrese su opcion:\n";
//        cin >> opcion;
//        switch (opcion) {
//            case 1:
//                float resultado = operaciones();
//                cout << "El precio por " << cantidad << " helados de un sabor es " << precio * cantidad << ".00 pesos" << "\n";
//                break;
//            case 2:
//                cout << "Ingrese el precio del helado: " << "\n";
//                cin >> precio;
//                cout << "Ingrese la cantidad: " << "\n";
//                cin >> cantidad;
//                cout << "El precio por " << cantidad << " helados de dos sabores es " << precio * cantidad << ".00 pesos" << "\n";
//                break;
//            case 3:
//                cout << "Ingrese el precio del helado: " << "\n";
//                cin >> precio;
//                cout << "Ingrese la cantidad: " << "\n";
//                cin >> cantidad;
//                cout << "El precio por " << cantidad << " helados para llevar es " << precio * cantidad << ".00 pesos" << "\n";
//                break;
//        }
//    } while (opcion != 4);
//}
////Osvaldo Salomon Vazquez