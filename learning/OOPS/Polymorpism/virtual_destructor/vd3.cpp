/*
with virtual destructor


*/

#include "iostream"
using namespace std;


class vehicle
{
    public:

    vehicle()
    {
        cout<<"vehicle's constructor called"<<endl;
    }

    virtual ~vehicle()
    {
        cout<<"vehicle's constructor called"<<endl;
    }
    
};

class car:public vehicle
{
    public:
    car()
    {
        cout<<"car's constructor called"<<endl;
    }
    ~car()
    {
        cout<<"car's constructor called"<<endl;
    }
};


int main()
{
    vehicle* ptr = new car();
    delete ptr;



    return 0;
}