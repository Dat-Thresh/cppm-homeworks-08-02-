#include "Romb.h"


Romb::Romb(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrangle(a, b, c, d, A, B, C, D) {
    name = "Ромб";
    if (a != b || c != d || a != d || b!=c) { throw FigureExceptions("все стороны должны быть одинаковы"); }
    if (A != C || B != D) { throw FigureExceptions("A, C и B, D должны быть попарно равны"); }
};