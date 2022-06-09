#include <iostream>
#include "fun.h"

using namespace std;
using namespace fun;

int main() {
    Matrix m(1,2,3,4,5,6,7,8,9);
    Matrix b(1,2,3,4,5,6,7,8,9);
    Matrix c(1,1,1,1,1,1,1,1,1);
    Matrix d;
    Matrix s;
    if (m != c)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    if (m == b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    if (m == c)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    if (m > c)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    if (m < c)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    cout << endl;
    m.print_matrix();
    b.print_matrix();
    c.print_matrix();
    s = m + c;
    s.print_matrix();
    s = b - c;
    s.print_matrix();
    d = m * b;
    d.print_matrix();
    c.multiply_count(5);
    c.print_matrix();

    FIFO fifo;
    int value;
    for (int i = 1; i < 7; i++){
        fifo << i;
    }

   for (int i = 1; i < 7; i++)
    {
        fifo >> value;
        cout << value << " ";
    }
    cout << endl;
    return 0;
}
