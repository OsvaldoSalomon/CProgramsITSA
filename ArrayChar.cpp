#include <iostream>
using namespace std;

int main() {
    char arrayCharOSV[] = {'O', 's', 'v', 'a', 'l', 'd', 'o', '-', 'S', 'a', 'l', 'o', 'm', 'o', 'n'};
    for (int i = 0; i < 15; ++i) {
        cout << arrayCharOSV[i];
    }
    cout << endl;
    for (int i = 0; i < 15; ++i) {
        cout << "arrayCharOSV[" << i << "] = " << arrayCharOSV[i] << endl;
    }
}
//Osvaldo Salomon Vazquez