// Filename: Square.h
// Description: Square shape class. A special type of rectangle
// where all four sides are the same length.
// Renee Anderson
// Date: 12/10/2025

#pragma once

#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle
{
public:
    // Constructor
    Square(double side = 1.0);

    // Destructor
    ~Square();

    // Set one value since all sides are equal
    void setSide(double side);

    // Accessor
    double getSide();

    double calcArea() override;
    double calcPerimeter() override;
    void draw() override;
    void scale(double factor) override;

private:
    double m_side;
};

#endif