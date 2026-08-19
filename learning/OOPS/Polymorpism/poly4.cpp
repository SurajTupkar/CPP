/*

Polymorphism 
    -> If we have to understand the what is polymorphism in simple words
    -> we can understand it by dividing the polymorphism words into
            poly     - Many
            morphism - Forms 
    -> So , It means the same interface/function name can represent the different bahaviour

    OR

    -> Polymorphism is an oops mechanism where, the same interface/function name can have different behaviour.
    -> It mainly achieve at compile time through function and operator overloading.
    -> And at runtime through the function overriding and virtual functions.


    Types :
        -> 1. Compile Time or Static Polymorphism
            -> Achieve through
                -> 1. Function overloading
                -> 2. Function overriding
        
        -> 2. RunTime or Dynamic Polymorphism
            -> Achive through
                -> Function overriding + virtual functions


    Function Overloading
        -> In Function Overloading we have same function name but different parameters list
            -> Parameter list can be differe by
                -> 1. No.of parameters
                -> 2. Type of parameters
                -> 3. Order of parameters

*/


#include "iostream"
using namespace std;

class Vehicle
{
    public:

    void service(int km)
    {
        if(km>500)
        {
            cout<<"Doing Regular Servicing after "<<km<<" kilometer"<<endl;
        }
    }

    void service(int km, int months)
    {
        if(km == 1000 & months == 3)
        {
            cout<<"Doing Detailed Servicing once kilometer is 1000 and months 3"<<endl;
        }
    }


};

int main()
{
    //  Function overloading
    Vehicle *ptr = new Vehicle();
    ptr->service(700);
    ptr->service(1000,3);

    delete ptr;



    return 0;
}