#include <iostream>
using namespace std;

int main() {
    int nums[10];
    for (int i = 0; i <= 9; i++) {
        cout << "Ingrese un numero positivo o negativo." << "\n";
        cin >> nums[i];
    }
    for (int i = 0; i < 9; ++i) {
        if (nums[i] > 0){
            cout << nums[i] << " ";
        }
    }
}
//Osvaldo Salomon Vazquez

//    int x;
//    for (int i = 1; i <= 10; i++) {
//        cout << "Ingrese un numero positivo o negativo." << "\n";
//        cin >> x;
//        if (x > 0){
//            cout << x << "\n";
//        }
//    }