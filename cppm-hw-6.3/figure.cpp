#include "figure.h"

std::string Figure::getAnglesInfo() {
        return "Углы: ";
}

std::string Figure::getSidesInfo() {
    return "Стороны: ";
}

Figure::Figure() {
    sides = 0;
    name = "Фигура";
}

int Figure::getSides() {
    return sides;
}

std::string Figure::getName() {
    return name;
}

std::string Figure::getInfo() {
    return name + "\n" + getSidesInfo() + "\n" + getAnglesInfo() + "\n";
}