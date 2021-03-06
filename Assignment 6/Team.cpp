/*******************************************************************************
** Author:       Ruben Sanduleac
** Date:         October 19th, 2021
** Description:  Creates a team class. Passes a Player class as a memeber. Each Player
 *               on a team has different postions which in turn sum up the total
 *               points for the game.
*******************************************************************************/
#include "Team.h"

/*******************************************************************************
** Function Name: Team::Team(Player point, Player shoot, Player small, Player power, Player cent)
** Description:  constructor that takes five Players and uses them to
 *               initialize each of those data members (in the given order).
*******************************************************************************/
Team::Team(Player point, Player shoot, Player small, Player power, Player cent)
{
    PointGuard = point;
    ShootingGuard = shoot;
    SmallForward = small;
    PowerForward = power;
    Center = cent;
}

/*******************************************************************************
** Function Name: void Team::setPointGuard(Player ptg)
** Description: sets the PointGuard player
*******************************************************************************/
void Team::setPointGuard(Player ptg)
{
    PointGuard = ptg;
}

/*******************************************************************************
** Function Name: void Team::setShootingGuard(Player stg)
** Description: sets the ShootingGuard player
*******************************************************************************/
void Team::setShootingGuard(Player stg)
{
    ShootingGuard = stg;
}

/*******************************************************************************
** Function Name: void Team::setSmallForward(Player smf)
** Description: sets the SmallForward player
*******************************************************************************/
void Team::setSmallForward(Player smf)
{
    SmallForward = smf;
}

/*******************************************************************************
** Function Name: void Team::setPowerForward(Player pwf)
** Description: sets the PowerForward player
*******************************************************************************/
void Team::setPowerForward(Player pwf)
{
    PowerForward = pwf;
}

/*******************************************************************************
** Function Name: void Team::setCenter(Player cnt)
** Description: sets the Center player
*******************************************************************************/
void Team::setCenter(Player cnt)
{
    Center = cnt;
}

/*******************************************************************************
** Function Name: Player Team::getPointGuard()
** Description: returns the PointGuard stats
*******************************************************************************/
Player Team::getPointGuard()
{
    return PointGuard;
}

/*******************************************************************************
** Function Name: Player Team::getShootingGuard()
** Description: returns the ShootingGuard stats
*******************************************************************************/
Player Team::getShootingGuard()
{
    return ShootingGuard;
}

/*******************************************************************************
** Function Name: Player Team::getShootingGuard()
** Description: returns the ShootingGuard stats
*******************************************************************************/
Player Team::getSmallForward()
{
    return SmallForward;
}

/*******************************************************************************
** Function Name: Player Team::getPowerForward()
** Description: returns the PowerForward stats
*******************************************************************************/
Player Team::getPowerForward()
{
    return PowerForward;
}

/*******************************************************************************
** Function Name: Player Team::getCenter()
** Description: returns the Center stats
*******************************************************************************/
Player Team::getCenter()
{
    return Center;
}

/*******************************************************************************
** Function Name: int Team::totalPoints()
** Description: returns the total points
*******************************************************************************/
int Team::totalPoints()
{
    int total = 0;
    total += getPointGuard().getPoints();
    total += getCenter().getPoints();
    total += getPowerForward().getPoints();
    total += getSmallForward().getPoints();
    total += getShootingGuard().getPoints();

    return total;
}
