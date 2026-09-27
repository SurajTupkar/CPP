#include "iostream"
using namespace std;

class vehicle
{
    public:

    void start()
    {
        cout<<"this is start method of vehicle class"<<endl;
    }

    virtual ~vehicle()
    {
        
    }


};

class car:public vehicle
{
    public:
    void start() 
    {
        cout<<"this is start method of car class"<<endl;
    }
};

int main()
{
    vehicle *ptr = new car(); // static binding or upcasting   
    ptr->start(); // vehicle's start method

    car *carptr = static_cast<car*>(ptr); // downcasting - static
    carptr->start();

    vehicle* ptr1 = new vehicle();
    ptr1->start();
    car* carptr1 = dynamic_cast<car*>(ptr1);
    carptr1->start();


    return 0;
}