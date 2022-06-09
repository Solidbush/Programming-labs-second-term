#include <iostream>

#include "fun.h"

using namespace fun;
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    int a;
    int b;
    float c;
    float real, image;
    float k;
    int array[3][3];
    int array_free[3][3];
    Complex comp;
    cout << "Enter two values like: a b" << endl;
    cin >> a >> b;
    cout << "Your values:" << endl;
    cout << a << " " << b << endl;
    swap_1(&a, &b);
    cout << "Res 1:" << endl;
    cout << a << " " << b << endl;
    swap_2(a, b);
    cout << "Res 2:" << endl;
    cout << a << " " << b << endl;
    cout << "Enter two values like: c" << endl;
    cin >> c;
    cout << "Your values:" << endl;
    cout << c << endl;
    round_1(&c);
    cout << "Res 1:" << endl;
    cout << c << endl;
    round_2(c);
    cout << "Res 2:" << endl;
    cout << c << endl;
    cout << "Enter complex value and k like: real imag parts and k" << endl;
    cin >> comp.real >> comp.image >> k;
    cout << "Your values:" << endl;
    cout << comp.real << " " << " " << comp.image << " " << k << endl;
    cout << "Res 1:" << endl;
    comp_1(&comp, &k);
    cout << comp.real << '+' << comp.image << 'i' << endl;
    cout << "Res 2:" << endl;
    comp_2(comp, k);
    cout << comp.real << '+' << comp.image << 'i' << endl;
    cout << "Enter matrix 3x3:" << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> array[i][j];
        }
    }
    cout << "Your matrix:" << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Res 1:" << endl;
    matrix_1(&array[0][0], &array_free[0][0]);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array_free[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Res 2:" << endl;
    matrix_2(array, array_free);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array_free[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
