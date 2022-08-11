#include "rectangl.h"

Rect::Rect() : Parallelogram() {
    name = "Прямоугольник";
}

Rect::Rect(int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogram(a, b, 90, 90) {
    name = "Прямоугольник";
}

Rect::Rect(int a, int b) : Parallelogram(a, b, 90, 90) {
    name = "Прямоугольник";
}