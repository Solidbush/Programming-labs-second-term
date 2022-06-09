#include <iostream>
#define _USE_MATH_DEFINES // для C++
#include <cmath>
#include <math.h>
#include <vector>
#include <string>
#include "fun.h"

using namespace std;

int main() {
    int size = 0;
    cin >> size;
    fun::Menu m(size);
    m.start();
    return 0;
}

