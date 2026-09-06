#include "iostream"
using namespace std;

/*
Now the below code follows OCP 
    -> Because without modfying existing vehicle class we add new functionality by extending a new class.

*/


class vehicle
{
    public:
    virtual void start()=0;

};

class petrol_car : public vehicle
{
    public:
    void start() override
    {
        cout<<"petrol_car started"<<endl;
    }
};

// next requirement comes to support diesel car : then without modifying existing code i will extend the functionality

class diesel_car : public vehicle
{
    public:
    void start() override
    {
        cout<<"diesel_car started"<<endl;
    }
};


int main()
{
    vehicle* ptr = new diesel_car();
    ptr->start();


    return 0;
}