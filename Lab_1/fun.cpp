//
// Created by Volirvag on 10.02.2022.
//
#include <iostream>
#include "fun.h"

namespace fun
{
    void swap_1(int *ta, int *tb)
    {
        int tmp = *ta;
        *ta = *tb;
        *tb = tmp;
    }

    void swap_2(int &ta, int &tb)
    {
        int tmp = ta;
        ta = tb;
        tb = tmp;
    }

    void round_1(float *ta)
    {
        if (*ta >= 0)
        {
            *ta = *ta + 0.5;
        }
        else
        {
            *ta = *ta - 0.5;
        }
        *ta = int(*ta);
    }

    void round_2(float &ta)
    {
        if (ta >= 0)
        {
            ta = ta + 0.5;
        }
        else
        {
            ta = ta - 0.5;
        }
        ta = int(ta);
    }

    void comp_1(Complex *tcomp, float *k)
    {
        tcomp->real = (tcomp->real)*(*k);
        tcomp->image = (tcomp->image)*(*k);
    }

    void comp_2(Complex &tcomp, float &k)
    {
        tcomp.real = (tcomp.real)*(k);
        tcomp.image = (tcomp.image)*(k);
    }

    void matrix_1(int *ta, int *ta_f)
    {
        for (int i = 0; i < 3; i++){
            for (int j = 2; j >= 0; j--){
                ta_f[i * 3 + j] = ta[j * 3 + i];
            }
        }
    }

    void matrix_2 (int (&tary)[3][3], int (&tary_free)[3][3])
    {
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                tary_free[i][j] = tary[j][i];
            }
        }
    }
}