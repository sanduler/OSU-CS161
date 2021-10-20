/*******************************************************************************
** Author:       Ruben Sanduleac
** Date:         October 19th, 2021
** Description:  Creates a team class. Passes a Player class as a memeber. Each Player
 *               on a team has different postions which in turn sum up the total
 *               points for the game.
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

    // constructors
    Team(Player, Player, Player, Player, Player);

    //setters
    void setPointGuard(Player);
    void setShootingGuard(Player);
    void setSmallForward(Player);
    void setPowerForward(Player);
    void setCenter(Player);

    //getters
    Player getPointGuard();
    Player getShootingGuard();
    Player getSmallForward();
    Player getPowerForward();
    Player getCenter();

    //total
    int totalPoints();
};


#endif
