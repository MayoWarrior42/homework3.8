#include "GeometricError.h"
#include "Triangle.h"



Triangle::Triangle(double sideA, double sideB, double sideC, double angle1, double angle2, double angle3) {
    if (sideA <= 0 || sideB <= 0 || sideC <= 0) {
        throw GeometricError("������� ������������ ������ ���� �������������� �������");
    }
    if (angle1 + angle2 + angle3 != 180) {
        throw GeometricError("����� ����� ������ ���� ����� 180");
    }

}