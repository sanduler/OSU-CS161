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

/******************
 * Name: Constructor, Box::Box()
 * Discription: Intializes all three variables to 1.0
 * ***************/
Box::Box()
{
    length = 1.0;
    width = 1.0;
    height = 1.0;
}


/******************
 * Name: Overloaded Constructor, Box::Box()
 * Discription: Intializes all three variables set by the user.
 * ***************/
Box::Box(double length1, double width1, double height1)
{
    length = length1;
    width = width1;
    height = height1;
}

/******************
 * Destructor
 * ***************/
Box::~Box()
{

}

/******************
 * Name: Box::setHeight(double hei)
 * Discription: set the hight
 * ***************/
void Box::setHeight(double hei)
{
    if (hei >= 0)
    {
        height = hei;
    }

}

/******************
 * Name: Box::setLength(double len)
 * Discription: set the length
 * ***************/
void Box::setLength(double len)
{
    if (len >= 0)
    {
        length = len;
    }
}

/******************
 * Name: Box::setWidth(double wid)
 * Discription: set the width;
 * ***************/
void Box::setWidth(double wid)
{
    if (wid >= 0)
    {
        width = wid;
    }
}

/******************
 * Name: Box::getHeight()
 * Discription: return the hights;
 * ***************/
double Box::getHeight()
{
    return width;
}

/******************
 * Name: Box::getLength()
 * Discription: return the length;
 * ***************/
double Box::getLength()
{
    return length;
}

/******************
 * Name: Box::getWidth()
 * Discription: retrutn the width;
 * ***************/
double Box::getWidth()
{
    return width;
}

/******************
 * Name: Box::calcVolume()
 * Discription: calculate the volume of the box
 * ***************/
double Box::calcVolume()
{
    return (length * width * height);
}

/******************
 * Name: Box::calcVolume()
 * Discription: Calculates the surface area
 * ***************/
double Box::calcSurfaceArea()
{
    return ((2*length*width)+(2*length*height)+(2*width*height));
}