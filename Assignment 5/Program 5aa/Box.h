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
#ifndef BOX_H
#define BOX_H

class Box
{
private:
    /* Private Variables*/
    double height;
    double width;
    double length;
public:
    Box();
    Box(double, double, double);
    ~Box();

    //setters
    void setHeight(double);
    void setWidth(double);
    void setLength(double);

    //getters
    double getHeight();
    double getWidth();
    double getLength();

    //calcs
    double calcVolume();
    double calcSurfaceArea();
};
#endif