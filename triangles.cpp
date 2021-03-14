#include "headers.h"

Triangle::Triangle(double a, double b, double c) {
    name = "Triangle";
    this->a = a;
    this->b = b;
    this->c = c;

    assert((a + b > c) && (a + c > b) && (b + c > a));
}

double Triangle::calculateP() const {
    return a + b + c;
}

double Triangle::calculateS() const {
    const double p = calculateP() / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}


RTriangle::RTriangle(double a, double b) : Triangle(a, b, sqrt(a * a + b * b)) {
    name = "right triangle";
}


ITriangle::ITriangle(double a, double b) : Triangle(a, a, b) {
    name = "isosceles triangle";
}


ETriangle::ETriangle(double a) : ITriangle(a, a) {
    name = "equilateral triangle";
}
