
#include "Triangle_C_90.h"

Triangle_C_90::Triangle_C_90(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C) {
	name = "Прямоугольный треугольник";
	if (C != 90) {
		throw FigureExceptions("угол С не равен 90");
	}
};
