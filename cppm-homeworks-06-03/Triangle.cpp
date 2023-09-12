
#include "Triangle.h"
#include <iostream>
#include <string>
//конструктор
Triangle::Triangle(int a, int b, int c, int A, int B, int C) :Figure() {
    name = "Треугольник";
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    if (a <= 0 || b <= 0 || c <= 0) { throw FigureExceptions("должно быть 3 стороны"); }
    if ((A + B + C) != 180) { throw FigureExceptions("сумма углов не равна 180"); }
};

void Triangle::get_info() {
    std::cout << name << " (cтороны: " << a << ", " << b << ", " << c <<"; ";
    std::cout << "углы: " << A << ", " << B << ", " << C <<") создан" << std::endl;
}
