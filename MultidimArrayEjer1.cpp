#include <iostream>
using namespace std;

int main() {
    int suma = 0;
    int nums[5][6] = {{1,2,3,4,5,6},
                      {1,2,3,4,5,6},
                      {1,2,3,4,5,6},
                      {1,2,3,4,5,6},
                      {1,2,3,4,5,6}};

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 6; ++j) {
            suma += nums[i][j];
        }
    }
    cout << "La suma es: " << suma << endl;
}
// Osvaldo Salomon Vazquez