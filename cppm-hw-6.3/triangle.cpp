#include "triangle.h"

std::string Triangle::getAnglesInfo() {
    return Figure::getAnglesInfo() 
        + "A = " + std::to_string(getA()) 
        + " B = " + std::to_string(getB()) 
        + " C = " + std::to_string(getC());
}

std::string Triangle::getSidesInfo() {
    return Figure::getSidesInfo() 
        + "a = " + std::to_string(geta()) 
        + " b = " + std::to_string(getb()) 
        + " c = " + std::to_string(getc());
}

Triangle::Triangle() {
    this->a = 0;
    this->b = 0;
    this->c = 0;
    this->A = 60;
    this->B = 60;
    this->C = 60;
    sides = 3;
    name = "Треугольник";
}

Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    sides = 3;
    name = "Треугольник";
}

int Triangle::geta() {
    return a;
}

int Triangle::getb() {
    return b;
}

int Triangle::getc() {
    return c;
}

int Triangle::getA() {
    return A;
}

int Triangle::getB() {
    return B;
}

int Triangle::getC() {
    return C;
}