#pragma once

#include "headers.h"

using namespace std;

class Figure {
public:
    Figure() = default;
    virtual ~Figure() = default;
    virtual double calculateS() const = 0;
    virtual double calculateP() const = 0;
    string getName() const;

protected:
    string name;
};


