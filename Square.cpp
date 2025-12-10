// Filename: Square.cpp
// Description: Function definitions for the Square class.
// A square is just a rectangle with all sides equal.
// Renee Anderson
// Date: 12/10/2025

#include <iostream>
using namespace std;

#include "Square.h"

Square::Square(double side)
    : Rectangle(side, side) // Call Rectangle constructor for width and height
{
    if (side > 0)
        m_side = side;
    else
        m_side = 1.0;
}

Square::~Square()
{
    
    // cout << "Square destroyed." << endl;
}

void Square::setSide(double side)
{
    if (side > 0)
    {
        m_side = side;
        // Update Rectangle's width and height
        setDimensions(side, side);
    }
}

double Square::getSide()
{
    return m_side;
}

double Square::calcArea()
{
    // Area of a square = side^2
    return m_side * m_side;
}

double Square::calcPerimeter()
{
    // Perimeter of a square = 4 * side
    return 4 * m_side;
}

void Square::draw()
{
    cout << "Drawing Square" << endl;
    cout << "Side Length: " << m_side << endl;

    // Print position and rotation from base Shape class
    printBaseInfo();
}

void Square::scale(double factor)
{
    if (factor > 0)
    {
        m_side = m_side * factor;
        // Keep Rectangle dimensions synced
        setDimensions(m_side, m_side);
    }
}