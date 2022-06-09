//
// Created by Volirvag on 25.02.2022.
//

#ifndef LAB_3_FUN_H
#define LAB_3_FUN_H

namespace fun
{
    class Matrix{
    private:
        int size_h = 3;
        int size_l = 3;
        int **matrix;

    public:
        Matrix();
        ~Matrix();
        Matrix(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
        Matrix(const Matrix &temp);
        void multiply_count(int value);
        void print_matrix();
        friend bool operator == (struct Matrix &a, struct  Matrix &b);
        friend bool operator != (class Matrix &a, class  Matrix &b);
        friend bool operator > (struct Matrix &a, struct Matrix &b);
        friend bool operator < (struct Matrix &a, struct Matrix &b);
        friend Matrix operator * (struct Matrix &a, struct Matrix &b);
        friend Matrix operator + (struct Matrix &a, struct Matrix &b);
        friend Matrix operator - (struct Matrix &a, struct Matrix &b);

    };

    class FIFO
    {
    private:
        struct Node
        {
            int data;
            Node *next;
        };
        struct Queue{
            int size;
            Node *first;
            Node *last;
        };
        Queue Q;
    public:
        FIFO();
        void Add(int value);
        void Delete();
        int Top();
        friend void operator << (struct FIFO &A, int &value);
        friend void operator >> (struct FIFO &A, int &value);
    };


};
#endif //LAB_3_FUN_H
