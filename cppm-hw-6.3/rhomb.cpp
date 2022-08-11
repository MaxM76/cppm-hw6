#include "rhomb.h"

Rhomb::Rhomb() : Parallelogram() {
    name = "Ромб";
}

Rhomb::Rhomb(int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogram(a, a, A, B) {
    name = "Ромб";
}

Rhomb::Rhomb(int a, int A, int B) : Parallelogram(a, a, A, B) {
    name = "Ромб";
}