#include "GeometricError.h"
#include "RightTriangle.h"



RightTriangle::RightTriangle(double sideA, double sideB, double sideC, double angle1, double angle2, double angle3) {
    if (sideA <= 0 || sideB <= 0 || sideC <= 0) {
        throw GeometricError("������� ������������ ������ ���� �������������� �������");
    }
    if (angle3 != 90) {
        throw GeometricError("���� � ������ ���� ����� 90");
    }

}