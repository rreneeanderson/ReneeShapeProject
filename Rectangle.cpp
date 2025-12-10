// Filename: Rectangle.cpp
// Description: Function definitions for the Rectangle class.
// Handles simple width/height math and prints out its info.
// Renee Anderson
// Date: 12/10/2025

#include <iostream>
using namespace std;

#include "Rectangle.h"

Rectangle::Rectangle(double w, double h)
{
   
    if (w > 0) m_width = w;
    else m_width = 1.0;

    if (h > 0) m_height = h;
    else m_height = 1.0;
}

Rectangle::~Rectangle()
{
   
    // cout << "Rectangle destroyed." << endl;
}

void Rectangle::setDimensions(double w, double h)
{
    if (w > 0) m_width = w;
    if (h > 0) m_height = h;
}

double Rectangle::getWidth()
{
    return m_width;
}

double Rectangle::getHeight()
{
    return m_height;
}

double Rectangle::calcArea()
{
    // Rectangle area = width * height
    return m_width * m_height;
}

double Rectangle::calcPerimeter()
{
    // Perimeter = 2*(w + h)
    return 2 * (m_width + m_height);
}

void Rectangle::draw()
{
    cout << "Drawing Rectangle" << endl;
    cout << "Width: " << m_width << ", Height: " << m_height << endl;

   
    printBaseInfo();
}

void Rectangle::scale(double factor)
{
    if (factor > 0)
    {
        m_width = m_width * factor;
        m_height = m_height * factor;
    }
}
