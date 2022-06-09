#ifndef CURCLE_BUFFER_CIRCLE_BUFFER_H
#define CURCLE_BUFFER_CIRCLE_BUFFER_H
template<class T>
class Circle_Buffer {
private:
    int copacity = 0;
    int head = 0;
    int tail = 0;
    T *buff;
public:
    Circle_Buffer(int size) {
        copacity = size;
        tail = 0;
        head = 0;
        buff = new T[copacity];
        for (int i = 0; i < copacity; i++)
            buff[i] = 0;
    }

    ~Circle_Buffer() {
        delete[] buff;
    }
    class Iterator : public std::iterator<std::random_access_iterator_tag, T>{
        T *p;
    public:

        Iterator()=default;

        explicit Iterator(T *temp) {
            p = temp;
        }
        Iterator(const Iterator &iterator): p(iterator.p){}

        ~Iterator() = default;

        Iterator operator+(int n){
            Iterator tmp = *this;
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

        T operator-(Iterator &other){
            return this->p - other.p;
        }

        T operator+(Iterator &other){
            return this->p + other.p;
        }

         Iterator &operator++(){
                p++;
                return *this;
        }

         Iterator &operator++(int){
            Iterator tmp = *this;
            p++;
            return  tmp;
        }

         Iterator &operator--(int){
            Iterator tmp = *this;
            p--;
            return tmp;
        }

         Iterator &operator--(){
            p--;
            return *this;
        }

        bool operator==(const Iterator &other){
            return p == other.p;
        }

        bool operator!=(const Iterator &other){
            return p != other.p;
        }

        T &operator *() const{
            return *p;
        }

        T *operator->(){
            return p;
        }

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
    Iterator begin(){
        return Iterator(buff);
    }

    Iterator end(){
        T *end = (copacity + buff);
        return Iterator(end);
    }

    int length() {
        return copacity;
    }

    T &operator[](int i) {
        return i < copacity ? buff[i] : buff[0];
    }

    T &operator[](Iterator i) {
        return *i;
    }

    void push_front(const T &value) {
        buff[head] = value;
        head = head + 1 >= copacity ? 0 : head + 1;
    }

    void push_back(const T &value) {
        buff[tail] = value;
        tail = tail - 1 < 0 ? copacity - 1 : tail - 1;
    }

    T back() {
        return buff[copacity - 1];
    }

    T front() {
        return buff[0];
    }

    bool pop_back() {
        if (copacity > 0) {
            T temp = buff[copacity - 1];
            buff[copacity - 1] = 0;
            head = head - 1 < 0 ? copacity - 1 : head - 1;
            return true;
        } else
            return false;
    }

    bool pop_front() {
        if (copacity > 0) {
            T temp = buff[0];
            buff[0] = 0;
            tail = tail - 1 < 0 ? 0 : tail - 1;
            return true;
        } else
            return false;
    }

    void change_copacity(int size) {
        T *new_buff = new T[size];
        for (int i = 0; i < size; i++)
            new_buff[i] = i < copacity ? buff[i] : 0;
        buff = new_buff;
        copacity = size;
    }

    void clean_buffer() {
        head = 0;
        tail = 0;
        for (int i = 0; i < copacity; i++)
            buff[i] = 0;
    }
};
#endif
