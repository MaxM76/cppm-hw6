#include <iostream>
#include <Windows.h>
#include <string>
#include "figures.h"

void print_info(Figure& figure) {
    std::cout << figure.getInfo() << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure figure;
    
    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle rightTriangle(10, 20, 30, 50, 60, 70);
    IsoscelesTriangle isoscelesTriangle(10, 20, 30, 50, 60, 70);
    EquilateralTriangle equilateralTriangle(10, 20, 30, 50, 60, 70);
    
    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    Parallelogram parallelogram(10, 20, 30, 40, 50, 60, 70, 80);
    Rhomb rhomb(10, 20, 30, 40, 50, 60, 70, 80);
    Square square(10, 20, 30, 40, 50, 60, 70, 80);
    Rect rectangle(10, 20, 30, 40, 50, 60, 70, 80);
    

    print_info(figure);
    
    print_info(triangle);
    print_info(rightTriangle);
    print_info(isoscelesTriangle);
    print_info(equilateralTriangle);
    
    print_info(quadrilateral);
    print_info(parallelogram);
    print_info(rhomb);
    print_info(square);
    print_info(rectangle);    
}