#include "counter.h"

Counter::Counter() {
    counts = 1;
};

Counter::Counter(int initialValue) {
    counts = initialValue;
}

void Counter::decrease() {
    counts--;
}

void Counter::increase() {
    counts++;
}

int Counter::getCounts() {
    return counts;
}