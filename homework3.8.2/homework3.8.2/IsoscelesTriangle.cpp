#include "GeometricError.h"
#include "IsoscelesTriangle.h"



IsoscelesTriangle::IsoscelesTriangle(double sideA, double sideB, double sideC, double angle1, double angle2, double angle3) {
    if (sideA <= 0 || sideB <= 0 || sideC <= 0) {
        throw GeometricError("������� ������������ ������ ���� �������������� �������");
    }
    if (sideA != sideC && angle1 != angle3) {
        throw GeometricError("������� � � � ������ ���� �����. ���� � � � ������ ���� �����.");
    }

}