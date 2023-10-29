#include "GeometricError.h"
#include "Rhombus.h"


Rhombus::Rhombus(double sideA, double sideB, double sideC, double sideD, double angle1, double angle2, double angle3, double angle4) {
    if (sideA <= 0 || sideB <= 0 || sideC <= 0 || sideD <= 0) {
        throw GeometricError("стороны прямоугольника должны быть положительными числами");
    }
    if (angle1 != angle3 || angle2 != angle4) {
        throw GeometricError("углы А и С, и углы В и D должны быть попарно равны");
    }

    if (sideA != sideC || sideA != sideB || sideA != sideD || sideB != sideC || sideB != sideD || sideC != sideD) {
        throw GeometricError("все стороны должны быть равны");
    }

}