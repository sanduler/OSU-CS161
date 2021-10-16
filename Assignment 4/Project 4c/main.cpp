/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 15th, 2021
** Description:  A hailstone sequence starts with some positive integer. 
*                If that integer is even, then you divide it by two to get the 
*                next integer in the sequence, but if it is odd, then you multiply 
*                it by three and add one to get the next integer in the sequence.
*******************************************************************************/ 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


//function prototype
int hailstone(int);

int main()
{   
    int steps;
    int positiveNumber;

    cout << "Please enter a positive number to start the program: ";
    cin >> positiveNumber;

    if (positiveNumber < 0)
    {
        /* code */
        cout << "Please enter a positive number to start the program: ";
        cin >> positiveNumber;
    }
    
    steps = hailstone(positiveNumber);
    cout << "The number of steps it took to reach 1 was: " << steps << endl;
    return 0;
}

/**************************************************************************************************
 * Name: int hailstone(int& start)
 * Discription: takes the starting integer as a parameter and returns how 
 *              many steps it takes to reach 1. If the starting integer is 1, 
 *              the return value should be 0, since it takes no steps to reach one 
 *              (we're already there). //For example, if the starting integer is 3, 
 *              then the sequence would go: 3, 10, 5, 16, 8, 4, 2, 1, and the return value 
 *              should be 7.
 * Input: starting integer
 * Output: int steps
 * **********************************************************************************************/
int hailstone(int start)
{
    int steps = 0;
    int finalStep = 1;

    
    do
    {
        if ((start % 2) != 0)
        {
            /* code */
            start = ((start * 3) + 1);
            //cout << start << endl;
           
        }
        else if((start % 2) == 0)
        {
            

            start = (start/2);
            //cout << start << endl;;
        }
        
        steps++;
        //cout << "step " << steps << endl;

    } while (start != 1);
    
    return steps;
}