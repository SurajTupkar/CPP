#include "iostream"
using namespace std;

/*
L in the SOLID
-> LSP : Liskov substitution principle
    -> A base class object should be replaceble with derived class object without breaking correctness of program.
        -> Let suppose I have vehicle class and it have pure virtual method i.e start
        -> Now every derived class which extends the base class , derived class should be implement this start method 
        -> Now I extends this start method in derived petrol_car and diesel_car and it have engine so they can implement start logic and here our code follows LSP
        -> But next time Bicycle class extends the our base class vehicle but bicycle does not have engine so it can cannot implement start method so here LSP violets and breaking the correctness of our program

*/



class vehicle
{
    public:
    virtual void start() = 0;

};


class petrol_car:public vehicle
{
    public:
    void start() override
    {
        cout<<"petrol_car has started"<<endl;
    }

};

class diesel_car:public vehicle
{
    public:
    void start() override
    {
        cout<<"diesel_car has started"<<endl;
    }
};

// Till here our code follows LSP

// now what break the LSP 

class bicycle:public vehicle
{
    public:
    // it does not have any engine so it can not implement start method
    throw_exception();
};


int main()
{

    vehicle* ptr = new petrol_car();
    ptr->start();

    /*
    
     vehicle* ptr = new petrol_car();
     this can replaceable with
      vehicle* ptr = new diese_car();
    */

    vehicle* ptr1 = new diesel_car();
    ptr1->start();

    /*
    Till here our code follows LSP 
    */

    // Now our code breaks it LSP 
    vehicle* ptr = new bicycle();




    return 0;
}