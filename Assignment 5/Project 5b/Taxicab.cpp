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

Taxicab::Taxicab()
{
    XCoord = 0;
    YCoord = 0;

}

Taxicab::Taxicab(int x, int y)
{
    XCoord = x;
    YCoord = y;
}

int Taxicab::getXCoord(int)
{
    return 0;
}

int Taxicab::getYCoord(int)
{
    return 0;
}

int Taxicab::getDistanceTraveled(int)
{
    return 0;
}

int Taxicab::moveX(int)
{
    return 0;
}

int Taxicab::moveY(int)
{
    return 0;
}
