#include <iostream>
#include <string>
#include <cassert>
using namespace std;

inline string szBreakMessage = "*****************************\n";

/*********************************************************************
Class Name: TrainQueue
Purpose:
    The TrainQueue class represents a queue of departing trains. Each
    train contains relevant data such as train number, destination, 
    departure time, and passenger count.
Notes:
    You can implement the queue with a linked list or an array. 
    Do not change the public function prototypes.
*********************************************************************/
class TrainQueue 
{
    private:
        struct Train 
        {
            int iTrainNumber;       // Train number
            string szDestination;   // Train destination
            string szDepartureTime; // Departure time (e.g., "10:30 AM")
            int iPassengers;        // Number of passengers
        };
        

    public:
        TrainQueue();
        ~TrainQueue();
        bool isFull();
        bool isEmpty();
        void peekTrain();
        void enqueueTrain(int iTrainNum, string szDest, string szTime, int iPassengers);
        string dequeueTrain();
};


/*********************************************************************
Class Name: MaintenanceStack
Purpose:
    The MaintenanceStack class represents a stack of maintenance 
    requests. Each request contains relevant data such as request number, 
    description of the issue, and the staff member reporting it.
Notes:
    You can implement the stack with a linked list or an array. 
    Do not change the public function prototypes.
*********************************************************************/
class MaintenanceStack 
{
    private:
        struct MaintenanceRequest 
        {
            int iRequestNumber;     // Maintenance request number
            string szIssue;         // Description of the issue
            string szReporter;      // Staff member reporting the issue
        };


    public:
        MaintenanceStack();
        ~MaintenanceStack();
        bool isFull();
        bool isEmpty();
        void peekRequest();
        void pushRequest(int iReqNum, string szIssue, string szReporter);
        string popRequest();
};
