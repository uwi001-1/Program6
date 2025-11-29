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
    MaintenanceRequest* pTemp; 

    while(!isEmpty())
    {
        pTemp = pTop;
        pTop = pTop->pNext;
        delete pTemp;
    }
}

/*********************************************************************
bool isFull();
Purpose:
    Returns true if the stack is full.
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
    Returns true if the stack is empty.
Parameters:
    -
Return Value:
    returns true - if the linked list is empty
    returns false - if the linked list is not empty
Notes:
    -
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
    Displays the most recent maintenance request without removing it
Parameters:
    -
Return Value:
    -
Notes:
    If Stack is empty prints - "Maintenance stack is empty."
    If Stack has requests prints in this format:
    "Latest Request Number: <Request Number>, Description: <Issue>, Reported By: <Staff Name>"
*********************************************************************/
void MaintenanceStack::peekRequest()
{
    if(isEmpty())
    {
        cout << "Maintenance stack is empty." << endl;
        return;
    }

    //if the stack has requests 
    int iN = pTop->iRequestNumber;
    string szI = pTop->szIssue;
    string szR = pTop->szReporter;

    cout << "Latest Request Number: " << iN;
    cout << ", Description: " << szI;
    cout << ", Reported By: " << szR << endl;
}

/*********************************************************************
void pushRequest(int iReqNum, string szIssue, string szReporter);
Purpose:
    Adds a maintenance request to the top of the stack.
Parameters:
    I int iReqNum - maintenance request number 
    I string szIssue - description of the issue
    I string szReporter - staff member reporting the issue
Return Value:
    -
Notes:
    No need to chech for overflow as the linked list is never full
*********************************************************************/
void MaintenanceStack::pushRequest(int iReqNum, string szIssue, string szReporter)
{
    // No need to check for overflow
    MaintenanceRequest* pNew = new MaintenanceRequest; 
    pNew->iRequestNumber = iReqNum;
    pNew->szIssue = szIssue;
    pNew->szReporter = szReporter;

    // insert at pHead(pTop)
    pNew->pNext = pTop;
    pTop = pNew;
}

/*********************************************************************
string popRequest();
Purpose:
    Removes the most recent maintenance request and returns a string
Parameters:
    -
Return Value:
    returns the string in the node pointed by pTop
Notes:
    The format: "Resolving Request Number: <Request Number>, Description: <Issue>, Reported By: <Staff Name>"
*********************************************************************/
string MaintenanceStack::popRequest()
{
    // Check for underflow
    assert(!isEmpty());  //continue if the list is not empty

    MaintenanceRequest* pTemp = pTop;

    string szFormat = "Resolving Request Number: " + to_string(pTemp->iRequestNumber) + ", Description: " + pTemp->szIssue + ", Reported By: " + pTemp->szReporter;

    pTop = pTop->pNext;

    delete pTemp;

    return szFormat;
}