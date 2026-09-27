// Virtual Destructor

#include "iostream"
using namespace std;

class vehicle
{
    public:
    virtual void start()
    {
        cout<<"vehicle_is_start"<<endl;
    }

    vehicle()
    {
        cout<<"vehicle constructor called "<<endl;
    }

    ~vehicle()
    {
        cout<<"vehicle destructor called"<<endl;
    }
};

class car:public vehicle
{
    public:
    void start() override
    {
        cout<<"car_is_starting"<<endl;
    }

    car()
    {
        cout<<"car's constructor called"<<endl;
    }

    ~car()
    {
        cout<<"car's destructor called"<<endl;
    }
};

int main()
{
    vehicle* ptr = new car(); // vehicle's then car's constructor called
    delete ptr;
    
    return 0;
}