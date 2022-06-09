#include <iostream>
#include <iterator>
#include <vector>
#include "fun.h"
using namespace std;


int main() {
    cout << "Hello, World!" << endl;
    cout << endl;
    cout << "------Process of working for all_off with type_int: -----" << endl;
    vector<int> vector_int_1(5,1);
    int pred_int = 1;
    Print(all_off<vector<int>, int>(vector_int_1, pred_int));

    cout << "Input predicate for int: " << endl;
    cin >> pred_int;
    Print(all_off<vector<int>, int>(vector_int_1, pred_int));

    cout << endl;
    cout << "------Process of working for all_off with type_char: -----" << endl;
    vector<char> vector_char_a(5, 'a');
    char pred_char = 'a';
    Print(all_off<vector<char>, char>(vector_char_a, pred_char));
    cout << "Input predicate for char: " << endl;
    cin >> pred_char;
    Print(all_off<vector<char>, char>(vector_char_a, pred_char));

    cout << endl;
    cout << "------Process of working for all_off with type_vector<CPoint<int>>: -----" << endl;
    int x = 1;
    int y = 1;
    CPoint<int> base_point_int_1(x,y);
    vector<CPoint<int>> array_point_base;
    for (int i = 0; i < 5; i++)
        array_point_base.push_back(base_point_int_1);
    Print(all_off<vector<CPoint<int>>, CPoint<int>>(array_point_base, base_point_int_1));
    cout << "Input int x and int y for temp CPoint: " << endl;
    cin >> x >> y;
    CPoint<int> base_point_int_rand(x, y);
    Print(all_off<vector<CPoint<int>>, CPoint<int>>(array_point_base, base_point_int_rand));

    cout << endl;
    cout << "------Process of working for all_off with type_vector<CPoint<char>>: -----" << endl;
    char x_char = 'a';
    char y_char = 'b';
    CPoint<char> base_point_char_a(x_char, y_char);
    vector<CPoint<char>> array_point_base_char;
    for (int i = 0; i < 5; i++)
        array_point_base_char.push_back(base_point_char_a);
    Print(all_off<vector<CPoint<char>>, CPoint<char>>(array_point_base_char, base_point_char_a));
    cout << "Input char x and char y for temp CPoint: " << endl;
    cin >> x_char >> y_char;
    CPoint<char> base_point_char_rand(x_char, y_char);
    Print(all_off<vector<CPoint<char>>, CPoint<char>>(array_point_base_char, base_point_char_rand));

    cout << endl;
    cout << "------Process of working for is_partitioned with type_int: -----" << endl;
    int test_value = 2;
    vector<int> test_int_for_true;
    test_int_for_true.push_back(2);
    for (int i = 1; i < 5; i++)
        test_int_for_true.push_back(1);
    Print(is_partitioned<vector<int>, int>(test_int_for_true, test_value));
    test_int_for_true.clear();
    for (int i = 0; i < 5; i++)
        test_int_for_true.push_back(3);
    Print(is_partitioned<vector<int>, int>(test_int_for_true, test_value));

    cout << endl;
    cout << "------Process of working for is_partitioned with type_vector<CPoint<int>>: -----" << endl;
    Print(is_partitioned<vector<CPoint<int>>, CPoint<int>>(array_point_base, base_point_int_1));
    array_point_base.clear();
    int temp_1 = 1;
    array_point_base.push_back(CPoint<int>(temp_1,temp_1));
    temp_1 = 2;
    for (int i = 1; i < 5; i++)
        array_point_base.push_back(CPoint<int>(temp_1, temp_1));
    Print(is_partitioned<vector<CPoint<int>>, CPoint<int>>(array_point_base, base_point_int_1));
    cout << endl;
    cout << "------Process of working for find_backward with type_vector<int>: -----" << endl;
    vector<int> test1_int = {1, 2, 3, 4, 5};
    test_value = 3;
    cout << "Posses in set from the end: " <<find_backward<vector<int>, int>(test1_int, test_value) << endl;
    cout << "Input int test_value for vector<int> test1_int = {1, 2, 3, 4, 5}: " << endl;
    cin >> test_value;
    cout << "Posses in set from the end: " << find_backward<vector<int>, int>(test1_int, test_value) << endl;
    cout << endl;
    cout << "------Process of working for find_backward with type_vector<char>: -----" << endl;
    vector<char> test1_char = {'a', 'b', 'c', 'd', 'e'};
    char test_value_char = 'b';
    cout << "Posses in set from the end: " <<find_backward<vector<char>, char>(test1_char, test_value_char) << endl;
    cout << "Input char test_value_char for vector<char> test1_char = {'a', 'b', 'c', 'd', 'e'}: " << endl;
    cin >> test_value_char;
    cout << "Posses in set from the end: " << find_backward<vector<char>, char>(test1_char, test_value_char) << endl;

    cout << endl;
    cout << "------Process of working for find_backward with type_vector<CPoint<int>>: -----" << endl;
    vector<CPoint<int>> last_test;
    for (int i = 0; i < 5; i++)
        last_test.push_back(CPoint<int>(i,i));
    int key_x;
    int key_y;
    key_x = key_y = 2;
    CPoint<int> test_point_true(key_x, key_y);
    key_x = 1;
    key_y = 2;
    CPoint<int> test_point_false(key_x, key_y);
    cout << "Posses in set from the end: " <<find_backward<vector<CPoint<int>>, CPoint<int>>(last_test, test_point_true) << endl;
    cout << "Posses in set from the end: " <<find_backward<vector<CPoint<int>>, CPoint<int>>(last_test, test_point_false) << endl;

    return 0;
}
