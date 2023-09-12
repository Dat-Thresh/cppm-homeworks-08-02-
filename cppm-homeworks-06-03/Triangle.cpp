
#include "Triangle.h"
#include <iostream>
#include <string>
//�����������
Triangle::Triangle(int a, int b, int c, int A, int B, int C) :Figure() {
    name = "�����������";
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    if (a <= 0 || b <= 0 || c <= 0) { throw FigureExceptions("������ ���� 3 �������"); }
    if ((A + B + C) != 180) { throw FigureExceptions("����� ����� �� ����� 180"); }
};

void Triangle::get_info() {
    std::cout << name << " (c������: " << a << ", " << b << ", " << c <<"; ";
    std::cout << "����: " << A << ", " << B << ", " << C <<") ������" << std::endl;
}
