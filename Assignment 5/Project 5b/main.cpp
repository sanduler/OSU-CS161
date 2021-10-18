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
#include "Taxicab.h"
using std::cout;
using std::cin;
using std::endl;

int main() {
    Taxicab cab1;
    Taxicab cab2(5, -8);
    cab1.moveX(3);
    cab1.moveY(-4);
    cab1.moveX(-1);
    cout << cab1.getDistanceTraveled() << endl;
    cab2.moveY(7);
    cout << cab2.getYCoord() << endl;
    return 0;
}
