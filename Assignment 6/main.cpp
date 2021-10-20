/*******************************************************************************
** Author:       Ruben Sanduleac
** Date:         October 19th, 2021
** Description:  This program creates two classes teams and players inside the team
 *               the user can create team names and sc ores for each of the postitions.
*******************************************************************************/
#include <iostream>
#include "Player.h"
#include "Team.h"

int main()
{
    std::cout << "Welcome to the Sport Arena" << std::endl;

    Player p1("Charlotte", 24, 10, 7);
    Player p2("Emily", 21, 13, 9);
    Player p3("Anne", 20, 10, 8);
    Player p4("Jane", 19, 10, 10);
    Player p5("Mary", 18, 11, 8);
    p5.setRebounds(12);

    Team team1(p1, p2, p3, p4, p5);
    Player p = team1.getShootingGuard();
    std::cout << p.getName() << std::endl;
    std::cout << p.getPoints() << std::endl;
    std::cout << team1.totalPoints() << std::endl;

    return 0;
}
