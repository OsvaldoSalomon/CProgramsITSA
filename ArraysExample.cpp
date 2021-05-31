#include <iostream>
using namespace std;
int main() {
    int x[5] = {19, 10, 8, 17, 9};
    size_t n = sizeof(x)/sizeof(x[0]);

    for (int i = 0; i < 5; ++i) {
        cout << "x[" << i << "] = " << x[i] << endl;
    }
    cout << " --------- " << endl;
    for (int i = n - 1; i >= 0; i--) {
        cout << "x[" << i << "] = " << x[i] << endl;
    }

}
