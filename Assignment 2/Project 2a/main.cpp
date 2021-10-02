/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 10th, 2021
** Description:  Write a program that asks the user for five numbers and 
**               then prints out the average of those numbers
*******************************************************************************/ 

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    //variables that will used in this program
    //numbers taht the user will enter
    double number1,
           number2,
           number3,
           number4,
           number5;
    //variable to store the average       
    double average;

    cout << "Please enter five numbers. " << endl;
    cin >> number1;
    cin >> number2;
    cin >> number3;
    cin >> number4; 
    cin >> number5;

    average = ((number1+number2+number3+number4+number5)/5);

    cout << "The average of those numbers is:" << endl;
    cout << average << endl;

    return 0;
}