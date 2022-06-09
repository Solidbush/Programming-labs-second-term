#include <iostream>
#include "Circle_Buffer.h"
#include <algorithm>
using namespace std;
int main() {
    Circle_Buffer<int> buff(6);
    cout << "1 2 3 4 5 6 7 -> 7 2 3 4 5 6" << endl;
    cout << endl;
    for (int i = 1; i < 8; i++) {
        buff.push_front(i);
        for (int i = 0; i < 6; i++)
            cout << buff[i] << " ";
        cout << endl;
    }
    cout << endl;
    cout << "1 2 3 4 5 6 7 -> 7 6 5 4 3 2" << endl;
    cout << endl;
    for (int i = 1; i < 8; i++) {
        buff.push_back(i);
        for (int i = 0; i < 6; i++)
            cout << buff[i] << " ";
        cout << endl;
    }
    cout << endl;
    cout << "7 6 5 4 3 2 -> 0 0 0 0 0 0" << endl;
    buff.clean_buffer();
    cout << endl;
    for (int i = 0; i < 6; i++)
        cout << buff[i] << " ";
    cout << endl << endl;

    for (int i = 0; i < 6; i++) {
        buff.push_front(i + 1);
        cout << buff[i] << " ";
    }
    cout << endl << endl;
    cout << "First and last elements: 1 6" << endl << endl;
    cout << buff.front() << " ";
    cout << endl;
    cout << buff.back() << " ";
    cout << endl << endl;
    cout << "Change copacity on 4. Result -> 1 2 3 4 1 1" << endl << endl;
    buff.change_copacity(4);
    for (int i = 0; i < 6; i++) {
        cout << buff[i] << " ";
    }
    cout << endl << endl;
    cout << "Pop front and back elements -> 0 2 3 0 0 0" << endl << endl;
    buff.pop_back();
    buff.pop_front();
    for (int i = 0; i < 6; i++) {
        cout << buff[i] << " ";
    }
    cout << endl;
    //sort(buff[0], buff[1]);
    cout << "0 2 3 0 0 0 -> 0 0 0 0 0 0" << endl;
    buff.clean_buffer();
    cout << endl;
    for (int i = 0; i < 6; i++)
        cout << buff[i] << " ";
    cout << endl << endl;

    for (int i = 4; i > 0; --i) {
        buff.push_front(i);
    }
    for (int i = 0; i < 4; i++)
        cout << buff[i] << " ";
    sort(buff.begin(), buff.end());
    cout << endl;
    for (int i = 0; i < 4; i++)
        cout << buff[i] << " ";

    return 0;

}
