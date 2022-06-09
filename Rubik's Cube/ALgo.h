//
// Created by Volirvag on 26.05.2022.
//
#ifndef RUBICK_ALGO_H
#define RUBICK_ALGO_H
#pragma once
#include<iostream>
#include <experimental/random>
#include"Cube.h"

class Algo{
private:
    Cube cube;

    bool CheckColor(char a, char b) const
    {
        if (a == 'w' && (b == 'o' || b == 'g' || b == 'b' || b == 'r'))
            return false;

        if (a == 'y' && (b == 'o' || b == 'g' || b == 'b' || b == 'r'))
            return false;

        if (a == 'g' && (b == 'o' || b == 'r' || b == 'w' || b == 'y'))
            return false;

        if (a == 'b' && (b == 'o' || b == 'r' || b == 'w' || b == 'y'))
            return false;

        if (a == 'o' && (b == 'b' || b == 'g' || b == 'w' || b == 'y'))
            return false;

        if (a == 'r' && (b == 'b' || b == 'g' || b == 'w' || b == 'y'))
            return false;

        return true;
    }

    bool CheckCornerColor(char a, char b, char c) const
    {
        if ((a == 'w' && b == 'g' && c == 'o') || (a == 'w' && b == 'g' && c == 'r') || (a == 'w' && b == 'b' && c == 'o') || (a == 'w' && b == 'b' && c == 'r') || (a == 'y' && b == 'b' && c == 'o') || (a == 'y' && b == 'b' && c == 'r') || (a == 'y' && b == 'g' && c == 'o') || (a == 'y' && b == 'g' && c == 'r'))
            return false;

        return true;
    }

    //CheckCornerColorElements
    bool CCCE(char a, char b, char c) const
    {
        return CheckCornerColor(a, b, c) * CheckCornerColor(a, c, b) * CheckCornerColor(b, a, c) * CheckCornerColor(b, c, a) * CheckCornerColor(c, a, b) * CheckCornerColor(c, b, a);
    }

public:

    Algo() = default;

    Algo(const Cube &other)
    {
        this->cube = other;
    }

    Cube get_cube() const
    {
        return this->cube;
    }

    bool CheckDate()
    {
        if (CheckColor(cube.get_el(0, 0, 1), cube.get_el(4, 2, 1)) || CheckColor(cube.get_el(0, 1, 0), cube.get_el(2, 1, 2)) || CheckColor(cube.get_el(0, 2, 1), cube.get_el(5, 0, 1)) || CheckColor(cube.get_el(0, 1, 2), cube.get_el(3, 1, 0)) || CheckColor(cube.get_el(1, 0, 1), cube.get_el(4, 0, 1)) || CheckColor(cube.get_el(1, 1, 0), cube.get_el(3, 1, 2)) || CheckColor(cube.get_el(1, 2, 1), cube.get_el(5, 2, 1)) || CheckColor(cube.get_el(1, 1, 2), cube.get_el(2, 1, 0)) || CheckColor(cube.get_el(2, 0, 1), cube.get_el(4, 1, 0)) || CheckColor(cube.get_el(2, 2, 1), cube.get_el(5, 1, 0)) || CheckColor(cube.get_el(3, 0, 1), cube.get_el(4, 1, 2)) || CheckColor(cube.get_el(3, 2, 1), cube.get_el(5, 1, 2)))
        {
            return false;
        }

        if (CCCE(cube.get_el(0, 0, 0), cube.get_el(2, 0, 2), cube.get_el(4, 2, 0)) || CCCE(cube.get_el(0, 0, 2), cube.get_el(3, 0, 0), cube.get_el(4, 2, 2)) || CCCE(cube.get_el(0, 2, 0), cube.get_el(2, 2, 2), cube.get_el(5, 0, 0)) || CCCE(cube.get_el(0, 2, 2), cube.get_el(3, 2, 0), cube.get_el(5, 0, 2)) || CCCE(cube.get_el(1, 0, 0), cube.get_el(3, 0, 2), cube.get_el(4, 0, 2)) || CCCE(cube.get_el(1, 0, 2), cube.get_el(2, 0, 0), cube.get_el(4, 0, 0)) || CCCE(cube.get_el(1, 2, 0), cube.get_el(3, 2, 2), cube.get_el(5, 2, 2)) || CCCE(cube.get_el(1, 2, 2), cube.get_el(2, 2, 0), cube.get_el(5, 2, 0)))
        {
            return false;
        }

        cube.AllSteps();

        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++)
            {
                if (cube.get_el(0, j, k) != 'w' || cube.get_el(1, j, k) != 'y' || cube.get_el(2, j, k) != 'g' || cube.get_el(3, j, k) != 'b' || cube.get_el(4, j, k) != 'o' || cube.get_el(5, j, k) != 'r')
                {
                    return false;
                }
            }

        return true;
    }

    Cube RandomCube()
    {
        short num;
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    switch (i)
                    {
                        case 0:
                            cube.set_el(i, j, k, 'w');
                            break;
                        case 1:
                            cube.set_el(i, j, k, 'y');
                            break;
                        case 2:
                            cube.set_el(i, j, k, 'g');
                            break;
                        case 3:
                            cube.set_el(i, j, k, 'b');
                            break;
                        case 4:
                            cube.set_el(i, j, k, 'o');
                            break;
                        case 5:
                            cube.set_el(i, j, k, 'r');
                            break;
                    }
                }
            }
        }

        for (int i = 0; i < experimental::randint(1, 100); i++)
        {
            num = experimental::randint(1, 12);
            if (num == 1)
            {
                cube.F_On();
            }
            else if (num == 2)
            {
                cube.B_On();
            }
            else if (num == 3)
            {
                cube.L_On();
            }
            else if (num == 4)
            {
                cube.R_On();
            }
            else if (num == 5)
            {
                cube.U_On();
            }
            else if (num == 6)
            {
                cube.D_On();
            }
            else if (num == 7)
            {
                cube.B_On();
            }

            else if (num == 8)
            {
                cube.L_On();
            }
            else if (num == 9)
            {
                cube.R_On();
            }
            else if (num == 10)
            {
                cube.U_On();
            }
            else if (num == 11)
            {
                cube.D_On();
            }
            else if (num == 12)
            {
                cube.F_On();
            }
        }
        return cube;
    }

    Cube HandTurn()
    {
        string step;
        cout << "Print your commands: / If you want to finish, print - ." << endl;
        cin >> step;

        while (step != "."){
            if (step == "L")
                cube.L_On();
            else if (step == "L'")
                cube.L_Against();
            else if (step == "L'")
                cube.L_Against();
            else if (step == "B")
                cube.B_On();
            else if (step == "B'")
                cube.B_Against();
            else if (step == "F")
                cube.F_On();
            else if (step == "F'")
                cube.F_Against();
            else if (step == "R")
                cube.R_On();
            else if (step == "R'")
                cube.R_Against();
            else if (step == "U")
                cube.U_On();
            else if (step == "U'")
                cube.U_Against();
            else if (step == "D")
                cube.D_On();
            else if (step == "D'")
                cube.D_Against();
            else if (step == ".")
                cout << "";
            else
                cout << endl << "Unknown command!" << endl;
            cin >> step;
        }
        return cube;
    }

    void make_cube(){
        cube.AllSteps();
    }
    void show_commands(){
        cube.str_out();
    }
};


#endif //RUBICK_ALGO_H
