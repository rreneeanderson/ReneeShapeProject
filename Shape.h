// Filename: Shape.h
// Description: Base class for all shapes in my final project.
// This class holds the common information every shape needs.
// Renee Anderson
// Date: 12/10/2025

#pragma once

#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape
{
public:
    // Default constructor
    Shape();

    // Virtual destructor 
    virtual ~Shape();

    // Virtual functions every shape must have
    // I made these simple on purpose so each shape can do their own thing.

    // Area of the shape
    virtual double calcArea() = 0;

    // Perimeter (or circumference) of the shape
    virtual double calcPerimeter() = 0;

    // "Draw" the shape by printing something out
    virtual void draw() = 0;

    // Move the shape to a new position
    virtual void translate(double dx, double dy);

    // Rotate the shape
    virtual void rotate(double degrees);

    // Make the shape bigger or smaller
    virtual void scale(double factor);

    
    void printBaseInfo();

protected:
    // Position of the shape 
    double m_x;
    double m_y;

    // Rotation in degrees
    double m_rotation;
};

#endif
