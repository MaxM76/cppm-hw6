#include "paralgrm.h"

Parallelogram::Parallelogram() : Quadrilateral() {
    name = "ֿאנאככוכמדנאלל";
}

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, a, b, A, B, A, B) {
    name = "ֿאנאככוכמדנאלל";
}

Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadrilateral(a, b, a, b, A, B, A, B) {
    name = "ֿאנאככוכמדנאלל";
}