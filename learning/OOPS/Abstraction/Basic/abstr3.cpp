/*
Multiple Pure Virtual Functions
    -> An abstract class can contain more than one pure virtual function.
        -> like vehicle class have start,stop,accelerate 
    -> Since vehicle has pure virtual functions, it is an abstract class.

    -> Now car must provide implementations for all of them.
        -> What if Car doesn't implement all of them?
            -> Car is still abstract ❌ because:
                -> stop()       → not implemented
                -> accelerate() → not implemented

Important rule :
-> If a derived class doesn't implement every pure virtual function inherited from the base class, the derived class also becomes abstract.


Q: Can an abstract class have multiple pure virtual functions?
    ->  Yes. An abstract class can contain one or multiple pure virtual functions. A derived class must implement all inherited pure virtual functions to become a concrete class.

*/



#include "iostream"
using namespace std;


class vehicle
{
    public:

    void virtual start() = 0;
    void virtual stop() = 0;
    void virtual accelerate() = 0;

};

class car:public vehicle
{
    public:

    void start()
    {
        cout<<"start method implement in car"<<endl;
    }

    
     void stop()
    {
        cout<<"stop method implement in car"<<endl;
    }

     void accelerate()
    {
        cout<<"accelerate method implement in car"<<endl;
    }
    




};


int main()
{
    vehicle* ptr = new car();
    



    return 0;
}