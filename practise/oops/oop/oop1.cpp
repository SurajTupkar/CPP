/*
Ambiguity in multiple inheritance
    -> What is Multiple Inheritance
        -> I have 2 base class and a derived class
        -> So if i have similar method in both base class and i created object of derived class and caling that method 
        our compiler gets confuse to call which method so scope resolution operator resolve this ambiguity.
        -> Can see in below's example

*/
#include "iostream"
using namespace std;

class A
{
    public:
    void display()
    {
        cout<<"A"<<endl;
    }


};


class B
{
    public:
    void display()
    {
        cout<<"B"<<endl;
    }

};

class C:public A, public B
{
    public:
    void display()
    {
        cout<<"C"<<endl;
    }

};


int main()
{
    C *p = new C();
    p->display();



    return 0;
}