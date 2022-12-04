#include <iostream>
#include "Vector2.h"

int main (){
    Vector2 a(1.0, 2.0);
    Vector2 b(2.0, 3.0);
    //проверка равенства
    auto t=a==b;
    std::cout << "Check_equal  " << t << std::endl;

    //проверка неравенства
    auto f=a!=b;
    std::cout << "Check_uneq " << f << std::endl;

    //угол в градусах
    std::cout << "Phi=" << a.getPhideg() << std::endl;

    //вычитание векторов
    auto c = a-b;
    std::cout << "c=a-b  "<< "X="<< c.x << " Y="<< c.y << std::endl;
    a-=b;
    std::cout << "a-=b  "<< "X="<< a.x << " Y="<< a.y << std::endl;

    //умножение вектора на число
    auto d=a*10;
    std::cout<< "d=a*10  " << "X="<< d.x << " Y="<< d.y << std::endl;
    a*=10;
    std::cout<< "a*=10  " << "X="<< a.x << " Y="<< a.y << std::endl;

    //деление вектора на число
    d=a/10;
    std::cout<< "d=a/10  " << "X="<< d.x << " Y="<< d.y << std::endl;
    a/=10;
    std::cout << "a/=10  "<< "X="<< a.x << " Y="<< a.y << std::endl;

    //скалярное умножение
    std::cout << "Scalar=" << a*b << std::endl;

    //косинусное расстояние
    t=a&b;
    std::cout << "CosDist="<< t << std::endl;

    //кососкалярное
    std::cout << "OblScalar=" << a%b << std::endl;

    //нормализация
    a.getNorm();
    std::cout <<"a.getNorm  "<< "X="<< a.x << " Y="<< a.y << std::endl;

    //перевод в ПСК
    a.getPSK();
    std::cout << "a.getPSK " << "L="<< a.x << " Phi="<< a.y << std::endl;
    a.x = -1;
    a.y = -1;
    a.ChangeR(10);
    std::cout << "a.ChangeR  " << "L="<< a.x << " Phi="<< a.y << std::endl;
    a.x = -1;
    a.y = -1;
    a.ChangePhi(10);
    std::cout << "a.ChangePhi  "<< "L="<< a.x << " Phi="<< a.y << std::endl;




    return 0;
}



