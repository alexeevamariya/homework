//
// Created by 1 on 01.12.2022.
//

#ifndef HELLO_WORLD_VECTOR2_H
#define HELLO_WORLD_VECTOR2_H


class Vector2 {
public:
    double x, y;

    Vector2();
    Vector2(double _x, double _y);

    double getLen();
    double getScalar();

    void setX(double _x);
    double getX();
    void setY(double _y);
    double getY();

    double getPhi();
    Vector2 operator+(const Vector2& vector) const;
    Vector2 operator*(const double & a) const;
    Vector2 operator*=(const double & a);

    double getPhideg();
    Vector2 getNorm();
    Vector2 getPSK();
    Vector2 operator-(const Vector2& vector) const;
    bool operator==(const Vector2& vector) const;
    bool operator!=(const Vector2& vector) const;
    Vector2 operator-=(const Vector2& vector);
    Vector2 operator/(const double& a) const;
    Vector2 operator/=(const double& a);
    double operator*(const Vector2& vector) const;
    double operator%(const Vector2& vector) const;
    Vector2 ChangeR(double a);
    double operator&(const Vector2 &vector) const;

    Vector2 ChangePhi(double a);
};


#endif //HELLO_WORLD_VECTOR2_H