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

    // Before virtual function / run-time poly
    vehicle *p = new car();
    p->start(); // vehicle is starting
    // p->car::start(); // error: 'car' is not a base of 'vehicle'

    



    return 0;
}