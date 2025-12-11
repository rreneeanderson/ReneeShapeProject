#Design Doc
Design Document for Shape Hierarchy Project
Final Project for Languages and Paradigms  
Renee Anderson

Introduction  
For this project, I chose the Class Hierarchy for Shapes (E2) option because I wanted hands-on practice with inheritance, virtual functions, and polymorphism in C++. I also liked this project because shapes are easy to visualize, and it helped me understand how object-oriented code connects together in a real program.

Overall Design  
The project is based on an object-oriented design where every shape comes from one base class called Shape. Shape contains the shared behavior that all shapes need, like storing position, rotation, and color. It also has virtual functions so each shape can define its own version of draw(), calcArea(), and perimeter().

Class Structure  
Shape  
This is the abstract base class. It holds the x and y position, rotation, and color. It provides the function headers for draw(), calcArea(), perimeter(), move(), rotate(), and scale().

Circle  
This class inherits from Shape and adds a radius. It overrides calcArea() and perimeter() using formulas for a circle. It also overrides scale() so scaling changes the radius.

Rectangle  
This class holds width and height. It overrides calcArea() by multiplying width and height. Perimeter is also calculated based on both sides. Moving, rotating, and scaling use the Shape functions.

Square  
Square inherits from Rectangle. Instead of adding new variables, Square just makes sure the width and height stay the same so the shape stays a perfect square. It reuses Rectangle’s behavior but simplifies the constructor.

Triangle  
This class stores the lengths of the three sides. The area is calculated using Heron's formula, which requires all side lengths. Perimeter is the sum of the three sides. Transformations work the same as other shapes.

Polygon  
This class represents a regular polygon using a number of sides and a side length. The area is calculated using the standard polygon area formula. Perimeter is the number of sides multiplied by the side length.

Polymorphism  
The main idea of this project was showing how polymorphism works. In my program, I create an array of Shape pointers and fill it with different kinds of shapes. Even though the array is typed as Shape*, each shape still runs its own version of calcArea(), draw(), and perimeter(). This shows dynamic binding, which was an important goal of the project.

Transformations  
Each shape supports simple transformations:
move(dx, dy) changes the position  
rotate(angle) changes the rotation  
scale(factor) changes the size of the shape  
These functions work differently for different shapes when needed, but they use the same interface from the base class.

Why I Designed It This Way  
I wanted the project to stay clear and beginner-friendly while still showing real object-oriented concepts. I kept each class focused on only what it needed and avoided extra complexity. The goal was to make the hierarchy easy to understand and easy for my professor to read.

Conclusion  
This design let me practice inheritance, virtual functions, polymorphism, and organizing a C++ project with multiple files. Working with shapes made it easier to understand how shared behavior and unique behavior fit together in an object-oriented system.
