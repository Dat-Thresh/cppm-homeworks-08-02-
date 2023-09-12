#include <iostream>
#include <string>
#include "Quadrangle.h"

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) :Figure() {
        name = "Четырехугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        if (a <= 0 || b <= 0 || c <= 0 || d <= 0) { throw FigureExceptions("должно быть 4 стороны"); }
        if ((A + B + C + D) != 360) { throw FigureExceptions("сумма углов не равна 360"); }
 }
void Quadrangle::get_info(){
    std::cout << name << " (cтороны: " << a << ", " << b << ", " << c << ", " << d <<"; ";
    std::cout << "углы: " << A << ", " << B << ", " << C << ", " << D << ") создан" << std::endl;
}