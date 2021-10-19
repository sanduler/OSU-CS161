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
#include "Taxicab.h"
#include <iostream>
#include <cmath>

Taxicab::Taxicab()
{
    XCoord = 0;
    YCoord = 0;
    distance = 0;

}

Taxicab::Taxicab(int x, int y)
{
    XCoord = x;
    YCoord = y;
    distance = 0;
}

int Taxicab::getXCoord()
{
    return XCoord;
}

int Taxicab::getYCoord()
{
    return YCoord;
}

int Taxicab::getDistanceTraveled()
{

    return distance;
}

void Taxicab::moveX(int x)
{
    distance = distance + abs(x);
    XCoord = XCoord + x;
}

void Taxicab::moveY(int y)
{
    distance = distance + abs(y);
    YCoord = YCoord + y;
}
