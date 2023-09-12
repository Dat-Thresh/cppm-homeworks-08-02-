#include "Parallelogramm.h"


Parallelogramm::Parallelogramm(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
    name = "Параллелограмм";
    if (a != c || b != d) { throw FigureExceptions("a, с и b, d должны быть попарно равны");}
    if (A != C || B != D) { throw FigureExceptions("A, C и B, D должны быть попарно равны"); }
};