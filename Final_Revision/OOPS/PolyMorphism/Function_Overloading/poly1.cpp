/*
Polymorphism :
    -> If we have to understand polymorphism in simple words
    -> So we can understand it by dividing polymorphism into 2 words
        -> First  : poly     -> Many
        -> Second : Morphism -> Forms
    -> So it means the same interface/function name can represent different behaviour.
    Types 
        -> 1. Compile-Time Polymorphism (Static Polymorphism)
            -> Types
                -> 1. Function overloading
                -> 2. Operator Overloading
        -> 2. Run-Time Polymorphism (Dynamic Polymorphism)
                -> 1. Function overriding



*/

#include "iostream"
using namespace std;

/*
Compile-Time Polymorphims
    -> 1. Function overloading
        -> Means having multiple functions with the same name but different parameter list.
IMP RULE :
    -> Function name must be same, but the parameter list must be different
        -> Parameter list can differ by :
            -> 1. No of parameters
            -> 2. Type of parameters
            -> 3. Order of parameters
*/

class vehicle
{
    public:
    void start()
    {
        cout<<"vehicle is starting"<<endl;
    }


    void start(int speed)
    {
        cout<<"vehicle is started and running at speed:"<<speed<<endl;
    }

    void start(int speed, float avg)
    {
        cout<<"vehicle is started and running at speed:"<<speed<<" and giving average:"<<avg<<"km/ltr"<<endl;
    }


};
int main()
{
    vehicle *ptr = new vehicle();
    ptr->start();
    ptr->start(60);
    ptr->start(60,30);
    delete ptr;


    return 0;
}