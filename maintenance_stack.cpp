#include "program6.h"

//As Linked List
//Constructor
MaintenanceStack::MaintenanceStack()
{
    pTop = nullptr;
}

//Destructor
MaintenanceStack::~MaintenanceStack()
{

}

/*********************************************************************
bool isFull();
Purpose:
    Description of the purpose of the function.
Parameters:
    -
Return Value:
    returns bool(false; as the linked list is never full)
Notes:
    Always returns false as the linked list is never full.
*********************************************************************/
bool MaintenanceStack::isFull()
{
    return false;
}

/*********************************************************************
bool isEmpty();
Purpose:
    Description of the purpose of the function.
Parameters:
    -
Return Value:
    returns true - if the linked list is empty
    returns false - if the linked list is not empty
Notes:
    Description of any special information regarding this function. 
    This is a good place to state any assumptions the function makes.
*********************************************************************/
bool MaintenanceStack::isEmpty()
{
    if(pTop == nullptr)
    {
        return true;
    }
    return false;
}

/*********************************************************************
void peekRequest();
Purpose:
    Description of the purpose of the function.
Parameters:
    -
Return Value:
    List of values returned by the function, excluding parameters.
Notes:
    Description of any special information regarding this function. 
    This is a good place to state any assumptions the function makes.
*********************************************************************/
void MaintenanceStack::peekRequest()
{

}

/*********************************************************************
void pushRequest(int iReqNum, string szIssue, string szReporter);
Purpose:
    Description of the purpose of the function.
Parameters:
    List each of each parameter including data type and description. 
    Each item should begin with whether the parameter is passed in, out or both.
    I Passed in. 
    O Passed out.
    I/O Modified. 
Return Value:
    List of values returned by the function, excluding parameters.
Notes:
    Description of any special information regarding this function. 
    This is a good place to state any assumptions the function makes.
*********************************************************************/
void MaintenanceStack::pushRequest(int iReqNum, string szIssue, string szReporter)
{

}

/*********************************************************************
string popRequest();
Purpose:
    Description of the purpose of the function.
Parameters:
    -
Return Value:
    List of values returned by the function, excluding parameters.
Notes:
    Description of any special information regarding this function. 
    This is a good place to state any assumptions the function makes.
*********************************************************************/
string MaintenanceStack::popRequest()
{

}