//
// Created by Volirvag on 11.02.2022.
//

#include <iostream>
#include "fun.h"

using namespace std;

namespace fun {
    Colection::Colection() {
        max_k = 10;


    }
    Colection::Colection(const Colection &col) {
        max_k = col.max_k;
        m = col.m;
    }
    Colection::Colection(unsigned t) {
        if (t >= 1) {
            max_k = t;
        } else {
            max_k = 10;
        }
    }
    bool Colection::is_contain(int value) {
        return m.count(value) > 0;
        }

    bool Colection::add_value(int value) {
        if (m.size() >= max_k) {
            cout << "Set is full!" << endl;
            return false;
        } else {
            m.insert(value);
            cout << "Sucsessfull added!" << endl;
        }
        return true;
    }
    bool Colection::delete_value(int value) {
        if (m.size() == 0) {
            cout << "Set is empty!" << endl;
            return false;
        }
        if (m.count(value) == 0)
            cout << "Set not contain this value!" << endl;
        else {
            m.erase(value);
            cout << "Element deleted!" << endl;
        }
        return true;
    }
    void Colection::print_set() {
        if (m.empty())
            cout << "Set is empty!" << endl;
        else {
            for (auto element : m)
                cout << element << " ";
            cout << endl;
        }
    }

    Colection Colection::per_set(struct Colection& col) {
        Colection temp_col(col.max_k + max_k);
        for (auto element : col.m) {
            if (m.count(element) > 0) {
                temp_col.add_value(element);
            }
        }
        temp_col.print_set();
    }

    Colection Colection::obed_set(struct Colection& col) {
        Colection temp_col(col.max_k + max_k);
        for (auto element : col.m)
            temp_col.add_value(element);
        for (auto element : m)
            temp_col.add_value(element);
        temp_col.print_set();
    }

    void Colection::move_set_values(struct Colection& col, char a) {
        if (a == '+')
            for (auto element : col.m)
                if (m.count(element) == 0)
                    add_value(element);
        if (a == '-')
            for (auto element : col.m)
                if (m.count(element) != 0)
                delete_value(element);
    }

    Menu::Menu(){
        flag = false;
        set = 1;
        key = true;
        Colection set1;
        Colection set2;
    }
    Menu::Menu(int set_1_size, int set_2_size, int common_set_num){
       Colection set1(set_1_size);
       Colection set2(set_2_size);
       set = common_set_num;
       flag = false;
       set = 1;
       key = true;
    }

    void Menu::Set_choice() {
        cout << "First or second set?" << endl;
        int temp_set;
        cin >> temp_set;
        if ((temp_set != 1) && (temp_set != 2))
            cout << "Error! Now you are working with set: " << set << endl;
        else{
            set = temp_set;
            cout << "You have changed base set on: " << set << endl;
        }

    }

    char Menu::read_show() {
        cin >> com;
        return com;
    }

    void Menu::Command() {
        int value;
        switch(Menu::read_show())
        {
            case '?':
            {
                cout << "Enter value" << endl;
                cin >> value;
                if (set == 1)
                    set1.is_contain(value);
                else
                    set2.is_contain(value);
                break;
            }
            case '*':
            {
                Set_choice();
                break;
            }
            case '8':
            {
                key = false;
                break;
            }
            case '+':
            {
                cout << "Enter value" << endl;
                cin >> value;
                if (set == 1)
                    set1.add_value(value);
                else
                    set2.add_value(value);
                break;
            }
            case '-':
            {
                cout << "Enter value" << endl;
                cin >> value;
                if (set == 1)
                    set1.delete_value(value);
                else
                    set2.delete_value(value);
                break;
            }
            case '&':
            {
                set1.per_set(set2);
                break;
            }
            case '|':
            {
                set1.obed_set(set2);
                break;
            }
            case '!':
            {
                cout << "+ or -?" << endl;
                char a;
                cin >> a;
                set1.move_set_values(set2, a);
                break;
            }
            case '7':
            {
                if (set == 1)
                    set1.print_set();
                else
                    set2.print_set();
                break;
            }
            case '@':
            {
                flag = false;
                break;
            }
            default:
                cout << "Error! This command not real" << endl;
        }

    }

    void Menu::ShowMenu() {
        if (flag == false)
        {
            cout << "For contain element in set - press ?" << endl;
            cout << "For add element in set - press +" << endl;
            cout << "For delete element in set - press -" << endl;
            cout << "For peresech sets - press &" << endl;
            cout << "For obedenit sets - press |" << endl;
            cout << "For add or delete all element depending from set - press !" << endl;
            cout << "For show set pres - 7" << endl;
            cout << "For exit - press 8" << endl;
            cout << "For change set - press *" << endl;
            cout << "For read list of commands again - press @" << endl;
            cout << endl;
            cout << "Now you are using set: " << set << "!" << endl;
        }
        flag = true;
    }

    void Menu::Start() {
        while(key == true)
        {
            ShowMenu();
            Command();
        }
    }
};
