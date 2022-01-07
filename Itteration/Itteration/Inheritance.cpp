#include <iostream>
#include "Shape.h"

using namespace std;

int main()
{
    //**********  Objects  **********

    Rectangle rectangle;
    rectangle.Color = "Purple";
    rectangle.Height = 3;
    rectangle.Width = 7;

    Circle circle;
    circle.Color = "Green";
    circle.Radius = 7;

    Triangle triangle;
    triangle.Color = "Red";
    triangle.Height = 5;
    triangle.Base = 3;

    //**********  Functions  **********
    cout << "Press enter to get a shape. \n";
    cin.ignore();
    triangle.triangle();

    cout << "Press enter to get another shape. \n";
    cin.ignore();
    circle.circle();

    cout << "Press enter to get final shape. \n";
    cin.ignore();
    rectangle.rectangle();

}
