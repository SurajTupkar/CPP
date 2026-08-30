#include "iostream"
using namespace std;
/*
Multiple Inheritance
    -> A inheritance type where a derived class inherits properties and behaviour from multiple base class

Topics :
    -> 1. What does the derived object contain
        -> Derived object contains base class subobject and derived class object
    -> 2. Constructor order
        -> The order of base class inherits then derived class
    -> 3. Destructor order
        -> Reverse order of object creation
    -> 4. Ambiguity problem
        -> If both base class have same name of function and we are trying to access that function derived object does not know which he needs to be called
    -> 5. How to resolve ambiuity
        -> we can resolve this ambiguity using scope resolution operator.
    -> 6. Diamond problem
        -> 
    -> 7. Virtual Inheritance
    -> 8. Constructor behaviour with virtual inheritance

*/

class vehicle
{
    public:
    string name;

    void veh_mode()
    {
        cout<<"veh_mode of vehicle"<<endl;
    }

    vehicle()
    {
        cout<<"vehicle constructor"<<endl;
    }

};

class vehicle_type
{
    public:
    string veh_type;
    vehicle_type()
    {
        cout<<"vehicle_type constructor"<<endl;
    }

    void veh_mode()
    {
        cout<<"veh_mode of vehicle_type"<<endl;
    }

};

class car:public vehicle, public vehicle_type
{
    public:

    car()
    {
        cout<<"car constructor"<<endl;
    }

};

int main()
{
    car *ptr = new car();
    ptr->vehicle::veh_mode();
    ptr->vehicle_type::veh_mode();

    return 0;
}