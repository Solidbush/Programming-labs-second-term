//fun.h
// Created by Volirvag on 11.02.2022.
//

#ifndef LAB2_FUN_H
#define LAB2_FUN_H

#include <unordered_set>

using namespace std;
namespace fun
{
    class Colection{
    private:
        unsigned max_k;
        std::unordered_set<int> m;
    public:
        Colection();
        Colection(const Colection&);
        Colection(unsigned t);

        bool is_contain(int value);

        bool add_value(int value);

        bool delete_value(int value);

        void print_set();

        Colection per_set(struct Colection& col);

        Colection obed_set(struct Colection& col);

        void move_set_values(struct Colection& col, char a);

    };
    class Menu{
    private:
        bool flag;
        bool key;
        int set;
        char com;
        Colection set1;
        Colection set2;

    public:
        Menu();
        Menu(int set_1_size, int set_2_size, int common_set_num);
        void ShowMenu();
        void Start();
        char read_show();
        void Command();
        void Set_choice();
        void Number_of_set();

    };
}

#endif //LAB2_FUN_H