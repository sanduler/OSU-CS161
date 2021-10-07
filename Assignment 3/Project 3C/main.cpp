/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 7th, 2021
** Description:  This program is guessing game where the user selects a number.
**               and then the user will try to guess the number. The program then
**               prints how many tries it took.
*******************************************************************************/ 
#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int number;
    int counter = 0;
    int guessNumber; 

    cout << "************************************\n";
    cout << "Welcome to the number guessing game.\n";
    cout << "************************************\n";
    cout << endl;
    cout << "Enter the number for the player to guess: ";
    cin  >> number; 
    do
    {
        cout << "Enter your guess: ";
        cin >> guessNumber;

        if (guessNumber > number)
        {
            /* code */
            cout << "Too high - try again." << endl;
        }
        else if (guessNumber < number)
        {
            cout << "Too low - try again." << endl;
        }
        
        /* code */
        counter += 1; 
    } while (guessNumber != number);
    
    cout << "You guessed the number!!" << endl;
    cout << "It took " << counter << " tries. " << endl;

    return 0;
}