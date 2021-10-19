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

#ifndef PROJECT_5B_TAXICAB_H
#define PROJECT_5B_TAXICAB_H


class Taxicab {
    private:
        int XCoord;
        int YCoord;

    public:
        Taxicab();
        Taxicab(int, int);
        int getXCoord(int);
        int getYCoord(int);
        int getDistanceTraveled(int);
        int moveX(int);
        int moveY(int);
};


#endif //PROJECT_5B_TAXICAB_H
