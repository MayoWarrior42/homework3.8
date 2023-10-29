#include <iostream>
#include "GeometricError.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

int main() {
    system("chcp 1251");
    try {
        Triangle triangle(3, 4, 5, 30, 60, 90);
        std::cout << "Треугольник создан" << std::endl;
    }
    catch (const GeometricError& error) {
        std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl;
    }

    try {
        RightTriangle righttriangle(3, 4, 5, 30, 60, 90);
        std::cout << "Прямоугольный треугольник создан" << std::endl;
    }
    catch (const GeometricError& error) {
        std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl;
    }

    try {
        IsoscelesTriangle isoscelestriangle(3, 4, 3, 30, 60, 30);
        std::cout << "Равнобедренный треугольник создан" << std::endl;
    }
    catch (const GeometricError& error) {
        std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl;
    }

    try {
        EquilateralTriangle equilateraltriangle(3, 3, 3, 60, 60, 60);
        std::cout << "Равносторонний треугольник создан" << std::endl;
    }
    catch (const GeometricError& error) {
        std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl;
    }

    try {
        Quadrilateral quadrilateral(3, 5, 3, 5, 90, 90, 90, 90);
        std::cout << "Четырехугольник создан" << std::endl;
    }
    catch (const GeometricError& error) {
        std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl;
    }

    try {
        Rectangle rectangle(3, 5, 3, 5, 90, 90, 90, 90);
        std::cout << "Прямоугольник создан" << std::endl;
    }
    catch (const GeometricError& error) {
        std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl;
    }


    try {
        Square square(5, 5, 5, 5, 90, 90, 90, 90);
        std::cout << "Квадрат создан" << std::endl;
    }
    catch (const GeometricError& error) {
        std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl;
    }

    try {
        Parallelogram parallelogram(5, 4, 5, 4, 60, 90, 60, 90);
        std::cout << "Параллелограмм создан" << std::endl;
    }
    catch (const GeometricError& error) {
        std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl;
    }

    try {
        Rhombus кhombus(5, 5, 5, 5, 60, 90, 60, 90);
        std::cout << "Ромб создан" << std::endl;
    }
    catch (const GeometricError& error) {
        std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl;
    }


    return 0;
}