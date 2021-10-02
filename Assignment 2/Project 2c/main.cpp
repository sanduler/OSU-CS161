/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 10th, 2021
** Description:  Write a program that asks the user for a (integer) number of 
**               cents, from 0 to 99, and outputs how many of each type of coin 
**               would represent that amount with the fewest total number of coins.
*******************************************************************************/ 

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{

    //constant variables representing quarters, dimes, nickles, and pennies;
    const int Quarter = 25;
    const int Dime = 10;
    const int Nickel = 5;

    //number of cents asked by the user    
    int cents;
    cout << "Please enter an amount in cents less than a dollar." << endl;
    cin >> cents;

    //calculates the coins
    int Q = cents/Quarter;
    cents = cents % Quarter;

    int D = cents/Dime;
    cents = cents % Dime; 

    int N = cents/Nickel;
    cents = cents % Nickel;

    int P = cents; 

    //displays coins from input
    cout << "Your change will be:" << endl;
    cout << "Q:" << Q << endl;
    cout << "D:" << D << endl;
    cout << "N:" << N << endl;
    cout << "P:" << P << endl;

    return 0;
}