//
// Created by Volirvag on 29.05.2022.
//

#ifndef LAST_VERSION_OF_CUBIK_MENU_H
#define LAST_VERSION_OF_CUBIK_MENU_H
#include <iostream>
#include "Cube.h"
#include "ALgo.h"
class Menu{
private:
    Cube cube;
    bool flag = false;
    bool correct_cube = false;
public:
    Menu(){};
    void Show_Menu(){
        cout << "For show menu again print - Show_Menu" << endl;
        cout << "For read a cube from file print - Read_Cube" << endl;
        cout << "For check a cube print - Check_Cube" << endl;
        cout << "For save a cube in file print - Save_Cube" << endl;
        cout << "For show a cube in console print - Show_Cube" << endl;
        cout << "For start handle making of cube print - Handle" << endl;
        cout << "For generate random cube print - Random_Cube (Cube will be correct!)" << endl;
        cout << "For sole a cube print - Solve_Cube" << endl;
        cout << "For exit print - Exit" << endl;
    }
    bool Check_Cube(Cube &cube){
        Algo al(cube);
        if (al.CheckDate()) {
            return true;
        }else{
            return false;
        }
    }
    void Read_Cube(){
        cube.ReadCube();
        flag = true;
        if (Check_Cube(cube))
            correct_cube = true;
        else
            correct_cube = false;
    }
    void Save_Cube(){
        if (flag)
            cube.SaveCube();
        else
            cout << "Please read cube or generate random cube!" << endl;
    }
    void ShowCube(){
        if (flag)
            cube.Out();
        else
            cout << "Please read cube or generate random cube!" << endl;
    }

    void Random_Cube(){
        Algo al(cube);
        cube = al.RandomCube();
        if (Check_Cube(cube))
            correct_cube = true;
        else
            correct_cube = false;
        flag = true;
    }
    void Handle(){
        if(flag){
            Algo al(cube);
            cube = al.HandTurn();
        }
        else
            cout << "Please read cube or generate random cube!" << endl;
    }
    void Solve_Cube(){
        if(Check_Cube(cube)) {
            cube.AllSteps();
            cube.str_out();
        }else
            cout << "Please read cube or generate random cube!" << endl;
        cout << endl;
    }

    void check(){
        if (correct_cube)
            cout << "Cube is correct!" << endl;
        else
            cout << "Cube isn't correct!" << endl;
    }

};
#endif //LAST_VERSION_OF_CUBIK_MENU_H
