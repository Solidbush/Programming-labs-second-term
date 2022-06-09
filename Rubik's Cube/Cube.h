//
// Created by Volirvag on 26.05.2022.
//

#pragma once
#include<vector>
#include<iostream>
#include<fstream>
#include<string>
#include <windows.h>
using namespace std;
using vector3d = vector<vector<vector<char>>>;


//sides[0] - лицевая сторона
//sides[1] - задняя сторона
//sides[2] - левая сторона
//sides[3] - правая сторона
//sides[4] - верхняя сторона
//sides[5] - нижняя сторона
class Cube {
private:

    vector3d sides;
    string str;
    short k;
    void TurnOn(vector<vector<char>> &side) {
        vector<vector<char>> side_(3, vector<char>(3));
        int ind;
        for (int i = 0; i < 3; i++) {
            ind = 2;
            for (int j = 0; j < 3; j++) {
                side_[i][j] = side[ind][i];
                ind--;
            }
        }

        side = side_;
    }

    void TurnAgainst(vector<vector<char>> &side) {
        vector<vector<char>> side_(3, vector<char>(3));
        int ind;
        for (int i = 0; i < 3; i++) {
            ind = 0;
            for (int j = 0; j < 3; j++) {
                side_[i][j] = side[ind][2 - i];
                ind++;
            }
        }

        side = side_;
    }

    void Krest() {
        while (sides[0][0][1] != 'w' || sides[0][1][0] != 'w' || sides[0][1][2] != 'w' || sides[0][2][1] != 'w') {
            if (sides[1][0][1] == 'w') {
                if (sides[0][0][1] == 'w') {
                    while (sides[0][0][1] == 'w') {
                        F_On();
                    }
                }
                U_Twice();
            }

            if (sides[1][1][0] == 'w') {
                if (sides[0][1][2] == 'w') {
                    while (sides[0][1][2] == 'w') {
                        F_On();
                    }
                }
                R_Twice();
            }

            if (sides[1][1][2] == 'w') {
                if (sides[0][1][0] == 'w') {
                    while (sides[0][1][0] == 'w') {
                        F_On();
                    }
                }
                L_Twice();
            }

            if (sides[1][2][1] == 'w') {
                if (sides[0][2][1] == 'w') {
                    while (sides[0][2][1] == 'w') {
                        F_On();
                    }
                }
                D_Twice();
            }

            if (sides[2][1][2] == 'w') {
                L_On();
                if (sides[0][2][1] == 'w') {
                    while (sides[0][2][1] == 'w') {
                        F_On();
                    }
                }
                D_On();
            }

            if (sides[2][1][0] == 'w') {
                L_On();
                if (sides[0][0][1] == 'w') {
                    while (sides[0][0][1] == 'w') {
                        F_On();
                    }
                }
                U_Against();
            }

            if (sides[2][0][1] == 'w') {
                if (sides[0][0][1] == 'w') {
                    while (sides[0][0][1] == 'w') {
                        F_On();
                    }
                }
                U_Against();
            }

            if (sides[2][2][1] == 'w') {
                if (sides[0][2][1] == 'w') {
                    while (sides[0][2][1] == 'w') {
                        F_On();
                    }
                }
                D_On();
            }

            if (sides[3][1][0] == 'w') {
                R_On();
                if (sides[0][0][1] == 'w') {
                    while (sides[0][0][1] == 'w')
                        F_On();

                }
                U_On();
            }

            if (sides[3][1][2] == 'w') {
                R_On();
                if (sides[0][2][1] == 'w') {
                    while (sides[0][2][1] == 'w')
                        F_On();
                }
                D_Against();
            }

            if (sides[3][0][1] == 'w') {
                if (sides[0][0][1] == 'w') {
                    while (sides[0][0][1] == 'w')
                        F_On();
                }
                U_On();
            }

            if (sides[3][2][1] == 'w') {
                if (sides[0][2][1] == 'w') {
                    while (sides[0][2][1] == 'w')
                        F_On();
                }
                D_Against();
            }

            if (sides[4][2][1] == 'w') {
                U_On();
                if (sides[0][1][0] == 'w') {
                    while (sides[0][1][0] == 'w')
                        F_On();
                }
                L_On();
            }

            if (sides[4][0][1] == 'w') {
                U_On();
                if (sides[0][1][2] == 'w') {
                    while (sides[0][1][2] == 'w')
                        F_On();
                }
                R_Against();
            }

            if (sides[4][1][0] == 'w') {
                if (sides[0][1][0] == 'w') {
                    while (sides[0][1][0] == 'w')
                        F_On();
                }
                L_On();
            }

            if (sides[4][1][2] == 'w') {
                if (sides[0][1][2] == 'w') {
                    while (sides[0][1][2] == 'w')
                        F_On();
                }
                R_Against();
            }

            if (sides[5][0][1] == 'w') {
                D_On();
                if (sides[0][1][2] == 'w') {
                    while (sides[0][1][2] == 'w')
                        F_On();
                }
                R_On();
            }

            if (sides[5][2][1] == 'w') {
                D_On();
                if (sides[0][1][0] == 'w') {
                    while (sides[0][1][0] == 'w')
                        F_On();
                }
                L_Against();
            }

            if (sides[5][1][2] == 'w') {
                if (sides[0][1][2] == 'w') {
                    while (sides[0][1][2] == 'w')
                        F_On();
                }
                R_On();
            }

            if (sides[5][1][0] == 'w') {
                if (sides[0][1][0] == 'w') {
                    while (sides[0][1][0] == 'w')
                        F_On();
                }
                L_Against();
            }
        }
    }

    void PerfectKrest() {
        while (sides[2][1][1] != sides[2][1][2])
            F_On();

        if (sides[3][1][1] != sides[3][1][0]) {
            switch (sides[3][1][0]) {
                case 'r':
                    R_Twice();
                    B_Against();
                    D_Twice();
                    B_On();
                    break;
                case 'o':
                    R_Twice();
                    B_On();
                    U_Twice();
                    B_Against();
                    break;
            }
            R_Twice();
        }

        if (sides[4][1][1] != sides[4][2][1]) {
            switch (sides[4][2][1]) {
                case 'b':
                    U_Twice();
                    B_Against();
                    R_Twice();
                    B_On();
                    break;
                case 'r':
                    U_Twice();
                    B_Twice();
                    D_Twice();
                    B_Twice();
                    break;
            }
            U_Twice();
        }

        if (sides[5][1][1] != sides[5][0][1]) {
            switch (sides[5][0][1]) {
                case 'b':
                    D_Twice();
                    B_On();
                    R_Twice();
                    B_Against();
                    break;
                case 'o':
                    D_Twice();
                    B_Twice();
                    U_Twice();
                    B_Twice();
                    break;
            }
            D_Twice();
        }

        CheckPerfectKrest();

        //Out();
        k++;
    }

    void CheckPerfectKrest() {
        while (sides[3][1][1] != sides[3][1][0] || sides[4][1][1] != sides[4][2][1] || sides[5][1][1] != sides[5][0][1])
            PerfectKrest();
    }

    void FirstLay() {
        while ((sides[0][0][0] != 'w' || sides[2][0][2] != sides[2][1][1] || sides[4][2][0] != sides[4][1][1]) ||
               (sides[0][0][2] != 'w' || sides[3][0][0] != sides[3][1][1] || sides[4][2][2] != sides[4][1][1]) ||
               (sides[0][2][0] != 'w' || sides[2][2][2] != sides[2][1][1] || sides[5][0][0] != sides[5][1][1]) ||
               (sides[0][2][2] != 'w' || sides[3][2][0] != sides[3][1][1] || sides[5][0][2] != sides[5][1][1])) {
            if (sides[1][0][0] == 'w' || sides[1][0][2] == 'w' || sides[1][2][0] == 'w' || sides[1][2][2] == 'w' ||
                sides[3][0][2] == 'w' || sides[3][2][2] == 'w' || sides[4][0][0] == 'w' || sides[4][0][2] == 'w' ||
                sides[2][0][0] == 'w' || sides[2][2][0] == 'w' || sides[5][2][0] == 'w' || sides[5][2][2] == 'w') {
                bool flag = false;
                if (sides[1][0][0] == 'w' || sides[3][0][2] == 'w' || sides[4][0][2] == 'w')
                    flag = true;
                while (!flag) {
                    B_On();
                    if (sides[1][0][0] == 'w' || sides[3][0][2] == 'w' || sides[4][0][2] == 'w')
                        flag = true;
                }

                vector<char> arr_color(2);
                if (sides[1][0][0] == 'w') {
                    arr_color[0] = sides[3][0][2];
                    arr_color[1] = sides[4][0][2];
                } else if (sides[3][0][2] == 'w') {
                    arr_color[0] = sides[1][0][0];
                    arr_color[1] = sides[4][0][2];
                } else {
                    arr_color[0] = sides[3][0][2];
                    arr_color[1] = sides[1][0][0];
                }

                if ((arr_color[0] == 'b' && arr_color[1] == 'o') || (arr_color[1] == 'b' && arr_color[0] == 'o')) {
                    while (sides[0][0][2] != 'w' || sides[4][2][2] != 'o' || sides[3][0][0] != 'b') {
                        R_On();
                        B_On();
                        R_Against();
                        B_Against();
                    }
                }

                if ((arr_color[0] == 'r' && arr_color[1] == 'g') || (arr_color[1] == 'r' && arr_color[0] == 'g')) {
                    B_Against();
                    B_Against();
                    while (sides[0][2][0] != 'w' || sides[5][0][0] != 'r' || sides[2][2][2] != 'g') {
                        L_On();
                        B_On();
                        L_Against();
                        B_Against();
                    }
                }

                if ((arr_color[0] == 'r' && arr_color[1] == 'b') || (arr_color[1] == 'r' && arr_color[0] == 'b')) {
                    B_Against();
                    while (sides[0][2][2] != 'w' || sides[5][0][2] != 'r' || sides[3][2][0] != 'b') {
                        D_On();
                        B_On();
                        D_Against();
                        B_Against();
                    }
                }

                if ((arr_color[0] == 'o' && arr_color[1] == 'g') || (arr_color[1] == 'o' && arr_color[0] == 'g')) {
                    B_On();
                    while (sides[0][0][0] != 'w' || sides[4][2][0] != 'o' || sides[2][0][2] != 'g') {
                        L_Against();
                        B_Against();
                        L_On();
                        B_On();
                    }
                }
            }

            if (sides[2][0][2] == 'w' || sides[4][2][0] == 'w' ||
                (sides[0][0][0] == 'w' && (sides[2][0][2] != sides[2][1][1] || sides[4][2][0] != sides[4][1][1]))) {
                U_On();
                B_On();
                U_Against();
                B_Against();
            }

            if (sides[2][2][2] == 'w' || sides[5][0][0] == 'w' ||
                (sides[0][2][0] == 'w' && (sides[2][2][2] != sides[2][1][1] || sides[5][0][0] != sides[5][1][1]))) {
                L_On();
                B_On();
                L_Against();
                B_Against();
            }

            if (sides[5][0][2] == 'w' || sides[3][2][0] == 'w' ||
                (sides[0][2][2] == 'w' && (sides[5][0][2] != sides[5][1][1] || sides[3][2][0] != sides[3][1][1]))) {
                D_On();
                B_On();
                D_Against();
                B_Against();
            }

            if (sides[3][0][0] == 'w' || sides[4][2][2] == 'w' ||
                (sides[0][0][2] == 'w' && (sides[3][0][0] != sides[3][1][1] || sides[4][2][2] != sides[4][1][1]))) {
                R_On();
                B_On();
                R_Against();
                B_Against();
            }
        }
        //Out();
        k++;
    }

    void SecondLay() {
        while ((sides[2][0][1] != sides[2][1][1] || sides[2][2][1] != sides[2][1][1]) ||
               (sides[3][0][1] != sides[3][1][1] || sides[3][2][1] != sides[3][1][1]) ||
               (sides[4][1][0] != sides[4][1][1] || sides[4][1][2] != sides[4][1][1]) ||
               (sides[5][1][0] != sides[5][1][1] || sides[5][1][2] != sides[5][1][1])) {
            while ((sides[2][1][0] != 'y' && sides[1][1][2] != 'y') ||
                   (sides[4][0][1] != 'y' && sides[1][0][1] != 'y') ||
                   (sides[3][1][2] != 'y' && sides[1][1][0] != 'y') ||
                   (sides[5][2][1] != 'y' && sides[1][2][1] != 'y')) {
                if (sides[3][1][2] == 'b' && sides[1][1][0] != 'y') {
                    if (sides[1][1][0] == 'r') {
                        B_On();
                        D_On();
                        B_On();
                        D_Against();
                        B_Against();
                        R_Against();
                        B_Against();
                        R_On();
                        B_On();
                    } else if (sides[1][1][0] == 'o') {
                        B_Against();
                        U_Against();
                        B_Against();
                        U_On();
                        B_On();
                        R_On();
                        B_On();
                        R_Against();
                        B_Against();
                    }
                }

                if (sides[2][1][0] == 'g' && sides[1][1][2] != 'y') {
                    if (sides[1][1][2] == 'o') {
                        B_On();
                        U_On();
                        B_On();
                        U_Against();
                        B_Against();
                        L_Against();
                        B_Against();
                        L_On();
                        B_On();
                    } else if (sides[1][1][2] == 'r') {
                        B_Against();
                        D_Against();
                        B_Against();
                        D_On();
                        B_On();
                        L_On();
                        B_On();
                        L_Against();
                        B_Against();
                    }
                }

                if (sides[4][0][1] == 'o' && sides[1][0][1] != 'y') {
                    if (sides[1][0][1] == 'b') {
                        B_On();
                        R_On();
                        B_On();
                        R_Against();
                        B_Against();
                        U_Against();
                        B_Against();
                        U_On();
                        B_On();
                    } else if (sides[1][0][1] == 'g') {
                        B_Against();
                        L_Against();
                        B_Against();
                        L_On();
                        B_On();
                        U_On();
                        B_On();
                        U_Against();
                        B_Against();
                    }
                }

                if (sides[5][2][1] == 'r' && sides[1][2][1] != 'y') {
                    if (sides[1][2][1] == 'g') {
                        B_On();
                        L_On();
                        B_On();
                        L_Against();
                        B_Against();
                        D_Against();
                        B_Against();
                        D_On();
                        B_On();
                    } else if (sides[1][2][1] == 'b') {
                        B_Against();
                        R_Against();
                        B_Against();
                        R_On();
                        B_On();
                        D_On();
                        B_On();
                        D_Against();
                        B_Against();
                    }
                }
                B_On();
            }


            if (sides[2][0][1] != 'g' || sides[4][1][0] != 'o') {
                B_On();
                U_On();
                B_On();
                U_Against();
                B_Against();
                L_Against();
                B_Against();
                L_On();
                B_On();
            }

            if (sides[2][2][1] != 'g' || sides[5][1][0] != 'r') {
                B_Against();
                D_Against();
                B_Against();
                D_On();
                B_On();
                L_On();
                B_On();
                L_Against();
                B_Against();
            }

            if (sides[3][2][1] != 'b' || sides[5][1][2] != 'r') {
                B_On();
                D_On();
                B_On();
                D_Against();
                B_Against();
                R_Against();
                B_Against();
                R_On();
                B_On();
            }

            if (sides[3][0][1] != 'b' || sides[4][1][2] != 'o') {
                B_Against();
                U_Against();
                B_Against();
                U_On();
                B_On();
                R_On();
                B_On();
                R_Against();
                B_Against();
            }
        }
        //Out();
        k++;
    }

    void UpperKrest() {
        while (sides[1][0][1] != 'y' || sides[1][1][0] != 'y' || sides[1][1][2] != 'y' || sides[1][2][1] != 'y') {
            if ((sides[1][1][0] == 'y' && sides[1][1][2] == 'y' && sides[1][0][1] != 'y' && sides[1][2][1] != 'y') ||
                (sides[1][1][0] != 'y' && sides[1][1][2] != 'y' && sides[1][0][1] != 'y' && sides[1][2][1] != 'y')) {
                D_On();
                L_On();
                B_On();
                L_Against();
                B_Against();
                D_Against();
            }

            if (sides[1][0][1] == 'y' && sides[1][1][0] == 'y' && sides[1][1][2] != 'y' && sides[1][2][1] != 'y') {
                D_On();
                L_On();
                B_On();
                L_Against();
                B_Against();
                L_On();
                B_On();
                L_Against();
                B_Against();
                D_Against();
            }
            B_On();
        }

        //Out();
        k++;
    }

    void CornerEl() {
        while (sides[1][0][0] != 'y' || sides[1][0][2] != 'y' || sides[1][2][0] != 'y' || sides[1][2][2] != 'y') {
            while (sides[1][0][0] != 'y') {
                F_On();
                U_On();
                F_Against();
                U_Against();
            }
            B_On();
        }

        CheckCornerEl();

        //Out();
        k++;
    }

    void CheckCornerEl() {
        bool flag = false;

        while (!flag) {
            flag = true;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++)
                    if (sides[0][i][j] != sides[0][1][1] || sides[1][i][j] != sides[1][1][1])
                        flag = false;
            }

            for (int i = 0; i < 3; i++) {
                for (int j = 1; j < 3; j++)
                    if (sides[2][i][j] != sides[2][1][1])
                        flag = false;
            }

            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 2; j++)
                    if (sides[3][i][j] != sides[3][1][1])
                        flag = false;
            }

            for (int i = 1; i < 3; i++) {
                for (int j = 0; j < 3; j++)
                    if (sides[4][i][j] != sides[4][1][1])
                        flag = false;
            }

            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 3; j++)
                    if (sides[5][i][j] != sides[5][1][1])
                        flag = false;
            }

            if (!flag) {
                F_On();
                U_On();
                F_Against();
                U_Against();
            }
        }
    }

    void UpperEdge() {
        while (sides[2][1][0] != sides[2][1][1] || sides[3][1][2] != sides[3][1][1] ||
               sides[4][0][1] != sides[4][1][1] || sides[5][2][1] != sides[5][1][1]) {
            while ((sides[2][1][0] != sides[2][1][1] || sides[4][0][1] != sides[4][1][1]) &&
                   (sides[2][1][0] != sides[2][1][1] || sides[5][2][1] != sides[5][1][1]) &&
                   (sides[3][1][2] != sides[3][1][1] || sides[4][0][1] != sides[4][1][1]) &&
                   (sides[3][1][2] != sides[3][1][1] || sides[5][2][1] != sides[5][1][1]) &&
                   (sides[4][0][1] != sides[4][1][1] || sides[5][2][1] != sides[5][1][1]) &&
                   (sides[3][1][2] != sides[3][1][1] || sides[2][1][0] != sides[2][1][1])) {
                B_On();
            }

            if ((sides[2][1][0] == sides[2][1][1] && sides[4][0][1] == sides[4][1][1]) ||
                (sides[3][1][2] == sides[3][1][1] && sides[2][1][0] == sides[2][1][1])) {
                D_Against();
                B_On();
                B_On();
                D_On();
                B_On();
                B_On();
                D_Against();
                R_On();
                D_On();
                B_On();
                D_Against();
                B_Against();

                D_Against();
                R_Against();
                D_On();
                D_On();
                B_Against();
            }

            if ((sides[2][1][0] == sides[2][1][1] && sides[5][2][1] == sides[5][1][1]) ||
                (sides[4][0][1] == sides[4][1][1] && sides[5][2][1] == sides[5][1][1])) {
                R_Against();
                B_On();
                B_On();
                R_On();
                B_On();
                B_On();
                R_Against();
                U_On();
                R_On();
                B_On();
                R_Against();
                B_Against();

                R_Against();
                U_Against();
                R_On();
                R_On();
                B_Against();
            }

            if (sides[3][1][2] == sides[3][1][1] && sides[4][0][1] == sides[4][1][1]) {
                L_Against();
                B_On();
                B_On();
                L_On();
                B_On();
                B_On();
                L_Against();
                D_On();
                L_On();
                B_On();
                L_Against();
                B_Against();

                L_Against();
                D_Against();
                L_On();
                L_On();
                B_Against();
            }

            if (sides[3][1][2] == sides[3][1][1] && sides[5][2][1] == sides[5][1][1]) {
                U_Against();
                B_On();
                B_On();
                U_On();
                B_On();
                B_On();
                U_Against();
                L_On();
                U_On();
                B_On();
                U_Against();
                B_Against();

                U_Against();
                L_Against();
                U_On();
                U_On();
                B_Against();
            }
        }

        //Out();
        k++;
    }

    void FinalStage() {
        while (sides[2][0][0] != sides[2][1][1] || sides[2][0][2] != sides[2][1][1] ||
               sides[3][0][2] != sides[3][1][1] || sides[3][2][2] != sides[3][1][1] ||
               sides[4][0][0] != sides[4][1][1] || sides[4][0][2] != sides[4][1][1] ||
               sides[5][2][0] != sides[5][1][1] || sides[5][2][2] != sides[5][1][1]) {
            if (sides[3][2][2] == sides[3][1][1] && sides[5][2][2] == sides[5][1][1]) {
                while (sides[2][0][0] != sides[2][1][1] || sides[2][0][2] != sides[2][1][1] ||
                       sides[3][0][2] != sides[3][1][1] || sides[3][2][2] != sides[3][1][1] ||
                       sides[4][0][0] != sides[4][1][1] || sides[4][0][2] != sides[4][1][1] ||
                       sides[5][2][0] != sides[5][1][1] || sides[5][2][2] != sides[5][1][1]) {
                    U_On();
                    R_Against();
                    U_On();
                    L_Twice();
                    U_Against();
                    R_On();
                    U_On();
                    L_Twice();
                    U_Twice();
                }
            } else if (sides[3][0][2] == sides[3][1][1] && sides[4][0][2] == sides[4][1][1]) {
                while (sides[2][0][0] != sides[2][1][1] || sides[2][0][2] != sides[2][1][1] ||
                       sides[3][0][2] != sides[3][1][1] || sides[3][2][2] != sides[3][1][1] ||
                       sides[4][0][0] != sides[4][1][1] || sides[4][0][2] != sides[4][1][1] ||
                       sides[5][2][0] != sides[5][1][1] || sides[5][2][2] != sides[5][1][1]) {
                    L_On();
                    U_Against();
                    L_On();
                    D_Twice();
                    L_Against();
                    U_On();
                    L_On();
                    D_Twice();
                    L_Twice();
                }
            } else if (sides[2][0][0] == sides[2][1][1] && sides[4][0][0] == sides[4][1][1]) {
                while (sides[2][0][0] != sides[2][1][1] || sides[2][0][2] != sides[2][1][1] ||
                       sides[3][0][2] != sides[3][1][1] || sides[3][2][2] != sides[3][1][1] ||
                       sides[4][0][0] != sides[4][1][1] || sides[4][0][2] != sides[4][1][1] ||
                       sides[5][2][0] != sides[5][1][1] || sides[5][2][2] != sides[5][1][1]) {
                    D_On();
                    L_Against();
                    D_On();
                    R_Twice();
                    D_Against();
                    L_On();
                    D_On();
                    R_Twice();
                    D_Twice();
                }
            } else if (sides[2][0][2] == sides[2][1][1] && sides[5][2][0] == sides[5][1][1]) {
                while (sides[2][0][0] != sides[2][1][1] || sides[2][0][2] != sides[2][1][1] ||
                       sides[3][0][2] != sides[3][1][1] || sides[3][2][2] != sides[3][1][1] ||
                       sides[4][0][0] != sides[4][1][1] || sides[4][0][2] != sides[4][1][1] ||
                       sides[5][2][0] != sides[5][1][1] || sides[5][2][2] != sides[5][1][1]) {
                    R_On();
                    D_Against();
                    R_On();
                    U_Twice();
                    R_Against();
                    D_On();
                    R_On();
                    U_Twice();
                    R_Twice();
                }
            } else if ((sides[3][2][2] != sides[3][1][1] || sides[5][2][2] != sides[5][1][1]) &&
                       (sides[3][0][2] != sides[3][1][1] || sides[4][0][2] != sides[4][1][1]) &&
                       (sides[2][0][0] != sides[2][1][1] || sides[4][0][0] != sides[4][1][1]) &&
                       (sides[2][0][2] != sides[2][1][1] || sides[5][2][0] != sides[5][1][1])) {
                while ((sides[2][0][2] != sides[2][1][1] || sides[5][2][0] != sides[5][1][1]) &&
                       (sides[2][0][0] != sides[2][1][1] || sides[4][0][0] != sides[4][1][1]) &&
                       (sides[3][0][2] != sides[3][1][1] || sides[4][0][2] != sides[4][1][1]) &&
                       (sides[3][2][2] != sides[3][1][1] || sides[5][2][2] != sides[5][1][1])) {
                    U_On();
                    R_Against();
                    U_On();
                    L_Twice();
                    U_Against();
                    R_On();
                    U_On();
                    L_Twice();
                    U_Twice();
                }
            }
        }

        //Out();
        k++;
    }

public:
    Cube() {
        sides.assign(6, vector<vector<char>>(3, vector<char>(3, 'b')));
        str = "";
        k = 0;
    }

    Cube(const vector<vector<vector<char>>> &sides) {
        this->sides = sides;
        str = "";
        k = 0;
    }

    Cube(const Cube &other) {
        this->sides = other.sides;
    }

    char get_el(int i, int j, int k) const {
        return this->sides[i][j][k];
    }

    void set_el(int i, int j, int k, char el) {
        this->sides[i][j][k] = el;
    }


    void F_On() {
        TurnOn(this->sides[0]);

        vector<vector<char>> side_(2, vector<char>(3));
        for (int i = 0; i < 3; i++) {
            side_[0][i] = sides[2][2 - i][2];
            side_[1][i] = sides[3][2 - i][0];
        }

        for (int i = 0; i < 3; i++) {

            sides[2][2 - i][2] = sides[5][0][2 - i];
            sides[3][2 - i][0] = sides[4][2][2 - i];
        }

        sides[4][2] = side_[0];
        sides[5][0] = side_[1];

        str += "F ";
    }

    void F_Against() {
        TurnAgainst(this->sides[0]);

        vector<vector<char>> side_(2, vector<char>(3));
        for (int i = 0; i < 3; i++) {
            side_[0][i] = sides[2][i][2];
            side_[1][i] = sides[3][i][0];
        }

        for (int i = 0; i < 3; i++) {
            sides[2][i][2] = sides[4][2][2 - i];
            sides[3][i][0] = sides[5][0][2 - i];
        }

        sides[4][2] = side_[1];
        sides[5][0] = side_[0];

        str += "F' ";
    }

    void F_Twice() {
        F_On();
        F_On();

        str += "F2 ";
    }


    void B_On() {
        TurnOn(this->sides[1]);

        vector<vector<char>> side_(2, vector<char>(3));
        for (int i = 0; i < 3; i++) {
            side_[0][i] = sides[3][i][2];
            side_[1][i] = sides[2][i][0];
        }

        for (int i = 0; i < 3; i++) {
            sides[3][i][2] = sides[5][2][2 - i];
            sides[2][i][0] = sides[4][0][2 - i];
        }

        sides[4][0] = side_[0];
        sides[5][2] = side_[1];

        str += "B ";
    }

    void B_Against() {
        TurnAgainst(this->sides[1]);

        vector<vector<char>> side_(2, vector<char>(3));
        for (int i = 0; i < 3; i++) {
            side_[0][i] = sides[3][2 - i][2];
            side_[1][i] = sides[2][2 - i][0];
        }

        for (int i = 0; i < 3; i++) {
            sides[3][i][2] = sides[4][0][i];
            sides[2][i][0] = sides[5][2][i];
        }

        sides[4][0] = side_[1];
        sides[5][2] = side_[0];

        str += "B' ";
    }

    void B_Twice() {
        B_On();
        B_On();

        str += "B2 ";
    }


    void L_On() {
        TurnOn(this->sides[2]);

        vector<vector<char>> side_(2, vector<char>(3));
        for (int i = 0; i < 3; i++) {
            side_[0][i] = sides[1][2 - i][2];
            side_[1][i] = sides[0][2 - i][0];
        }

        for (int i = 0; i < 3; i++) {
            sides[1][2 - i][2] = sides[5][i][0];
            sides[0][2 - i][0] = sides[4][2 - i][0];
        }

        for (int i = 0; i < 3; i++) {
            sides[5][2 - i][0] = side_[1][i];
            sides[4][i][0] = side_[0][i];
        }

        str += "L ";
    }

    void L_Against() {
        TurnAgainst(this->sides[2]);

        vector<vector<char>> side_(2, vector<char>(3));
        for (int i = 0; i < 3; i++) {
            side_[0][i] = sides[1][2 - i][2];
            side_[1][i] = sides[0][2 - i][0];
        }

        for (int i = 0; i < 3; i++) {
            sides[1][2 - i][2] = sides[4][i][0];
            sides[0][2 - i][0] = sides[5][2 - i][0];
        }

        for (int i = 0; i < 3; i++) {
            sides[5][i][0] = side_[0][i];
            sides[4][2 - i][0] = side_[1][i];
        }

        str += "L' ";
    }

    void L_Twice() {
        L_On();
        L_On();

        str += "L2 ";
    }


    void R_On() {
        TurnOn(this->sides[3]);

        vector<vector<char>> side_(2, vector<char>(3));
        for (int i = 0; i < 3; i++) {
            side_[0][i] = sides[0][2 - i][2];
            side_[1][i] = sides[1][2 - i][0];
        }

        for (int i = 0; i < 3; i++) {
            sides[0][2 - i][2] = sides[5][2 - i][2];
            sides[1][2 - i][0] = sides[4][i][2];
        }

        for (int i = 0; i < 3; i++) {
            sides[4][2 - i][2] = side_[0][i];
            sides[5][i][2] = side_[1][i];
        }

        str += "R ";
    }

    void R_Against() {
        TurnAgainst(this->sides[3]);

        vector<vector<char>> side_(2, vector<char>(3));
        for (int i = 0; i < 3; i++) {
            side_[0][i] = sides[0][2 - i][2];
            side_[1][i] = sides[1][2 - i][0];
        }

        for (int i = 0; i < 3; i++) {
            sides[0][2 - i][2] = sides[4][2 - i][2];
            sides[1][2 - i][0] = sides[5][i][2];
        }

        for (int i = 0; i < 3; i++) {
            sides[5][2 - i][2] = side_[0][i];
            sides[4][i][2] = side_[1][i];
        }

        str += "R' ";
    }

    void R_Twice() {
        R_On();
        R_On();

        str += "R2 ";
    }


    void U_On() {
        TurnOn(this->sides[4]);

        vector<vector<char>> side_(2, vector<char>(3));
        for (int i = 0; i < 3; i++) {
            side_[0][i] = sides[2][0][i];
            side_[1][i] = sides[3][0][i];

        }

        for (int i = 0; i < 3; i++) {
            sides[2][0][i] = sides[0][0][i];
            sides[3][0][i] = sides[1][0][i];
        }

        sides[0][0] = side_[1];
        sides[1][0] = side_[0];

        str += "U ";
    }

    void U_Against() {
        TurnAgainst(this->sides[4]);

        vector<vector<char>> side_(2, vector<char>(3));
        for (int i = 0; i < 3; i++) {
            side_[0][i] = sides[2][0][i];
            side_[1][i] = sides[3][0][i];
        }

        for (int i = 0; i < 3; i++) {
            sides[2][0][i] = sides[1][0][i];
            sides[3][0][i] = sides[0][0][i];
        }

        sides[1][0] = side_[1];
        sides[0][0] = side_[0];

        str += "U' ";
    }

    void U_Twice() {
        U_On();
        U_On();

        str += "U2 ";
    }


    void D_On() {
        TurnOn(this->sides[5]);

        vector<vector<char>> side_(2, vector<char>(3));
        for (int i = 0; i < 3; i++) {
            side_[0][i] = sides[2][2][i];
            side_[1][i] = sides[3][2][i];
        }

        for (int i = 0; i < 3; i++) {
            sides[2][2][i] = sides[1][2][i];
            sides[3][2][i] = sides[0][2][i];
        }

        sides[1][2] = side_[1];
        sides[0][2] = side_[0];

        str += "D ";
    }

    void D_Against() {
        TurnAgainst(this->sides[5]);

        vector<vector<char>> side_(2, vector<char>(3));
        for (int i = 0; i < 3; i++) {
            side_[0][i] = sides[2][2][i];
            side_[1][i] = sides[3][2][i];
        }

        for (int i = 0; i < 3; i++) {
            sides[2][2][i] = sides[0][2][i];
            sides[3][2][i] = sides[1][2][i];
        }

        sides[1][2] = side_[0];
        sides[0][2] = side_[1];

        str += "D' ";
    }

    void D_Twice() {
        D_On();
        D_On();

        str += "D2 ";
    }


    void str_out() const {
        cout << "ASSEMBLY STEPS:" << endl;
        for (int i = 0; i < str.length(); i++)
            cout << str[i];
    }


    void Out() const
    {
        for (int j = 2; j >= 0; j--)
            cout << "      " << sides[1][j][2] << " " << sides[1][j][1] << " " << sides[1][j][0] << endl;
        for (int j = 0; j < 3; j++)
            cout << "      " << sides[4][j][0] << " " << sides[4][j][1] << " " << sides[4][j][2] << endl;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++)
                cout << sides[2][j][k] << " ";
            for (int k = 0; k < 3; k++)
                cout << sides[0][j][k] << " ";
            for (int k = 0; k < 3; k++)
                cout << sides[3][j][k] << " ";
            cout << endl;
        }
        for (int j = 0; j < 3; j++)
            cout << "      " << sides[5][j][0] << " " << sides[5][j][1] << " " << sides[5][j][2] << endl;
    }

    void SaveCube()
    {
        ofstream fout("cube_out.txt");
        for (int j = 2; j >= 0; j--)
            fout << "      " << sides[1][j][2] << " " << sides[1][j][1] << " " << sides[1][j][0] << endl;
        for (int j = 0; j < 3; j++)
            fout << "      " << sides[4][j][0] << " " << sides[4][j][1] << " " << sides[4][j][2] << endl;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++)
                fout << sides[2][j][k] << " ";
            for (int k = 0; k < 3; k++)
                fout << sides[0][j][k] << " ";
            for (int k = 0; k < 3; k++)
                fout << sides[3][j][k] << " ";
            fout << endl;
        }
        for (int j = 0; j < 3; j++)
            fout << "      " << sides[5][j][0] << " " << sides[5][j][1] << " " << sides[5][j][2] << endl;
//        for (int i = 0; i < 6; i++)
//        {
//            for (int j = 0; j < 3; j++)
//            {
//                for (int k = 0; k < 3; k++)
//                    fout << sides[i][j][k] << ' ';
//                fout << endl;
//            }
//
//            fout << endl;
//        }
    }




    void ReadCube()
    {
        ifstream fin("Cube_in.txt");
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    fin >> this->sides[i][j][k];
                }
            }
        }

        for (int i = 0; i < 6; i++)
        {
            switch (sides[i][1][1])
            {
                case 'w':
                    if (i != 0)
                        swap(sides[i], sides[0]);
                    break;
                case 'y':
                    if (i != 1)
                        swap(sides[i], sides[1]);
                    break;
                case 'g':
                    if (i != 2)
                        swap(sides[i], sides[2]);
                    break;
                case 'b':
                    if (i != 3)
                        swap(sides[i], sides[3]);
                    break;
                case 'o':
                    if (i != 4)
                        swap(sides[i], sides[4]);
                    break;
                case 'r':
                    if (i != 5)
                        swap(sides[i], sides[5]);
                    break;
            }
        }
        //SaveCube();
        fin.close();
    }


    void AllSteps()
    {
        Krest();
        PerfectKrest();
        FirstLay();
        SecondLay();
        UpperKrest();
        CornerEl();
        UpperEdge();
        FinalStage();
    }

};
