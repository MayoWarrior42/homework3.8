#include "GeometricError.h"
#include "Quadrilateral.h"



Quadrilateral::Quadrilateral(double sideA, double sideB, double sideC, double sideD, double angle1, double angle2, double angle3, double angle4) {
    if (sideA <= 0 || sideB <= 0 || sideC <= 0 || sideD <=0) {
        throw GeometricError("������� �������������� ������ ���� �������������� �������");
    }
    if (angle1 + angle2 + angle3 + angle4 != 360) {
        throw GeometricError("����� ����� ������ ���� ����� 360");
    }

}