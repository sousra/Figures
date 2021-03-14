#include "headers.h"

Parallelogram::Parallelogram(double a, double b, float angle) {
    name = "parallelogram";
    this->a = a;
    this->b = b;
    this->angle = angle;
};

double Parallelogram::calculateS() const {
    return sin(angle * M_PI / 180) * a * b;
}

double Parallelogram::calculateP() const {
    return 2 * (a + b);
}


Rectangle::Rectangle(double a, double b) : Parallelogram(a, b, 90) {
    name = "rectangle";
}


Square::Square(double a) : Rectangle(a, a) {
    name = "square";
}
