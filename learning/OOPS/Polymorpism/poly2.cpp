/*
Polymorphism

    -> types 2
        -> 1. compile type polymorphism / static polymorphism
            -> Achieve using 
                -> Function Overloading
                -> Operator Overloading
        -> 2. Runtime polymorphism / Dynamic Polymorphism
            -> Achieve using
                -> Function overriding


1. Function overloading 
    -> A class contains multiple similar name function but different type of arguments or difference in no. of arguments

*/

#include "iostream"
using namespace std;

class Add
{
    public:
    int add(int a, int b)
    {
        return a+b;
    }

    double add(double a, double b)
    {
        return a+b;
    }



};


int main()
{
    Add obj;
    cout<<obj.add(10,20)<<endl;
    cout<<obj.add(19.21,20.21)<<endl;


    return 0;
}