#pragma once

#include "headers.h"

class Ellipse : public Figure {
public:
    Ellipse(double a, double b);
    double calculateS() const override;
    double calculateP() const override;

protected:
    double a, b;
};


class Circle : public Ellipse {
public:
    Circle(double r);
};
