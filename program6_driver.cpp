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
Author: Kripa Hayanju, Nikasha Pokharel
Date: 11/29/2025

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
	TrainQueue train;
	MaintenanceStack maintenance;

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
	
	int iChoice;
	do 
    {
        displayMenu( szMenuName, szMenuChoicesArr, 9);
		cout << "Select an option: ";
		cin >> iChoice;

        switch (iChoice) 
        {
            case 1:
            {
                int iNum, iPassengers;
				string szDest, szTime;

				cout << "Enter train number: ";
				cin >> iNum;
				cin.ignore();

				cout << "Enter destination: ";
				getline(cin, szDest);

				cout << "Enter departure time: ";
				getline(cin, szTime);

				cout << "Enter passenger count: ";
				cin >> iPassengers;

				train.enqueueTrain(iNum, szDest, szTime, iPassengers);

				cout << "Train added to queue." << endl;

				break;
            } 
            case 2: 
            {
                cout << "Peeking the next train: " << endl;
				train.peekTrain();
				break;
            }
            case 3: 
            {
                cout << "Processing the next train: " << endl;
    			cout << train.dequeueTrain() << endl;
    			break;
            }
            case 4: 
            {
                while(!train.isEmpty())
				{
					train.dequeueTrain();
				}
                cout << "Emptying train queue" << endl;
				break;
            }
            case 5:
            {
                int iR;
                string szI, szR;

                cout << "Enter maintenance request number: ";
				cin >> iR;
				cin.ignore();

				cout << "Enter maintenance issue: ";
				getline(cin, szI);

				cout << "Enter staff reporter name: ";
				getline(cin, szR);

                maintenance.pushRequest(iR, szI, szR);

                cout << "Maintenance request added to stack." << endl;
                break;
            }
            case 6:
            {
                cout << "Peeking the latest maintenance request: " << endl;
				maintenance.peekRequest();
				break;
            }
            case 7:
            {
                cout << "Resolving the latest maintenance request: " << endl;
    			cout << maintenance.popRequest() << endl;
    			break;
            }
            case 8:
            {
                while(!maintenance.isEmpty())
				{
					maintenance.popRequest();
				}
                cout << "Cleared maintenance requests." << endl;
				break;
            }
            case -1: 
            {
                cout << "Exiting program." << endl; 
                break;
            }
            default: 
            {
                cout << "Invalid Choice. Try again." << endl;
            }
        }

    } while (iChoice != -1);

	return 0;
}
