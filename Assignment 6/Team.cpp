/*******************************************************************************
** Author:       Ruben Sanduleac
** Date:         October 19th, 2021
** Description:
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
