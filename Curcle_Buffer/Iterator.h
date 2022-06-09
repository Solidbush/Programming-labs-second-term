//
// Created by Volirvag on 19.05.2022.
//

#ifndef CURCLE_BUFFER_ITERATOR_H
#define CURCLE_BUFFER_ITERATOR_H
//template<class T>
class Iterator : public std::iterator<std::random_access_iterator_tag, T>{
private:
    T *p;
public:

    Iterator()=default;

    explicit Iterator(T *temp) {
        p = temp;
    }
    Iterator(const Iterator<T> &iterator): p(iterator.p){}

//    explicit Iterator(T p) : p(p) {}

    ~Iterator() = default;

    T get_value() const {
        return p;
    }

    Iterator operator+(int n){
        Iterator<T> tmp = *this;
        tmp += n;
        return tmp;
    }

    Iterator &operator+=(int n){
        p += n;
        return *this;
    }

    Iterator operator-(int n){
        Iterator tmp = *this;
        tmp -= n;
        return tmp;
    }

    Iterator &operator-=(int n){
        p -=n;
        return *this;
    }

    T operator-(Iterator<T> &other){
        return this->p - other.p;
    }

    T operator+(Iterator<T> &other){
        return this->p + other.p;
    }
//    T &operator++(int){
//        return *p++;
//    }
//
//    T &operator--(int){
//        return *p--;
//    }
//
//    T &operator++(){
//        return *++p;
//    }
//
//    T &operator--(){
//        return *--p;
//    }
    Iterator &operator++(){
        p++;
        return *this;
    }

    Iterator operator++(int){
        Iterator tmp = *this;
        p++;
        return  tmp;
    }

    Iterator operator--(int){
        Iterator tmp = *this;
        p--;
        return tmp;
    }

    Iterator &operator--(){
        p--;
        return *this;
    }

    bool operator==(const Iterator<T> &other){
        return p == other.p;
    }

    bool operator!=(const Iterator<T> &other){
        return p != other.p;
    }

    T &operator *() const{
        return *p;
    }

    T *operator->(){
        return p;
    }

//    T &operator[](Iterator temp){
//        return *temp;
//    }

    bool operator<(Iterator other){
        return this->p < other.p;
    }

    bool operator>(Iterator other){
        return this->p > other.p;
    }

    bool operator<=(Iterator other){
        return this->p <= other.p;
    }

    bool operator>=(Iterator other){
        return this->p >= other.p;
    }
};
#endif //CURCLE_BUFFER_ITERATOR_H
