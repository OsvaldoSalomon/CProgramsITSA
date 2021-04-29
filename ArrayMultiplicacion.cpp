#include <iostream>
using namespace std;

int main() {
    int arrayOSV[5] = {2, 1, 3, 2, 2};
    int multiplicacion = 1;
    /* Esta variable la tuve que inicializar a uno
         porque si la inicializaba a 0 toda la multiplicacion daba 0 */

    for (int i = 0; i < 5; ++i) {
        cout << "arrayOSV[" << i << "] = " << arrayOSV[i] << endl;
        multiplicacion *= arrayOSV[i];
    }
    cout << "Multiplicacion acumulada = " << multiplicacion;
}
//Osvaldo Salomon Vazquez