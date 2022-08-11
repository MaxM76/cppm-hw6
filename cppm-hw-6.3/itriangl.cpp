#include "itriangl.h"

IsoscelesTriangle::IsoscelesTriangle() : Triangle(0, 0, 0, 60, 60, 60) {
    name = "Равнобедренный треугольник";
}

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, a, A, B, A) {
    name = "Равнобедренный треугольник";
}

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) {
    name = "Равнобедренный треугольник";
}