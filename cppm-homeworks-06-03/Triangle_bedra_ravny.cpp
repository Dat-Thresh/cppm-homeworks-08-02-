#include "Triangle_bedra_ravny.h"


Triangle_bedra_ravny::Triangle_bedra_ravny(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
	name = "�������������� �����������";
	if (a != c) { throw FigureExceptions("������� � � � �� �����"); }
	if (A != C) { throw FigureExceptions("���� � � � �� �����"); }
}