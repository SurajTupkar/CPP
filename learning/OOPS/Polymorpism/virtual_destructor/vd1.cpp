/*
Virtual Destructor:
    -> A virtual destructor ensures proper destruction of a derived object when it is deleted through a base-class pointer. The derived destructor is called first, followed by the base destructor.
*/

#include "iostream"
using namespace std;

class vehicle
{
    public:

    void veh_meth()
    {
        cout<<"vehicle's method"<<endl;
    }

    vehicle()
    {
        cout<<"constructor of vehicle"<<endl;
    }

   virtual ~vehicle()
    {
        cout<<"destructor of vehicle"<<endl;
    }

};

class car:public vehicle
{
    public:

    void car_method()
    {
        cout<<"car's method"<<endl;
    }

    car()
    {
        cout<<"constructor of car"<<endl;
    }

    ~car()
    {
        cout<<"destructor of car"<<endl;
    }




};

int main()
{
    vehicle* ptr = new car();
    ptr->veh_meth();
    //ptr->car_method();
    delete ptr;


    return 0;
}