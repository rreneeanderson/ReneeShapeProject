// Filename: Polygon.cpp
// Description: Function definitions for the Polygon class.
// Treats the polygon as a regular polygon (all sides equal).
// Renee Anderson
// Date: 12/10/2025

#include <iostream>
#include <cmath>
using namespace std;

#include "Polygon.h"

Polygon::Polygon(int sides, double sideLength)
{
    
    if (sides >= 3)
        m_sides = sides;
    else
        m_sides = 3;

    if (sideLength > 0)
        m_sideLength = sideLength;
    else
        m_sideLength = 1.0;
}

Polygon::~Polygon()
{
    // cout << "Polygon destroyed." << endl;
}

void Polygon::set(int sides, double sideLength)
{
    if (sides >= 3)
        m_sides = sides;

    if (sideLength > 0)
        m_sideLength = sideLength;
}

int Polygon::getSides()
{
    return m_sides;
}

double Polygon::getSideLength()
{
    return m_sideLength;
}

double Polygon::calcArea()
{
  
    if (m_sides < 3 || m_sideLength <= 0)
        return 0.0;

    double n = static_cast<double>(m_sides);
    double s = m_sideLength;

    return (n * s * s) / (4.0 * tan(3.14159265358979323846 / n));
}

double Polygon::calcPerimeter()
{
    if (m_sides < 3 || m_sideLength <= 0)
        return 0.0;

    return m_sides * m_sideLength;
}

void Polygon::draw()
{
    cout << "Drawing Polygon" << endl;
    cout << "Number of sides: " << m_sides << endl;
    cout << "Side length: " << m_sideLength << endl;

    // Position + rotation info from base Shape
    printBaseInfo();
}

void Polygon::scale(double factor)
{
    if (factor > 0)
    {
        m_sideLength = m_sideLength * factor;
    }
}