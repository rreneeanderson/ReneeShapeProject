# ReneeShapeProject
Final project for Languages &amp; Paradigms (Shape Hierarchy)
ReneeShapeProject
Final project for Languages  Paradigms (Shape Hierarchy)

Renee’s Shape Hierarchy Project
This project is my final assignment for my Languages and Paradigms class. I chose the “Class Hierarchy for Shapes (E2)” project because I wanted to practice inheritance and polymorphism in a way that felt familiar and visual. This project shows how different shapes can come from the same base class but still have their own behavior.

Project Decription 
I built a small shape library in C++ using object-oriented programming. All shapes inherit from one base class called `Shape`, and each shape overrides its own functions for drawing, calculating area, and calculating perimeter.

Shapes included in my program:
 Circle
 Rectangle
 Square
 Triangle
 Regular Polygon

The program also demonstrates:
 Dynamic binding
 Virtual functions
 Polymorphism
-Basic transformations (move, rotate, scale)

`Main.cpp` creates example shapes, prints their details, applies transformations, and then prints the updated values.

 How to Compile
Inside the `src/` folder, use this command:
g++ Main.cpp Shape.cpp Circle.cpp Rectangle.cpp Square.cpp Triangle.cpp Polygon.cpp -o Shapes.exe

 How to Run
./Shapes.exe

 Project Structure
ReneeShapeProject/
 README.md
 reflection.pdf
 docs/
    design.md
 src/
     Main.cpp
     Shape.h / Shape.cpp
     Circle.h / Circle.cpp
     Rectangle.h / Rectangle.cpp
     Square.h / Square.cpp
     Triangle.h / Triangle.cpp
     Polygon.h / Polygon.cpp

 What I Learned
 How inheritance works in C++
 How polymorphism lets different shapes behave through one interface
 How to organize a multi-file project
 How virtual functions make dynamic binding possible

This project helped me understand object-oriented programming on a deeper level and connect concepts from class to an actual working program.
