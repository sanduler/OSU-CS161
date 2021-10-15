/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 15th, 2021
** Description:  Write a void function named smallSort that takes three int parameters 
*                by reference and sorts their values into ascending order, 
*                so that the first parameter now has the lowest value, the second 
*                parameter the middle value, and the third parameter has the highest value.  
*                For example if the main method has:
*                int first = 14;
*                int second = -90;
*                int third = 2;
*                smallSort(first, second, third);
*                cout << first << ", " << second << ", " << third << endl;
*******************************************************************************/ 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//fxn prototypes
void getNums(int&, int&, int&);
void smallSort(int&, int&, int&);

int main()
{
    int first, second, third;

    getNums(first, second, third);

    smallSort(first, second, third);

    cout << "The three input numbers ordered from smallest to biggest are ";
    cout << "First Number: " << first << " " << "Second Number: " << second << " \n";
    cout << "Third Number: " << third << endl;

    return 0;
}

void getNums(int& number1, int& number2, int& number3)
{
    cout << "Please enter the first number: ";
    cin >> number1;

    cout << endl;

    cout << "Please enter the second number: ";
    cin >> number2;

    cout << endl;

    cout << "Please enter the third number: ";
    cin >> number3;

    cout << endl;
}

void smallSort(int& num1, int& num2, int& num3)
{
    int temp1;

    if((num1 > num2) && (num2 > num3))
    {
        temp1 = num1;
        num1 = num3;
        num3 = temp1;

    }
    else if((num1 > num2) && (num2< num3))
    {
        temp1 = num1;
        num1 = num2;
        num2 = temp1;

        if(num2 > num3)
        {
            temp1 = num3;
            num3 = num2;
            num2 = temp1;
        }
    }
    else if((num1 < num2) && (num2 > num3))
    {
        temp1 = num2;
        num2 = num3;
        num3 = temp1;

        if(num1 > num2)
        {
            temp1 = num1;
            num1 = num2;
            num2 = temp1;
        }
    }
}