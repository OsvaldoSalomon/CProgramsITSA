#include <iostream>

using namespace std;

int main() {
    int nums[10] = {1, 2, 3, 4, 5, -6, -7, -8, -9, -10};
    int *ptr;

    for (int i = 0; i < 10; ++i) {
        ptr = &nums[i];
        cout << "nums[" << i << "] = " << nums[i] << endl;
        cout << "Puntero nums[" << i << "] = " << ptr << endl;
    }
}
//Osvaldo Salomon Vazquez