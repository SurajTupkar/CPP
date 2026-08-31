#include "iostream"
using namespace std;

/*
Multilevel
    -> Inheritance where a derived class inherits from another derived class and that derived class inherits from base class


*/

class vehicle
{
    public:
    string veh_type;
    vehicle()
    {
        cout<<"vehicle's constructor"<<endl;
    }

    ~vehicle()
    {
        cout<<"vehicle's destructor"<<endl;
    }
};

class car:public vehicle
{
    public:
    string car_brand;
    car()
    {
        cout<<"car's constructor"<<endl;
    }
    ~car()
    {
        cout<<"car's destructor"<<endl;
    }

};

class audi:public car
{
    public:
    string audi_ver;
    audi()
    {
        cout<<"audi's constructor"<<endl;
    }

    ~audi()
    {
        cout<<"audi's destructor"<<endl;
    }

};

int main()
{
    audi *ptr = new audi();
    ptr->car_brand = "BMW";
    ptr->veh_type = "car";
    cout<<ptr->car_brand<<endl;
    cout<<ptr->veh_type<<endl;

    delete ptr;


    return 0;
}