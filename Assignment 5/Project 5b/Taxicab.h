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

#ifndef PROJECT_5B_TAXICAB_H
#define PROJECT_5B_TAXICAB_H


class Taxicab {
    private:
        int XCoord;
        int YCoord;
        int distance;
    public:
        Taxicab();
        Taxicab(int, int);
        int getXCoord();
        int getYCoord();
        int getDistanceTraveled();
        void moveX(int);
        void moveY(int);
};


#endif //PROJECT_5B_TAXICAB_H
