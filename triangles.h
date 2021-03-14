#pragma once

#include "headers.h"

class Triangle : public Figure {
public:
    Triangle(double a, double b, double c);
    double calculateP() const override;
    double calculateS() const override;

protected:
    double a, b, c;
};


class RTriangle : public Triangle {
public:
    RTriangle(double a, double b);
};


class ITriangle : public Triangle {
public:
    ITriangle(double a, double b);
};


class ETriangle : public ITriangle {
public:
    ETriangle(double a);
};
