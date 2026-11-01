/*
Constructor
    -> Constructor is an special member function of class that is automatically called 
    -> when an object is created.
    -> It's main purpose is to initialize an object

    NOTE :
        -> vehicle obj;
        -> obj.vehicle(); -> constructor called explcitly
            -> A constructor cannot be called explicitly like normal member function
            -> It is automatically invoked when an object is created.

    Types :
        -> 1. Default Constructor
        -> 2. Parameterised Constructor
        -> 3. Copy Constructor
        -> 4. Move Constructor

*/


#include "iostream"
using namespace std;


class vehicle
{
    public:

    // constructor
    vehicle()
    {
        cout<<"vehicle's constructor called"<<endl;
    }

};

int main()
{
    vehicle obj;
    // obj.vehicle(); -> we can not called constructor explicitly it gives us error


    return 0;
}