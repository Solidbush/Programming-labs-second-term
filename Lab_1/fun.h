//fun.h
// Created by Volirvag on 10.02.2022.
//

#ifndef LAB_1_FUN_H
#define LAB_1_FUN_H
#pragma once
#endif //LAB_1_FUN_H

using namespace std;
namespace fun
{
    //Структура комплексного числа
    struct Complex{
        float real;
        float image;
        float k;
    };

    //Блок функций первого задания
    void swap_1 (int *, int *);
    void swap_2 (int &, int &);

    //Блок функций шестого задания
    void round_1 (float *);
    void round_2 (float &);

    //Блок функций девятого задания
    void comp_1 (Complex *, float *);
    void comp_2 (Complex &, float &);

    //Блок функций четырнадцатого задания
    void matrix_1 (int *ta, int *ta_f);
    void matrix_2 (int (&p)[3][3], int (&d)[3][3]);

}

