/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 18th, 2021
** Description:  Write a class called Box that has three double fields called height, 
*                width and length.  The class should have set methods for each field.  
*                It should have a three-parameter constructor that takes three doubles 
*                and uses them to initialize the fields of the Box.  
*                It should have a default constructor that initializes each field to 1.  
*                It should have a method that calculates and returns the volume of the Box 
*                and a method that calculates and returns the surface area of the Box.
*******************************************************************************/ 
#include <iostream>
#include "Box.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
    Box box1(2.4, 7.1, 5.0);
    Box box2;
    double volume1 = box1.calcVolume();
    double surfaceArea1 = box1.calcSurfaceArea();

    double hight;
    double width;
    double length;

    cout << "Please enter the specification of the box: " << endl;
    cout << "Hight:";
    cin >> hight;
    cout << "Width:";
    cin >> width;
    cout << "Length:";
    cin >> length;

    box2.setHeight(hight);
    box2.setWidth(width);
    box2.setLength(length);

    double volume2 = box2.calcVolume();
    double surfaceArea2 = box2.calcSurfaceArea();

    cout << "The volume of box 1 is " << volume1 << " meters cubed.";
    cout << "The surface area of box 1 is " << surfaceArea1 << " meters cubed.";
    cout << "The volume of box 1 is " << volume2 << " meters cubed.";
    cout << "The surface area of box 1 is " << surfaceArea2 << " meters cubed.";

    return 0;
}