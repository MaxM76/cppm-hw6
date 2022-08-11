#include "etriangl.h"

EquilateralTriangle::EquilateralTriangle() : IsoscelesTriangle() {
    name = "�������������� �����������";
}

EquilateralTriangle::EquilateralTriangle(int a, int b, int c, int A, int B, int C) : IsoscelesTriangle(a, a, 60, 60) {
    name = "�������������� �����������";
}

EquilateralTriangle::EquilateralTriangle(int a) : IsoscelesTriangle(a, a, 60, 60) {
    name = "�������������� �����������";
}