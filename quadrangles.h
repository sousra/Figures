#pragma once

#include "headers.h"

class Parallelogram : public Figure {
public:
    Parallelogram(double a, double b, float angle);
    double calculateS() const override;
    double calculateP() const override;

protected:
    double a, b;
    float angle;
};


class Rectangle : public Parallelogram {
public:
    Rectangle(double a, double b);
};


class Square : public Rectangle {
public:
    Square(double a);
};
