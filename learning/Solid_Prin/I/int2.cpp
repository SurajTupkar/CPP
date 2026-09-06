/*
The Below code follows ISP : Interface seggragtion principle
*/


#include "iostream"
using namespace std;

class drivable
{
    public:
    virtual void drive() = 0;
    virtual ~drivable()
    {
        cout<<"drivable's destructor called"<<endl;
    }

};

class flyable
{
    public:
    virtual void fly() = 0;

};

class car:public drivable
{
    public:
    void drive()
    {
        cout<<"car can be drive"<<endl;
    }
    ~car()
    {
        cout<<"car's destructor called"<<endl;
    }
};

class aircraft:public flyable
{
    public:
    void fly()
    {
        cout<<"aircraft can be flyable"<<endl;
    }
};

int main()
{
    drivable* ptr = new car();
    ptr->drive();
    
    flyable* ptr1 = new aircraft();
    ptr1->fly(); 
    delete ptr;



    return 0;
}