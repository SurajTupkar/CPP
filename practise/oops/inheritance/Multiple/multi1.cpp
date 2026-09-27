#include "iostream"
using namespace std;

/*
Multiple : In multiple inheritance a derived class can inherit properties and behaviour of multiple of base class.
So let suppose i have vehicle and engine base class and derived class car 
so here my derived class car can inherits properties and behaviour of vehicle and engine base class.
*/


class vehicle
{
    public:
    string veh_name;
};

class engine
{
    public:
    string engine_type;
};

class car:public vehicle,public engine
{
    public:
    string car_colour;

};



int main()
{
    car* ptr = new car();
    ptr->veh_name="nexon";
    cout<<"veh_name:"<<ptr->veh_name<<endl;
    ptr->engine_type="petrol";
    cout<<ptr->engine_type<<endl;
    ptr->car_colour="black";
    cout<<ptr->car_colour<<endl;

    return 0;
}