/*
1. What is Abstraction?
    -> Abstraction means exposing only the essential information/behaviour and hiding the unnecessary implemenatation details.
        -> Let suppose i have a vehicle class and petrol_car,diesel_car and electric_car are the derived class of vehicle class.
            -> Now every derived class have engine_start button in it like normally every type of car have engine_start button
                -> but we don't know the implementation behind this how it's going to start that perticular type of car.
                    -> so in abstraction what we can do 
                        -> we can create a interface like start_engine method in vehicle class which is our pure virtual method or function

        -> Now we have a interface start_engine and it's different implementation for each perticular type of vehicle like petrol_car,diesel_car and eletric_car

*/


#include "iostream"
using namespace std;


class vehicle
{
    public:
    virtual void start_engine() = 0;

    vehicle()
    {
        cout<<"vehicle's constructor called"<<endl;
    }

    virtual ~vehicle()
    {
        cout<<"vehicle's destructor called"<<endl;
    }
};

class petrol_car:public vehicle
{
    public:
    void start_engine() override
    {
        cout<<"petrol_car uses petrol to start_engine"<<endl;
    }
    ~petrol_car()
    {
        cout<<"petrol_car's destructor called"<<endl;
    }
};

class diesel_car:public vehicle
{
    public:
     void start_engine() override
    {
        cout<<"diesel_car uses petrol to diesel_engine"<<endl;
    }

    ~diesel_car()
    {
        cout<<"diesel_car's destructor called"<<endl;
    }
};

class electric_car:public vehicle
{
    public:
    void start_engine() override
    {
        cout<<"eletric_car uses battery to start_engine"<<endl;
    }
    ~electric_car()
    {
        cout<<"electric_car's destructor called"<<endl;
    }
};

int main()
{
    vehicle* ptr = new electric_car();
    ptr->start_engine();

    delete ptr;


    return 0;
}