// cppm-homeworks-06-03.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Triangle_C_90.h"
#include "Triangle_bedra_ravny.h"
#include "Triangle_equal_sides.h"
#include "Quadrangle.h"
#include "Parallelogramm.h"
#include "Quadrangle_all_corners_90.h"
#include "Square.h"
#include "Romb.h"

//выводит информацию об экземпляре
void print_info(Figure* adress) {

    adress->get_info();
    //std::cout << std::endl;

}

int main()
{
    setlocale(LC_ALL, "rus");
    try {
        Triangle triangle_0(10, 20, 30, 50, 60, 70);
        print_info(&triangle_0);
    }
    catch (FigureExceptions& er) {
        std::cout << "Ошибка создания фигуры. Причина: " << er.what() << std::endl;
    }


    try {
        Romb quadrangle_4(40, 40, 40, 4, 30, 150, 30, 150);
        print_info(&quadrangle_4);
    }
    catch (FigureExceptions& er) {
        std::cout << "Ошибка создания фигуры. Причина: " << er.what() << std::endl;
    }

    /*
     Triangle_C_90 triangle_1(10, 20, 30, 50, 60,70);
    Triangle_bedra_ravny triangle_2(10, 20, 30, 50, 80, 50);
    Triangle_all_sides_equal triangle_3(30,50,30,50,60,70);
    Quadrangle quadrangle_0(10, 20, 30, 40, 50, 60, 70, 80);
    Quadrangle_all_corners_90 quadrangle_1(10, 20, 10, 20, 50,130,50,130);
    Square quadrangle_2(20,20,20,20,130,50,130,50);
    Parallelogramm quadrangle_3(20, 30, 20, 30, 80, 100, 80, 100);
    

    Figure** arr_ptr = new Figure * [9];
    arr_ptr[0] = &triangle_0;
    arr_ptr[1] = &triangle_1;
    arr_ptr[2] = &triangle_2;
    arr_ptr[3] = &triangle_3;
    arr_ptr[4] = &quadrangle_0;
    arr_ptr[5] = &quadrangle_1;
    arr_ptr[6] = &quadrangle_2;
    arr_ptr[7] = &quadrangle_3;
    arr_ptr[8] = &quadrangle_4;

    for (int i = 0; i < 9; i++) {
        print_info(arr_ptr[i]);
    }
    delete[]arr_ptr;*/
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
