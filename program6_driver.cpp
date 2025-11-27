#include "program6.h"

/*********************************************************************
void displayMenu(string szMenuName, string szChoicesArr[], int iChoices)
Purpose:
    Function to display the menu choices of a provided menu
Parameters:
    I   string szMenuName       Title of the displayed menu
    I   string szChoicesArr     Menu choices to be displayed
    I   int iChoices            Number of menu choices    
Return Value:
    -
Notes:
    Menu options are displayed starting at 1
    The last menu option should always be displayed as -1
*********************************************************************/
void displayMenu(string szMenuName, string szChoicesArr[], int iChoices)
{
    cout << szMenuName << endl;
    int i;
    cout << szBreakMessage;
    for(i = 0; i < iChoices - 1; i = i + 1)
    {
        cout << i+1 << ". " << szChoicesArr[i] << endl;
    }

    cout << "-1. " << szChoicesArr[i] << endl;
    cout << szBreakMessage << endl;
}

/*********************************************************************
File name: program6_driver.cpp
Author: <Insert Name>
Date: <Insert Date>

Purpose:
    Program driver for program 6.
Command Parameters:
    -
Input:
    Various menu options
Results:
    -
Notes:
    This does not validate any input
*********************************************************************/
int main() 
{ 
    string szMenuName = "\nRailway Station Management System";
    string szMenuChoicesArr[9] = 
    {
        "Add a new train departure",
        "View the next train",
        "Process the next train",
        "Clear train departures",
        "File a new maintenance request",
        "View the latest maintenance request",
        "Resolve the latest maintenance request",
        "Clear maintenance requests",
        "Exit"
    };

	cout << "Todo: Implement Driver" << endl;

	return 0;
}
