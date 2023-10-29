#include "GeometricError.h"
#include "IsoscelesTriangle.h"



IsoscelesTriangle::IsoscelesTriangle(double sideA, double sideB, double sideC, double angle1, double angle2, double angle3) {
    if (sideA <= 0 || sideB <= 0 || sideC <= 0) {
        throw GeometricError("стороны треугольника должны быть положительными числами");
    }
    if (sideA != sideC && angle1 != angle3) {
        throw GeometricError("стороны А и С должны быть равны. Углы А и С должны быть равны.");
    }

}