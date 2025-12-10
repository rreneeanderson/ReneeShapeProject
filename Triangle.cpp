// Filename: Triangle.cpp
// Description: Function definitions for the Triangle class.
// Stores 3 side lengths and uses simple math for area/perimeter.
// Renee Anderson
// Date: 12/10/2025

#include <iostream>
#include <cmath>
using namespace std;

#include "Triangle.h"

Triangle::Triangle(double a, double b, double c)
{
    // Basic validation so we don't get impossible triangles.
    // If something is wrong, we just default to a nice simple one.
    if (a > 0 && b > 0 && c > 0)
    {
        m_a = a;
        m_b = b;
        m_c = c;
    }
    else
    {
        m_a = 3.0;
        m_b = 4.0;
        m_c = 5.0; // A simple right triangle
    }
}

Triangle::~Triangle()
{
    // cout << "Triangle destroyed." << endl;
}

void Triangle::setSides(double a, double b, double c)
{
    if (a > 0 && b > 0 && c > 0)
    {
        m_a = a;
        m_b = b;
        m_c = c;
    }
}

double Triangle::getA() { return m_a; }
double Triangle::getB() { return m_b; }
double Triangle::getC() { return m_c; }

double Triangle::calcArea()
{
    
    double s = (m_a + m_b + m_c) / 2.0;
    return sqrt(s * (s - m_a) * (s - m_b) * (s - m_c));
}

double Triangle::calcPerimeter()
{
    return m_a + m_b + m_c;
}

void Triangle::draw()
{
    cout << "Drawing Triangle" << endl;
    cout << "Sides: " << m_a << ", " << m_b << ", " << m_c << endl;

   
    printBaseInfo();
}

void Triangle::scale(double factor)
{
    if (factor > 0)
    {
        m_a = m_a * factor;
        m_b = m_b * factor;
        m_c = m_c * factor;
    }
}