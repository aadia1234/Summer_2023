#include <iostream>
#include "Shape.h"

Shape::~Shape() { std::cout << "Shape destructor called" << std::endl; }


Open_Shape::~Open_Shape() { std::cout << "Open_Shape destructor called" << std::endl; }


Closed_Shape::~Closed_Shape() { std::cout << "Closed_Shape destructor called" << std::endl; }


Line::~Line() { std::cout << "Line destructor called" << std::endl; }

void Line::draw() { std::cout << "Drawing a line" << std::endl; }

void Line::rotate() { std::cout << "Rotating a line" << std::endl; }


Circle::~Circle() { std::cout << "Circle destructor called" << std::endl; }

void Circle::draw() { std::cout << "Drawing a circle" << std::endl; }

void Circle::rotate() { std::cout << "Rotating a circle" << std::endl; }


Square::~Square() { std::cout << "Sqaure destructor called" << std::endl; }

void Square::draw() { std::cout << "Drawing a square" << std::endl; }

void Square::rotate() { std::cout << "Rotating a square" << std::endl; }
