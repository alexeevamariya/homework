#include <iostream>
#include <cmath>
#include "Vector2.h"

Vector2::Vector2(): x(0.0), y (0.0) {};
Vector2::Vector2(double _x, double _y): x(_x), y (_y) {};

void Vector2::setX(double _x){
    x = _x;
}
void Vector2::setY(double _y){
    y = _y;
}

double Vector2::getX(){
    return x;
}
double Vector2::getY(){
    return y;
}

double Vector2::getLen(){
    return std::sqrt(x*x + y*y);
}


double Vector2::getPhi(){
    return std::atan2(y, x);
}

Vector2 Vector2::operator+(const Vector2& vector) const{
    return Vector2(x + vector.x, y + vector.y);
}

Vector2 Vector2::operator*(const double& a) const{
    return Vector2(x * a, y * a);
}
Vector2 Vector2::operator/(const double& a) const{
    return Vector2(x / a, y / a);
}
double Vector2::getPhideg(){
    return std::atan2(y, x)*180/3.14;
}

Vector2 Vector2::operator-(const Vector2& vector) const{
    return Vector2(x - vector.x, y - vector.y);
}
Vector2 Vector2::operator-=(const Vector2& vector) {
    return Vector2(x -= vector.x, y -= vector.y);
}

Vector2 Vector2::operator*=(const double &a) {
    return Vector2(x *= a, y *= a);
}

Vector2 Vector2::operator/=(const double &a) {
    return Vector2(x /= a, y /= a);
}

bool Vector2::operator==(const Vector2 &vector) const {
    return (x==vector.x & y==vector.y);
}
bool Vector2::operator!=(const Vector2 &vector) const {
    return (x!=vector.x & y!=vector.y);
}
double Vector2::operator*(const Vector2 &vector) const {
    return (x*vector.x +y*vector.y);
}
double Vector2::operator%(const Vector2 &vector) const {
    return (x*vector.y-y*vector.x);
}
double Vector2::operator&(const Vector2 &vector) const {
    return ((x*vector.x+y*vector.y)/((x*x+y*y)*(vector.x*vector.x+vector.y*vector.y)));
}

Vector2 Vector2::getNorm() {
    auto len = getLen();
    return Vector2(x = x/len,y = y/len);
}

Vector2 Vector2::getPSK() {
    auto phi = getPhideg();
    auto r = getLen();
    return Vector2(y=phi,x=r);
}
Vector2 Vector2::ChangeR(double a) {
    auto phi = getPhideg();
    auto r = getLen();
    return Vector2(x=a*r,y=phi);
}
Vector2 Vector2::ChangePhi(double a) {
    auto phi = getPhideg();
    auto r = getLen();
    return Vector2(x=r,y=a*phi);
}

