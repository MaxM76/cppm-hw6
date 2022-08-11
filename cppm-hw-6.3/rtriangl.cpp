#include "rtriangl.h"

RightTriangle::RightTriangle() : Triangle(0, 0, 0, 45, 45, 90) {
    name = "Прямоугольный треугольник";
}

RightTriangle::RightTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, 90) {
    name = "Прямоугольный треугольник";
}

RightTriangle::RightTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {
    name = "Прямоугольный треугольник";
}