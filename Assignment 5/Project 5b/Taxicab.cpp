/*******************************************************************************
** Author:       Ruben Sanduleac
** Date:         October 19th, 2021
** Description:  This program has a class called Taxicab that has three int fields
 *               (data members) to store its current x- and y-coordinates and the
 *               total distance it has driven so far (the actual distance driven by the Taxicab,
 *               not the Euclidean distance from it's starting point).
 *               The class should have a constructor that takes two parameters and uses them to
 *               initialize the coordinates, and also initializes the distance traveled to zero.
 *               The class should have a default constructor that sets all three fields to zero.
 *               The class should have a get method for each data member.
 *               It should have a method called moveX that takes an int parameter that tells
 *               how far the Taxicab should shift left or right.
 *               It should have a method called moveY that takes an int parameter that
 *               tells how far the Taxicab should shift up or down.
*******************************************************************************/
#include "Taxicab.h"
#include <cmath>

/************************************
 * Name: Taxicab::Taxicab()
 * Discription: Intilizes the x, y, and distance to 0;
 */
Taxicab::Taxicab()
{
    XCoord = 0;
    YCoord = 0;
    distance = 0;

}

/************************************
 * Name: Taxicab::Taxicab(int x, int y)
 * Discription: Intilizes the x, y, and distance to 0;
 */
Taxicab::Taxicab(int x, int y)
{
    XCoord = x;
    YCoord = y;
    distance = 0;
}

/************************************
 * Name: int Taxicab::getXCoord()
 * Description: getter, returns the x coordinate
 ***********************************/
int Taxicab::getXCoord()
{
    return XCoord;
}

/************************************
 * Name: int Taxicab::getYCoord()
 * Description: getter, returns the y coordinate
 ***********************************/
int Taxicab::getYCoord()
{
    return YCoord;
}

/************************************
 * Name: int Taxicab::getDistanceTraveled()
 * Description: getter, returns the distance
 ***********************************/
int Taxicab::getDistanceTraveled()
{

    return distance;
}

/************************************
 * Name: void Taxicab::moveX(int x)
 * Description: setter
 *              1. Moves the distance
 *              2. Increments the x coordinate
 ***********************************/
void Taxicab::moveX(int x)
{
    distance = distance + abs(x);
    XCoord = XCoord + x;
}

/************************************
 * Name: void Taxicab::moveY(int y)
 * Description: setter
 *              1. Moves the distance
 *              2. Increments the y coordinate
 ***********************************/
void Taxicab::moveY(int y)
{
    distance = distance + abs(y);
    YCoord = YCoord + y;
}
