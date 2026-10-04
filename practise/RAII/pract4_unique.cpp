#include "iostream"
#include "memory"
using namespace std;

/*
unique_ptr
    -> 1. unique_ptr is a smart pointer that manages exclusive ownership of dynamically created object.
    -> 2. It's ownership can not be copied but we can transfer it using move semantics.
    -> 3. When unique_ptr goes out of the scope it automatically releases owned object using RAII.

*/

class vehicle
{
    public:
    string veh_name;

    vehicle()
    {
        cout<<"vehicle's constructor called"<<endl;
    }

    ~vehicle()
    {
        cout<<"vehicle's destructor called"<<endl;
    }

};


int main()
{
    unique_ptr<vehicle> car = make_unique<vehicle>();
    car->veh_name = "XUV";
    cout<<car->veh_name<<endl;

    // ownership can not be copied

    // unique_ptr<vehicle> car1 = car;

    // but can be transferred using move semantics
    unique_ptr<vehicle> car1 = move(car);
    




    return 0;
}