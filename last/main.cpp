#include <iostream>
#include "Vector2.h"

int main (){
    Vector2 a(1.0, 2.0);
    Vector2 b(2.0, 3.0);
    //проверка равенства
    auto t=a==b;
    std::cout << t << std::endl;

    //проверка неравенства
    auto f=a!=b;
    std::cout << f << std::endl;

    //угол в градусах
    std::cout << "Phi=" << a.getPhideg() << std::endl;

    //вычитание векторов
    auto c = a-b;
    std::cout << "X="<< c.x << " Y="<< c.y << std::endl;
    a-=b;
    std::cout << "X="<< a.x << " Y="<< a.y << std::endl;

    //умножение вектора на число
    auto d=a*10;
    std::cout << "X="<< d.x << " Y="<< d.y << std::endl;
    a*=10;
    std::cout << "X="<< a.x << " Y="<< a.y << std::endl;

    //деление вектора на число
    d=a/10;
    std::cout << "X="<< d.x << " Y="<< d.y << std::endl;
    a/=10;
    std::cout << "X="<< a.x << " Y="<< a.y << std::endl;

    //скалярное умножение
    std::cout << "Scalar=" << a*b << std::endl;

    //косинусное расстояние
    t=a&b;
    std::cout << "CosDist="<< t << std::endl;

    //кососкалярное
    std::cout << "OblScalar=" << a%b << std::endl;

    //нормализация
    a.getNorm();
    std::cout << "X="<< a.x << " Y="<< a.y << std::endl;

    //перевод в ПСК
    a.getPSK();
    std::cout << "L="<< a.x << " Phi="<< a.y << std::endl;
    a.x = -1;
    a.y = -1;
    a.ChangeR(10);
    std::cout << "L="<< a.x << " Phi="<< a.y << std::endl;
    a.x = -1;
    a.y = -1;
    a.ChangePhi(10);
    std::cout << "L="<< a.x << " Phi="<< a.y << std::endl;




    return 0;
}



