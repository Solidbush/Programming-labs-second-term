//
// Created by Volirvag on 13.03.2022.
//

#ifndef LAB5_FUN_H
#define LAB5_FUN_H

using namespace std;
namespace fun {
    template<class T>
    T min(T &a, T &b) {
        if (a >= b) return a;
        else
            return b;
    }

    template<class T, int N>
    class FIFO {
    private:
        struct Node {
            T data;
            Node *next;
        };
        struct Queue {
            int size;
            int max_size = N - 1;
            Node *first;
            Node *last;
        };
        Queue Q;
    public:
        FIFO() {
            Q.first = new Node;
            Q.first->next = NULL;
            Q.last = Q.first;
            Q.size = 0;
        };

        bool Add(T value) {
            try {
                if (Q.size == Q.max_size)
                    throw 1;
                Q.last->next = new Node;
                Q.last = Q.last->next;
                Q.last->data = value;
                Q.last->next = NULL;
                Q.size++;
                return true;
            }
            catch (int e)
            {
                if (e == 1)
                {
                }
            }

        };

        bool Delete() {
            try {
                if (Q.size == 0)
                    throw 2;
                Q.first = Q.first->next;
                Q.size--;
                return true;
            }
            catch (int e)
            {
                if (e == 2)
                {
                }
            }

        };

        T Top() {
            try {
                if (Q.size == 0)
                    throw 2;
                return Q.first->next->data;
            }
            catch (int e)
            {
                if (e == 2)
                {
                }
            }
        };
    };
}

#endif //LAB5_FUN_H
