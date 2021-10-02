/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 10th, 2021
** Description:  Write a program that converts Celsius temperatures to Fahrenheit temperatures.
**               where F is the Fahrenheit temperature and C is the Celsius temperature.  
**               The program should prompt the user to input a Celsius 
**               temperature and should display the corresponding Fahrenheit temperature.  
**               It should display only the converted temperature without any text
*******************************************************************************/ 

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    //variables

    double celsius;
    double temperature;
    
    cout << "Please enter a Celsius temperature." << endl;
    cin >> celsius; 

    //calculate the temp in F
    temperature = (((9*celsius)/5)+32);

    cout << "The equivalent Fahrenheit temperature is:" << endl;
    cout << temperature;

    return 0;
}