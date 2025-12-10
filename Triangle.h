// Filename: Triangle.h
// Description: Simple triangle class using 3 side lengths.
// Uses Heron's formula for area. Very straightforward.
// Renee Anderson
// Date: 12/10/2025

#pragma once

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape
{
public:
    // Constructor
    Triangle(double a = 3.0, double b = 4.0, double c = 5.0);

    // Destructor
    ~Triangle();

    // Set the three sides
    void setSides(double a, double b, double c);

    // Accessors
    double getA();
    double getB();
    double getC();

    double calcArea() override;
    double calcPerimeter() override;
    void draw() override;
    void scale(double factor) override;

private:
    double m_a;
    double m_b;
    double m_c;
};

#endif
