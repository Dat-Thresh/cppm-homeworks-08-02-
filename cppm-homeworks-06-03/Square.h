#pragma once
#include "Quadrangle_all_corners_90.h"

class Square :public Quadrangle_all_corners_90 {
public:
    Square(int a, int b, int c, int d, int A, int B, int C, int D);// : Quadrangle_all_corners_90(a, a) {};
};
