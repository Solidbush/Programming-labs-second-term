#include <iostream>
#include "fun.h"

using namespace std;
using namespace fun;

int main() {
    int a, b;
    cin >> a >> b;
    int ans_i = min<int>(a, b);
    cout << ans_i << endl;
    float c, d;
    cin >> c >> d;
    float ans_f = min<float>(c, d);
    cout << ans_f << endl;
    char e, f;
    cin >> e >> f;
    char ans_c = min<char>(e, f);
    cout << ans_c << endl;
    int temp_int;
    FIFO<int, 5> fifo_int;
    for (int i = 0; i < 4; i++)
    {
        cin >> temp_int;
        fifo_int.Add(temp_int);
        cout << fifo_int.Top() << " ";
        fifo_int.Delete();
    }
    fifo_int.Top();
    cout << endl;
    float temp_float;
    FIFO<float, 5> fifo_float;
    for (int i = 0; i < 4; i++)
    {
        cin >> temp_float;
        fifo_float.Add(temp_float);
        cout << fifo_float.Top() << " ";
        fifo_float.Delete();
    }
    fifo_float.Delete();
    cout << endl;
    char temp_char;
    FIFO<char, 5> fifo_char;
    for (int i = 0; i < 6; i++)
    {
        cin >> temp_char;
        fifo_char.Add(temp_char);
    }
    for (int i = 0; i < 6; i++)
    {
        cout << fifo_char.Top() << " ";
        fifo_char.Delete();
    }
    cout << endl;
    return 0;
}
