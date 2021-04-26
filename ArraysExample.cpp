#include <iostream>
using namespace std;
int main() {
    int x[5] = {19, 10, 8, 17, 9};

    for (int i = 0; i < 5; ++i) {
        cout << "x[" << i << "] = " << x[i] << endl;
    }
    cout << " --------- " << endl;
    x[2] = 24;

    cout << "x[0] = " << x[0] << endl;
    cout << "x[1] = " << x[1] << endl;
    cout << "x[2] = " << x[2] << endl;
}
