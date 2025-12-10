// Filename: Circle.h
// Description: Circle shape class. Stores a radius and knows
// how to calculate its own area and perimeter.
// Renee Anderson
// Date: 12/10/2025

#pragma once

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"


// It only needs a radius, position, and rotation is inherited.
class Circle : public Shape
{
public:
    // Default constructor
    Circle(double r = 1.0);

    // Destructor
    ~Circle();

    // Set the radius
    void setRadius(double r);

    // Accessor
    double getRadius();


    // Circle area = π * r^2
    double calcArea() override;

    // Circle perimeter = 2 * π * r
    double calcPerimeter() override;

    void draw() override;

    
    void scale(double factor) override;

private:
    double m_radius;
};

#endif