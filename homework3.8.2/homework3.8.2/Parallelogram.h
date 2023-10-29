#pragma once
#include "GeometricError.h"



class Parallelogram {
public:
    Parallelogram(double sideA, double sideB, double sideC, double sideD, double angle1, double angle2, double angle3, double angle4);

private:
    double sideA;
    double sideB;
    double sideC;
    double sideD;
    double angle1;
    double angle2;
    double angle3;
    double angle4;
};