/*******************************************************************************
** Author:       Ruben Sanduleac
** Date:         October 19th, 2021
** Description:
*******************************************************************************/
#ifndef ASSIGNMENT_6_TEAM_H
#define ASSIGNMENT_6_TEAM_H
#include "Player.h"

class Team {
private:
    Player PointGuard,
           ShootingGuard,
           SmallForward,
           PowerForward,
           Center;
public:

    //constructors
    Team();

    //overloaded constructors
    Team(Player, Player, Player, Player, Player);

    //setters
    void setPointGuard(int);
    void setShootingGuard(int);
    void setSmallForward(int);
    void setPowerForward(int);
    void setCenter(int);

    //getters
    int getPointGuard();
    int getShootingGuard();
    int getSmallForward();
    int getPowerForward();
    int getCenter();

    //total
    int totalPoints();
};


#endif
