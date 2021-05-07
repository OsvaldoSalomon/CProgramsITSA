#include <iostream>
using namespace std;

int main() {
    char letrasOSV[5][5] = {{'a', 'b', 'c', 'd', 'e'},
                            {'f', 'g', 'h', 'i', 'j'},
                            {'k', 'l', 'm', 'n', 'o'},
                            {'p', 'q', 'r', 's', 't'},
                            {'u', 'v', 'w', 'x', 'y'}};

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << "letrasOSV[" << i << "][" << j << "] = " << letrasOSV[i][j] << endl;
        }
    }
}
// Osvaldo Salomon Vazquez