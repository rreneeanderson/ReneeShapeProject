// Filename: Rectangle.h
// Description: Rectangle shape class. Stores a width and height
// and knows how to calculate its own area and perimeter.
// Renee Anderson
// Date: 12/10/2025

#pragma once

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape
{
public:
    // Constructor
    Rectangle(double w = 1.0, double h = 1.0);

    // Destructor
    ~Rectangle();

    // Set both width and height at once
    void setDimensions(double w, double h);

    // Accessors
    double getWidth();
    double getHeight();

    double calcArea() override;
    double calcPerimeter() override;
    void draw() override;
    void scale(double factor) override;

private:
    double m_width;
    double m_height;
};

#endif