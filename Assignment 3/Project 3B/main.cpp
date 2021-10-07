/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 6th, 2021
** Description:  This program reads a numerical value from a text file 
**               then uses a while loop to summ all the numbers and ex[pport them
**               to another file. 
*******************************************************************************/ 
#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ofstream;
using std::ifstream;

int main()
{
    ifstream openFile;  //opens the file
    string fileName;    //propts the user to enter the file name
    ofstream sumFile;   //exports the sum of all the numbers that were added
    int sum = 0;        // holds the total for the number
    int values;         //takes the values using while loop from fule

    //propt the user to enter the name of the file
    cout << "Please enter your filename: ";
    cin >> fileName;

    openFile.open(fileName);

    //attempt to open the file
    if (openFile)
    {
        while (openFile >> values)
        {
            /* code */
            sum += values;
        }
        
    }
    else
    {
        //display the error message
        cout << "Error opening the file \n";
    }

     //close the file
    openFile.close();

    ofstream outputFile;
    outputFile.open("sumNumber.txt");
    outputFile << sum; 
    outputFile.close();
    cout << "The sum of all the numbers is: " << sum << endl;
    return 0;
}