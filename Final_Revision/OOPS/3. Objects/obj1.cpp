#include "iostream"
using namespace std;

/*
Objects 
    -> Object is an instance of class
    -> It has it's own state
    -> It can access Data Member and member function of class according to the access specifiers
    Types to create objects 
        -> 1. Static Allocation
            -> Object created at stack memory so no need to delete object manually it will automatically destroy
        -> 2. Dynamic Allocation
            -> object created at heap memory so it should be delete manually 

*/


class vehicle
{
    public:
    string veh_name;
    int speed;
};

int main()
{
    // 1. Static Object Creation
    vehicle obj; 

    // set the data members using static object
    obj.veh_name = "XUV700";
    obj.speed = 0;
    cout<<"Name of vehicle:"<<obj.veh_name<<endl;
    cout<<"Intial speed of vehicle:"<<obj.speed<<endl;


    // 2. Dynamic Object Creation

    vehicle* ptr = new vehicle();
    ptr->veh_name = "XUV3X0";
    ptr->speed = 50;
    cout<<"vehicle name:"<<ptr->veh_name<<endl;
    cout<<"Intial speed:"<<ptr->speed<<endl;

    delete ptr; // dangling ptr
    ptr = nullptr;





    return 0;
}