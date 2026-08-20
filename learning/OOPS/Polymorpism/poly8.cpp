#include "iostream"
using namespace std;

/*
Function Overriding
    -> 

*/


class vehicle
{
    public:
    virtual void start()
    {
        cout<<"vehicle is starting"<<endl;
    }


};

class car : public vehicle
{
    public:
    void start() override
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





    return 0;
}