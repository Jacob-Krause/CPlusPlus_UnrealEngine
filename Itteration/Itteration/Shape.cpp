#include "Shape.h"
#include <iostream>
using namespace std;

//Function to get area
double Shape::getArea(double x, double y, bool isTriangle) {
	double area;
	if (y == 0) {
		double pi = 3.14;
		area = pi * (x * x);
	}
	else if(isTriangle == true) {
		area = (x * y) / 2;
	}
	else {
		area = x * y;
	}
	return area;
}

void Rectangle::rectangle() {
	cout << "Rectangle \n";
	cout << "Color: " << Rectangle::Color << "\n";
	cout << "Height" << Rectangle::Height << "\n";
	cout << "Width" << Width << "\n";
	cout << "Area" << getArea(Height, Width) << "\n";
}

void Triangle::triangle() {
	cout << "Triangle \n";
	cout << "Color: " << Triangle::Color << "\n";
	cout << "Height" << Triangle::Height << "\n";
	cout << "Base" << Base << "\n";
	cout << "Area" << getArea(Height, Base, isTriangle) << "\n";
}

void Circle::circle() {
	cout << "Circle \n";
	cout << "Color: " << Circle::Color << "\n";
	cout << "Radius" << Radius << "\n";
	cout << "Area" << getArea(Radius) << "\n";
}