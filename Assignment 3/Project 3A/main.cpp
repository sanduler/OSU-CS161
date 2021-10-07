/*********************************************************************
** Author: Ruben Sanduleac
** Date: 10/07/21
** Description: Program that asks the user how many integers they
**              would like to enter, after it display the largest and
**              smallest of those numbers.
********************************************************************/
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int MIN_NUMBER =  99999;
    int MAX_NUMBER = -99999;

    int tries;

    cout << "How many numbers would you like to enter? " << endl;
    cin >> tries;
    while(tries--)
    {
        double temp;
        cout << "Please enter a number and I will let you know the maximum and minimum:";
        cin >> temp;
        if (temp >= MAX_NUMBER)
        {
            MAX_NUMBER = temp;
        }
        if (temp <= MIN_NUMBER)
        {
            /* code */
            MIN_NUMBER = temp;
        }
        
    }
    cout << "__________________________" << endl;   
    cout << "The MAX is: " << MAX_NUMBER << endl;
    cout << "The MIN is: " << MIN_NUMBER << endl;
    cout << "__________________________" << endl;  
    return 0;
}