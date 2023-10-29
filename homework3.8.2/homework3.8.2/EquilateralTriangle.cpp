#include "GeometricError.h"
#include "EquilateralTriangle.h"



EquilateralTriangle::EquilateralTriangle(double sideA, double sideB, double sideC, double angle1, double angle2, double angle3) {
    if (sideA <= 0 || sideB <= 0 || sideC <= 0) {
        throw GeometricError("стороны треугольника должны быть положительными числами");
    }
    if (sideA != sideB || sideA != sideC || sideB != sideC || angle1 != 60 || angle2 != 60 || angle3 != 60 ) {
        throw GeometricError("все стороны должны быть равны, углы равны 60");
    }

}