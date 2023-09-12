#include "Quadrangle_all_corners_90.h"


Quadrangle_all_corners_90::Quadrangle_all_corners_90(int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogramm(a, b, c, d, A, B, C, D) {
    
    name = "Прямоугольник";
    if (A != 90 || B != 90 || C != 90 || D != 90) {
        throw FigureExceptions("все углы должны быть равны 90");
    }
};