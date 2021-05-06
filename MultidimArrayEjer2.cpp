#include <iostream>
using namespace std;

int main() {
    char letras[5][5] = {{'a','b','c','d','e'},
                      {'f','g','h','i','j'},
                      {'k','l','m','n','o'},
                      {'p','q','r','s','t'},
                      {'u','v','w','x','y'}};

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << "letras[" << i << "][" << j << "] = " << letras[i][j] << endl;
        }
    }
}
// Osvaldo Salomon Vazquez