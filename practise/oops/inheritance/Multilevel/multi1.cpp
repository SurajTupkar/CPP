#include "iostream"
using namespace std;

/*
Multilevel inheritance
    -> Means a derived class can inherits properties and behviour of another derived class so chain of inherits will created like 
       top-most layer base class
       then derived class of that base class
       again derived class

    -> like let suppose 
        -> I have vehicle class which is base of class of all class
        -> then i have derived class of vehicle base class named car_type
        -> then again petrol_car is a derived class of base class car_type


*/

class vehicle
{
    public:
    string veh_name;


};

class car_type:public vehicle
{
    public:
    string type;
    

};

class petrol_car:public car_type
{
    public:
    string color;
    string type;

};


int main()
{
    petrol_car* ptr = new petrol_car();
    ptr->type="petrol";
    cout<<ptr->type<<endl;
    //ptr->start(ptr);



    return 0;
}