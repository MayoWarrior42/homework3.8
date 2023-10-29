#pragma once
#include "GeometricError.h"



class Triangle {
public:
    Triangle(double sideA, double sideB, double sideC, double angle1, double angle2, double angle3);

private:
    double sideA;
    double sideB;
    double sideC;
    double angle1;
    double angle2;
    double angle3;
};