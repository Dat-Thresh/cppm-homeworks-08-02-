#include "Square.h"


Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrangle_all_corners_90(a,b,c,d,A,B,C,D) {
    name = "�������";
    if (a != b || c != d) { throw("��� ������� ������ ���� ���������"); }
};