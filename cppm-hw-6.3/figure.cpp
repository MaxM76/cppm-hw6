#include "figure.h"

std::string Figure::getAnglesInfo() {
        return "����: ";
}

std::string Figure::getSidesInfo() {
    return "�������: ";
}

Figure::Figure() {
    sides = 0;
    name = "������";
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