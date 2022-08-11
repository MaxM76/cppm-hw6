#pragma once

#include <string>

class Figure {
protected:
    int sides;
    std::string name;
    virtual std::string getAnglesInfo();
    virtual std::string getSidesInfo();
public:
    Figure();
    int getSides();
    std::string getName();
    std::string getInfo();
};