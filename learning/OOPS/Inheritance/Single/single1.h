#include "iostream"
using namespace std;


class A
{

    public:
    int a;
    void print()
    {
        cout<<"This is A class"<<endl;
    }

};

class B : public A
{
    public:
    int b;
    void print1()
    {
        cout<<"This is class B"<<endl;
    }

};