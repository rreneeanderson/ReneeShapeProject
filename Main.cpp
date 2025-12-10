// Filename: main.cpp
// Description: Test program for my Shape hierarchy.
// Creates a few different shapes and uses polymorphism
// to call the same functions on each one.
// Renee Anderson
// Date: 12/10/2025

#include <iostream>
using namespace std;

#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
#include "Polygon.h"

int main()
{
    cout << "Welcome to my Shapes Project!" << endl;
    cout << "This program tests my Shape class hierarchy." << endl;
    cout << "---------------------------------------------" << endl;

    // Array of pointers to the base class.
    // This shows polymorphism in action.
    Shape* shapes[5];

    // Create a few different shapes.
    shapes[0] = new Circle(3.0);              // Circle with radius 3
    shapes[1] = new Rectangle(4.0, 2.0);      // Rectangle 4x2
    shapes[2] = new Square(5.0);              // Square with side 5
    shapes[3] = new Triangle(3.0, 4.0, 5.0);  // Simple 3-4-5 triangle
    shapes[4] = new Polygon(6, 2.5);          // Regular hexagon (6 sides)

    cout << endl;
    cout << "Original shapes:" << endl;
    cout << "----------------" << endl;

    // Loop through and show each shape's info.
    for (int i = 0; i < 5; i++)
    {
        cout << endl;
        cout << "Shape #" << i << ":" << endl;

        // These calls are all polymorphic
        // Each shape runs its own version of these functions
        shapes[i]->draw();
        cout << "Area: " << shapes[i]->calcArea() << endl;
        cout << "Perimeter: " << shapes[i]->calcPerimeter() << endl;
    }

    cout << endl;
    cout << "Applying transformations (translate, rotate, scale):" << endl;
    cout << "----------------------------------------------------" << endl;

    for (int i = 0; i < 5; i++)
    {
    
        shapes[i]->translate(i * 1.0, i * 1.0);
   
        shapes[i]->rotate(15.0 * i);

        shapes[i]->scale(1.5);
    }

    cout << endl;
    cout << "Shapes after transformations:" << endl;
    cout << "-----------------------------" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << endl;
        cout << "Shape #" << i << " (after changes):" << endl;

        shapes[i]->draw();
        cout << "Area: " << shapes[i]->calcArea() << endl;
        cout << "Perimeter: " << shapes[i]->calcPerimeter() << endl;
    }

    cout << endl;
    cout << "Cleaning up shape objects..." << endl;

    
    for (int i = 0; i < 5; i++)
    {
        delete shapes[i];
        shapes[i] = nullptr;
    }

    cout << "Done. Exiting program." << endl;
    return 0;
}