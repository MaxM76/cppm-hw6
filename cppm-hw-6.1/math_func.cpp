#include "math_func.h"

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

double power(int a, int b) {
    if (b == 0) {
        return 1;
    }
    double result = 1;
    int flag = 1;
    if (b < 0) {
        flag = -1;
        b = -b;
    }
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    if (flag < 0) {
        result = 1. / result;
    }
    return result;
}