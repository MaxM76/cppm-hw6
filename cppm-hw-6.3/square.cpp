#include "square.h"

Square::Square() : Rect() {
    name = " вадрат";
}

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) : Rect(a, a) {
    name = " вадрат";
}

Square::Square(int a) : Rect(a, a) {
    name = " вадрат";
}