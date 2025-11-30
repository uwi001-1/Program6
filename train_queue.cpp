#include "program6.h"

//As array

//Constructor
TrainQueue::TrainQueue()
{
   iFront = 0;
   iRear = -1;
   iCount = 0;
}

//Destructor
TrainQueue::~TrainQueue()
{
}

/*********************************************************************
bool isFull();
Purpose:
    Returns true if the queue is full.
Parameters:
    -
Return Value:
    returns bool (true if the number of items is equal to the max size of the array and false if the count is less than max)
Notes:
    -
*********************************************************************/
bool TrainQueue::isFull()
{
   return iCount == iMax;
}

/*********************************************************************
bool isEmpty();
Purpose:
    Returns true if the queue is empty.
Parameters:
    -
Return Value:
    returns bool (true - if the count of items in the queue is 0 and false - if the count of items in the queue is > 0)
Notes:
    -
*********************************************************************/
bool TrainQueue::isEmpty()
{
   return iCount == 0;
}

/*********************************************************************
void peekTrain();
Purpose:
    Displays the next train scheduled to depart without removing it
Parameters:
    -
Return Value:
    -
Notes:
    If queue is empty prints - "Train queue is empty."
    If queue is not empty, it prints in this format:
    Next Train Number: <Train Number>, Destination: <Destination>, Departure Time: <Time>, Passengers: <Passenger Count>
*********************************************************************/
void TrainQueue::peekTrain()
{
   if(isEmpty())
   {
      cout << "Train queue is empty." << endl;
      return;
   }
   
   Train t = queue[iFront]; 
   cout << "Next Train Number: " << t.iTrainNumber << ", Destination: " << t.szDestination << ", Departure Time: " << t.szDepartureTime << ", Passengers: " << t.iPassengers << endl;
}

/*********************************************************************
void enqueueTrain(int iTrainNum, string szDest, string szTime, int iPassengers);
Purpose:
    Adds a new train at the end of the queue.
Parameters:
	I int iTrainNum - The number of the train being added.
    I string szDest - The destination the train.
    I string szTime - The departure time for the train.
    I int iPassengers - The number of passengers on the train.

Return Value:
    -
Notes:
	-
*********************************************************************/
void TrainQueue::enqueueTrain(int iTrainNum, string szDest, string szTime, int iPassengers)
{
   assert(!isFull());

   iRear = (iRear + 1) % iMax;

   queue[iRear].iTrainNumber = iTrainNum;
   queue[iRear].szDestination = szDest;
   queue[iRear].szDepartureTime = szTime;
   queue[iRear].iPassengers = iPassengers;

   iCount++;
}
/*********************************************************************
string dequeueTrain();
Purpose:
    Removes a train from the front of the queue
Parameters:
	None
Return Value:
    returns string
Notes:
	The string is returned in the format: Departing Train Number: <Train Number>, Destination: <Destination>, Departure Time: <Time>, Passengers: <Passenger Count>
*********************************************************************/
string TrainQueue::dequeueTrain()
{
   assert(!isEmpty());

   Train t = queue[iFront];
   iFront = (iFront + 1) % iMax;
   iCount--;

   string szResult = "Processing Train Number: " + to_string(t.iTrainNumber) + ", Destination: " + t.szDestination + ", Departure Time: " + t.szDepartureTime + ", Passengers: " + to_string(t.iPassengers);

   return szResult;
}