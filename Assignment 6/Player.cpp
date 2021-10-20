/*******************************************************************************
** Author:       Ruben Sanduleac
** Date:         October 19th, 2021
** Description: Player class used to initialize the stats of the player which in turn
 *              will be used in the team class.
*******************************************************************************/
#include "Player.h"

/*******************************************************************************
** Function Name: Player::Player()
** Description: default constructor, initializes the name to the empty string ("")
 *              and initializes each of the stats to -100 (this is not a valid
 *              value for any of the stats, and is one we should notice if it
 *              shows up where it shouldn't).
*******************************************************************************/
Player::Player()
{
    namePlayer = "";
    points = -100;
    rebounds = -100;
    assists = -100;
}

/*******************************************************************************
** Function Name: Player::Player(std::string nam, int poi, int reb, int asi)
** Description: constructor that takes four parameters and uses them to initialize
 *              the data members
*******************************************************************************/
Player::Player(std::string nam, int poi, int reb, int asi)
{
    namePlayer = nam;
    points = poi;
    rebounds = reb;
    assists = asi;
}

/*******************************************************************************
** Function Name: void Player::setName(std::string player)
** Description: sets the name of the play
*******************************************************************************/
void Player::setName(std::string play)
{
    namePlayer = play;
}

/*******************************************************************************
** Function Name: void Player::setPoints(int setPoints)
** Description: sets the points of the player
*******************************************************************************/
void Player::setPoints(int setPoints)
{
    points = setPoints;
}

/*******************************************************************************
** Function Name: void Player::setRebounds(int setReb)
** Description: sets the rebounds of the player
*******************************************************************************/
void Player::setRebounds(int setReb)
{
    rebounds = setReb;
}

/*******************************************************************************
** Function Name: void Player::setAssists(int setAst)
** Description: sets the assists of the player
*******************************************************************************/
void Player::setAssists(int setAst)
{
    assists = setAst;
}

/*******************************************************************************
** Function Name: std::string Player::getName()
** Description: returns the name of the player
*******************************************************************************/
std::string Player::getName()
{
    return namePlayer;
}

/*******************************************************************************
** Function Name: int Player::getPoints()
** Description: returns the points of the player
*******************************************************************************/
int Player::getPoints()
{
    return points;
}

/*******************************************************************************
** Function Name: int Player::getRebounds()
** Description: returns the rebounds of the player
*******************************************************************************/
int Player::getRebounds()
{
    return rebounds;
}

/*******************************************************************************
** Function Name: int Player::getAssists()
** Description: returns the assists of the player
*******************************************************************************/
int Player::getAssists()
{
    return assists;
}
