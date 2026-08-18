/*
Function overriding :
    ->

*/

#include "iostream"
using namespace std;


class Vehicle
{
    public:
  virtual void start()
    {
        cout<<"vehicle start"<<endl;
    }
};

class Car:public Vehicle
{
    public:
    void start()
    {
        cout<<"car start"<<endl;
    }

};

class Bus:public Vehicle
{
    public:
    void start()
    {
        cout<<"Bus start"<<endl;
    }
};

int main()
{

    Vehicle *p = new Car();
    Vehicle *q = new Bus();
    p->start();
    q->start();

    // Car obj1;
    // obj1.start();
    // Bus obj2;
    // obj2.start();


    return 0;
}