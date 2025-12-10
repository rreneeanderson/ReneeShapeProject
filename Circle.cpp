// Filename: Circle.cpp
// Description: Function definitions for the Circle class.
// This class handles everything related to a circle's math
// how it prints itself out.
// Renee Anderson
// Date: 12/10/2025

#include <iostream>
#include <cmath>
using namespace std;

#include "Circle.h"

Circle::Circle(double r)
{
    // Simple constructor. If someone passes a negative number,
    // we just default to 1.0 so nothing breaks.
    if (r > 0)
        m_radius = r;
    else
        m_radius = 1.0;
}

Circle::~Circle()
{
    
    // cout << "Circle destroyed." << endl;
}

void Circle::setRadius(double r)
{
    if (r > 0)
        m_radius = r;
}

double Circle::getRadius()
{
    return m_radius;
}

double Circle::calcArea()
{
    // Area formula: π * r^2
    return 3.14159265358979323846 * m_radius * m_radius;
}

double Circle::calcPerimeter()
{
    // Perimeter formula: 2 * π * r
    return 2 * 3.14159265358979323846 * m_radius;
}

void Circle::draw()
{
    
    cout << "Drawing Circle" << endl;
    cout << "Radius: " << m_radius << endl;

   
    printBaseInfo();
}

void Circle::scale(double factor)
{
    if (factor > 0)
        m_radius = m_radius * factor;
}