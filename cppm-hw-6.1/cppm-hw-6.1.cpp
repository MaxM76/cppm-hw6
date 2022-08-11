#include <iostream>
#include <Windows.h>
#include "math_func.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a;
    int b;
    int answer;

    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> answer;

    switch (answer) {
    case 1:
        std::cout << " Сумма " << a << " с " << b << " равняется " << add(a, b) << "\n";
        break;
    case 2:
        std::cout << a << " вычесть " << b << " равняется " << subtract(a, b) << "\n";
        break;
    case 3:
        std::cout << " Произведение " << a << " и " << b << " равняется " << multiply(a, b) << "\n";
        break;
    case 4:
        std::cout << a << " делить на " << b << " равняется " << divide(a, b) << "\n";
        break;
    case 5:
        std::cout << a << " в степени " << b << " равняется " << power(a, b) << "\n";
        break;
    }
}