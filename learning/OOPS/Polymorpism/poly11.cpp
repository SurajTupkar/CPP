#include "iostream"
using namespace std;

/*
final Keyword
│
├── final function
└── final class

-> final can be applied to a virtual function or a class. 
-> When applied to a virtual function, it prevents further overriding. 
-> When applied to a class, it prevents further inheritance.
*/

class vehicle
{
    public:
    virtual void start()
    {
        cout<<"vehicle_is_starting"<<endl;
    }

};

class car :public vehicle
{
    public:
    void start() override final
    {
        cout<<"car_is_starting"<<endl;
    }

};


/*
error: cannot derive from 'final' base 'GTcar' in derived type 'skoda'
because car class is final no one can inherit it
*/
class GTcar final:public vehicle
{
    public:

};

class skoda : public GTcar
{
    public:
};
class sportcar:public car
{
    /*
    error: virtual function 'virtual void sportcar::start()' overriding final function
        Here we can not access start method because it's final in the car class
        Now onwards class which will derived properties from base class car can't override or inherit method start it's final for car class.
   
    public:
    void start() override
    {
        cout<<"sportcar_is_starting"<<endl;
    }

     */

};

class truck:public vehicle
{
    public:
    void start() override
    {
        cout<<"truck_is_starting"<<endl;
    }

};

int main()
{
    vehicle* ptr = new car();
    ptr->start(); // car_is_starting
    vehicle* ptr1 = new sportcar();
    ptr1->start(); //sportcar_is_starting
    vehicle* ptr2 = new truck();
    ptr2->start(); // truck_is_starting



    return 0;
}