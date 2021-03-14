#include "headers.h"

Ellipse::Ellipse(double a, double b) {
    name = "ellips";
    this->a = a;
    this->b = b;
}


double Ellipse::calculateS() const {
    return M_PI * a * b;
}

double Ellipse::calculateP() const {
    return 4 * (M_PI * a * b + fabs(a - b)) / (a + b);
}


Circle::Circle(double r) : Ellipse(r, r) {
    name = "circle";
}
