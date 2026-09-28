#include "iostream"
using namespace std;


/* 
Dependecy Inversion Principle
-> A High Level modules should not be depends on low level modules
-> Both depends on abstraction
-> Abstraction should be depends on details
-> details should be depends on abstraction
*/


// High level modules
class vehicle
{
    public:
    void virtual start() = 0;
    virtual ~vehicle() = default;

    vehicle()
    {
        cout<<"vehicle's constructor"<<endl;
    }

    // ~vehicle()
    // {
    //     cout<<"vehicle's destructor"<<endl;
    // }
};

// low level modules
class car:public vehicle
{
    public:
    void virtual start()
    {
        cout<<"car is starting"<<endl;
    }

    car()
    {
        cout<<"car's constructor"<<endl;
    }

    ~car()
    {
        cout<<"car's destructor"<<endl;
    }

};

class truck:public vehicle
{
    void virtual start()
    {
        cout<<"truck is starting"<<endl;
    }
};


/*
Here High level modules depends on low level modules
so in next example we introduce abstraction
*/

int main()
{
    vehicle* ptr = new car();
    ptr->start();
    delete ptr;

    return 0;
}