#pragma once

class Counter {
private:
    int counts;
public:
    Counter();
    Counter(int initialValue);
    void decrease();
    void increase();
    int getCounts();
};