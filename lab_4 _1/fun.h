//fun.h
// Created by Volirvag on 09.04.2022.
//

#ifndef LAB_4_FUN_H
#define LAB_4_FUN_H
#include <string>
using namespace std;
namespace fun{
    class IGeoFig{
    public:
        // Периметр.
        virtual double perimeter() = 0 ;
// Площадь.
        virtual double square() = 0 ;
    };

// Интерфейс "Отображаемый"
    class IPrintable{
    public:
// Отобразить на экране
// (выводить в текстовом виде параметры фигуры).
        virtual void draw() = 0 ;
    };
    // Интерфейс "Класс"
    class BaseCObject{
    public:
// Имя класса (типа данных).
        virtual string classname() = 0;
// Размер занимаемой памяти.
        virtual unsigned int size() = 0;
    };

    class Vector2D{
    public :
        double x, y;
    };
    class IPhysObject{
    public :
// Масса, кг.
        virtual double mass() = 0;
// Координаты центра масс, м.
        virtual Vector2D position() = 0 ;
        // Сравнение по массе.
        virtual bool operator == (IPhysObject &ob1) = 0;
// Сравнение по массе.
        virtual bool operator < (IPhysObject &ob2) = 0;
    };

// Вектор


// Интерфейс "Физический объект".




// Интерфейс для классов, которые можно задать через диалог с пользователем.
    class IDialogInitiable{
// Задать параметры объекта с помощью диалога с пользователем.
    virtual void initFromDialog () = 0 ;
    };
    class figures: public IGeoFig, public IPhysObject, public IPrintable, public IDialogInitiable, public BaseCObject{};
    class rect: public figures{
    private:
        Vector2D a, b, c, d;
        string name = "Rectangle";
        double massa = 0;
    public:
        rect();

        void initFromDialog() override;

        string classname() override;

        unsigned int size() override;

        double perimeter() override;


        double square() override;

        Vector2D position() override;

        double mass() override;

        void draw() override;


        bool operator < (IPhysObject &other) override;

        bool operator == (IPhysObject &other) override;

    };

    class ellips: public figures{
    private:
        Vector2D a1, b1, a2, b2;
        string name = "Ellips";
        double massa = 0;
    public:
        ellips();

        void initFromDialog() override;


        string classname() override;


        unsigned int size() override;

        double perimeter() override;

        double square() override;

        Vector2D position() override;

        double mass() override;

        void draw() override;

        bool operator < (IPhysObject &other) override;

        bool operator == (IPhysObject &other) override;
    };
    class Menu{
    private:
        int size = 0;
        int temp_size = 0;
        vector<figures*> set;
    public:
        Menu();
        Menu(int i);

        bool is_full();

        template<class T>
        bool add(){
            if (is_full()){
                set[temp_size] = new T;
                temp_size++;
                return true;
            }
            else
                return false;
        };

        void show();

        void show_per();

        void show_sqr();

        void show_mem();

        void start();

        void sort();

        void positio();

    };




}





#endif //LAB_4_FUN_H
