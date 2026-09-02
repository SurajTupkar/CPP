/*
Abstract Class with Normal Functions :
    -> An abstract class can have both pure virtual functions and normal functions.

Vehicle example:
    -> start() is pure virtual:
        -> Vehicle is still an abstract class.
    -> But stop() is a normal function, and derived classes inherit it normally.

    What's happening?
Vehicle
   │
   ├── start() = 0
   │      ↓
   │   Car must implement
   │
   └── stop()
          ↓
      Already implemented
      in Vehicle


So an abstract class can provide:


Common behavior + required behavior

Normal function → common implementation that all derived classes can reuse.
Pure virtual function → behavior that every concrete derived class must define.


Why is this useful?

Suppose every vehicle can be stopped in the same general way, but starting differs:

PetrolCar   → petrol engine
DieselCar   → diesel engine
ElectricCar → battery

So:

virtual void start() = 0;

makes start() mandatory.

But:

void stop()
{
    cout << "Vehicle stopped";
}

Interview answer

Yes, an abstract class can contain normal member functions along with pure virtual functions. Normal functions provide common implementation that derived classes can reuse, while pure virtual functions define behavior that derived classes must implement.
*/

#include "iostream"
using namespace std;


class vehicle
{
    public:
    void virtual start() = 0;

    void stop()
    {
        cout<<"stopped"<<endl;
    }


};

class car:public vehicle
{
    public:
    void start()
    {
        cout<<"petrol_car_started"<<endl;
    }

};

int main()
{
    vehicle* ptr = new car();
    ptr->start();
    ptr->stop();



    return 0;
}