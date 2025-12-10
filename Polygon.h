// Filename: Polygon.h
// Description: Regular polygon class. Uses a number of sides
// and a side length to calculate area and perimeter.
// Renee Anderson
// Date: 12/10/2025

#pragma once

#ifndef POLYGON_H
#define POLYGON_H

#include "Shape.h"

class Polygon : public Shape
{
public:
    // Constructor
    Polygon(int sides = 3, double sideLength = 1.0);

    // Destructor
    ~Polygon();

    // Set both values at once
    void set(int sides, double sideLength);

    // Accessors
    int getSides();
    double getSideLength();

    double calcArea() override;
    double calcPerimeter() override;
    void draw() override;
    void scale(double factor) override;

private:
    int m_sides;
    double m_sideLength;
};

#endif