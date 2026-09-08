/*
I : ISP
    -> Interface seggregation principle 
        -> A class should not forced to depends on methods that it does not use.
        -> Instead of having one large interface we should create smaller and more specific interfaces so that
            classes only implement the functionality that they required


*/
#include "iostream"
using namespace std;


class vehicle
{
    public:
    virtual void drive() = 0;
   // virtual void fly() = 0;
};

class car:public vehicle
{
    public:
    void drive() override
    {
        cout<<"we can drive car"<<endl;
    }

    /*
    // we can not implement fly method because car cannot fly so it's leads violetion of ISP.
    void fly() override
    {
        cout<<""<<endl;
    }
    */
};

int main()
{
    vehicle* ptr = new car();
    ptr->drive();

    return 0;
}