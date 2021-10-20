/*******************************************************************************
** Author:       Ruben Sanduleac
** Date:         October 19th, 2021
** Description:
*******************************************************************************/
#ifndef ASSIGNMENT_6_PLAYER_H
#define ASSIGNMENT_6_PLAYER_H
#include <string>


class Player {
private:
    std::string namePlayer;
    int points;
    int rebounds;
    int assists;
public:
    Player();
    Player(std::string, int, int, int);

    //setters
    void setName(std::string);
    void setPoints(int);
    void setRebounds(int);
    void setAssists(int);

    //getters
    std::string getName();
    int getPoints();
    int getRebounds();
    int getAssists();
    bool hasMorePointsThan(Player);

};


#endif
