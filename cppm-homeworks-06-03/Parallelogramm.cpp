#include "Parallelogramm.h"


Parallelogramm::Parallelogramm(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
    name = "��������������";
    if (a != c || b != d) { throw FigureExceptions("a, � � b, d ������ ���� ������� �����");}
    if (A != C || B != D) { throw FigureExceptions("A, C � B, D ������ ���� ������� �����"); }
};