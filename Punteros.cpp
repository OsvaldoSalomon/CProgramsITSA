#include <iostream>

using namespace std;

int main() {
    int num, *ptr_num;
    num = 20;
    ptr_num = &num;

    cout << "Numero: " << *ptr_num << endl;
    cout << "Direccion de memoria: " << ptr_num << endl;
    return 0;
}
//Osvaldo Salomon Vazquez