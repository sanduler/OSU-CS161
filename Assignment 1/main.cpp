/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         10/1/21
** Description:  Asks the user for their favorite animal and then prints out
**               that that is their favorite animal.
*******************************************************************************/

#include <iostream>
#include <string>
using std::string;
using std::endl;
using std::cout;
using std::cin;

int main()
{
    //variables
    string faveAnimal;
    
    //print
    cout << "Please enter your favorite animal. " << endl;

    //input
    cin >> faveAnimal;
    cout << "Your favorite animal is the " << faveAnimal << "." << endl;


    return 0;
}