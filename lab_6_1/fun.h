//
// Created by Volirvag on 23.04.2022.
//

#ifndef LAB_6_1_FUN_H
#define LAB_6_1_FUN_H
using namespace std;
template<class T>
struct CPoint{
public:
    T x = 0;
    T y = 0;
    CPoint(){
        x = 0;
        y = 0;
    };

    CPoint(T &a, T &b){
        x = a;
        y = b;
    }
    ~CPoint(){
        //delete x;
        //delete y;
    };
    bool operator !=(CPoint<T> temp)
    {
        return ((x != temp.x) || (y != temp.y));
    }
    bool operator ==(CPoint<T> temp)
    {
        return ((x == temp.x) && (y == temp.y));
    }
    CPoint<T> &operator = (CPoint<T> temp){
        x = temp.x;
        y = temp.y;
        return *this;
    }

};

template<class T, class Predicate>
bool all_off(T &obj, Predicate &predicate){
    typename T::const_iterator it = obj.begin();

    while (it != obj.end()){
        if (predicate == *it)
            return false;
        it++;
    }
    return true;
}

template<class Iter, class Predicate>
bool is_partitioned(Iter begin, Iter end, Predicate predicate){
    auto it = begin;
    Predicate temp;
    int count = 0;
    while (it != end){
        if (predicate == *it){
            temp = *it;
            count++;
        }
        it++;
    }
    if (count != 1)
        return false;

    while (it != end){
        if (temp == *it)
            count--;
        if ((temp == *it) && (count < 1)){
            return false;
        }
        it++;
    }
    return true;
}

template<class T, class Predicate>
bool is_partitioned(T &obj, Predicate &predicate){
    typename T::const_iterator it = obj.begin();
    Predicate temp;
    int count = 0;
    while (it != obj.end()){
        if (predicate == *it){
            temp = *it;
            count++;
        }
        it++;
    }
    if (count != 1)
        return false;

    while (it != obj.end()){
        if (temp == *it)
            count--;
        if ((temp == *it) && (count < 1)){
            return false;
        }
        it++;
    }
    return true;
}

template<class T, class Predicate>
int find_backward(T &obj, Predicate &predicate){
    int count = 0;
    for (typename T::reverse_iterator it = obj.rbegin(); it !=obj.rend(); it++){
        if (predicate == *it){
            return count;
        }
        else
            count++;
    }
    return -1;
}

void Print(bool temp);
#endif //LAB_6_1_FUN_H
