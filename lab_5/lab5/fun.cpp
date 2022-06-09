////
//// Created by Volirvag on 13.03.2022.
////
//#include <iostream>
//#include "fun.h"
//
//using namespace std;
//
//namespace fun{
//    template <class T>
//    T min(T&a, T&b){
//        if (a >= b) return a;
//        else
//            return b;
//    }
//
//    template <class T, int N>
//    FIFO<T, N>::FIFO() {
//        Q.first = new Node;
//        Q.first->next = NULL;
//        Q.last = Q.first;
//        Q.size = 0;
//    }
//
//    template <class T, int N>
//    void FIFO<T, N>::Add(T value) {
//        {
//            Q.last->next = new Node;
//            Q.last = Q.last->next;
//            Q.last->data = value;
//            Q.last->next = NULL;
//            Q.size++;
//        }
//    }
//
//    template <class T, int N>
//    void FIFO<T, N>::Delete() {
//        Q.first=Q.first->next;
//        Q.size--;
//    }
//
//    template <class T, int N>
//    T  FIFO<T, N>::Top() {
//        return Q.first->next->data;
//    }
//}
//
