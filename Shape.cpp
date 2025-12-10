// Filename: Shape.cpp
// Description: Base class function definitions.
// Just handling simple things that every shape should share.
// Renee Anderson
// Date: 12/10/2025

#include <iostream>
using namespace std;

#include "Shape.h"

Shape::Shape()
{
    // Starting the shape at (0,0) with no rotation.
    m_x = 0.0;
    m_y = 0.0;
    m_rotation = 0.0;

    
}

Shape::~Shape()
{
    // cout << "Shape destroyed." << endl;
}

void Shape::translate(double dx, double dy)
{
    // Move the shape by changing its x and y values.
    m_x += dx;
    m_y += dy;
}

void Shape::rotate(double degrees)
{
    // Rotate shape by adding to the angle.
    m_rotation += degrees;
}

void Shape::scale(double factor)
{
    
    cout << "Scaling shape by factor " << factor << " (child class will handle real scaling)." << endl;
}

void Shape::printBaseInfo()
{
    cout << "Position: (" << m_x << ", " << m_y << ")" << endl;
    cout << "Rotation: " << m_rotation << " degrees" << endl;
}