#include "iostream"
using namespace std;

/*
Function Overriding
    -> 

*/


class vehicle
{
    public:
     void start()
    {
        cout<<"vehicle is starting"<<endl;
    }


};

class car : public vehicle
{
    public:
    void start() 
    {
        cout<<"car is starting"<<endl;
    }


};

int main()
{

    car obj;
    obj.start();  // car is starting
    obj.vehicle::start();   // vehicle is starting

    /*
    // Before virtual function / run-time poly
    vehicle *p = new car();
    p->start(); // vehicle is starting
    // p->car::start(); // error: 'car' is not a base of 'vehicle'
    */

    // After virtual function
    vehicle *p = new car();  
    p->start(); // object car -> method car : car is starting

    car *q = new car();
    vehicle *ptr = static_cast<car*>(q);
    q->start();





    return 0;
}