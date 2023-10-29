#include "GeometricError.h"
#include "Square.h"


Square::Square(double sideA, double sideB, double sideC, double sideD, double angle1, double angle2, double angle3, double angle4) {
    if (sideA <= 0 || sideB <= 0 || sideC <= 0 || sideD <= 0) {
        throw GeometricError("стороны прямоугольника должны быть положительными числами");
    }
    if (angle1 != 90 || angle2 != 90 || angle3 != 90 || angle4 != 90) {
        throw GeometricError("углы должны быть равны 90");
    }

    if (sideA != sideC || sideA != sideB || sideA != sideD || sideB != sideC || sideB != sideD || sideC != sideD) {
        throw GeometricError("все стороны должны быть равны");
    }

}