/*Filename: Line Numbers
Description: Write a program that asks the user for the name of a file. The program should display the contents of the file on the screen. 
Author: Anthony Argueta Moncada
Date Modified: 10/18/24 */ 

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream inFile;
    char inName[200];
    string inputLine = "";
    int lineNumber = 1;

    cout << "Enter the input file name: "; 
    cin >> inName;
    inFile.open(inName);
    if (!inFile)
    {
        cout << " Error opening file " << inName << endl;
        return 21;
    }

    while (!inFile.eof())
    {
        getline(inFile, inputLine, '\n');
        cout << setw(4) << right << lineNumber 
        << ": " << inputLine << endl;
        lineNumber++;   
    }

    inFile.close();

    return 0;
}