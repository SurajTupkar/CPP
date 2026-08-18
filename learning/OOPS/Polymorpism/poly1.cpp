#include "iostream"
using namespace std;

/*
# without virtual function
    -> base class and derived class have same function name but the different logic
    -> so when we create base class pointer and derived class object 
    -> and calling the function it calls base class function everytime
    -> so this problem solve by virtual function 

-> virtual function
    -> we make base class's function as a virtual and
    -> override the same function in derived class
    -> so when we create base class pointer and derived object
    -> then derive's function will call. 

*/

class vehicle
{
    public:
    // virtual
     void start()
    {
        cout<<"vehicle start";
    }

};

class car:public vehicle
{
    public:
     void start() // override
    {
        cout<<"car start";
    }

};

int main()
{
    vehicle *p = new car();
    p->start();  //car start -> vehicle start

    return 0;
}