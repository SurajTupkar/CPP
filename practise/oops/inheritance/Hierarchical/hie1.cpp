#include "iostream"
using namespace std;

/*
Hierarchical 
    -> Type of inheritance where multiple derived class inherits properties and behaviour from a base class.
    -> let suppose i have petrol_car and diesel_car derived class and they are inheriting properties of base class car

*/


class car
{
    public:
    string car_name;

    void start(string type)
    {
        cout<<type<<" engine is started"<<endl;
    }

};

class petrol_car:public car
{
    public:

};

class diesel_car:public car
{
    public:

};



int main()
{
    diesel_car* ptr = new diesel_car;
    ptr->start("diesel");
    petrol_car* ptr1 = new petrol_car;
    ptr1->start("petrol");



    return 0;
}