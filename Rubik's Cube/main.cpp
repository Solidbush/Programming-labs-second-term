#include<iostream>
#include<vector>
#include "Menu.h"
#include <fstream>
using namespace std;
    int main() {
        Menu m;
        m.Show_Menu();
        string command;
        cin >> command;
        while (command != "Exit") {
            if (command == "Show_Menu")
                m.Show_Menu();
            else if (command == "Read_Cube")
                m.Read_Cube();
            else if (command == "Save_Cube")
                m.Save_Cube();
            else if (command == "Check_Cube")
                m.check();
            else if (command == "Show_Cube")
                m.ShowCube();
            else if (command == "Handle_Solve")
                m.Handle();
            else if (command == "Random_Cube")
                m.Random_Cube();
            else if (command == "Solve_Cube")
                m.Solve_Cube();
            else if (command == "Exit")
                break;
            else
                cout << "Unknown command!" << endl;
            cin >> command;
        }
        return 0;
}