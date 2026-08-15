#include "iostream"
using namespace std;

/*
Hybrid Inheritance
    -> Base class : One 
    -> Derived class : Multiple
*/

class base
{
    public:
    string base1_name;

    base()
    {
        cout<<"base's constructor called"<<endl;
    }

    ~base()
    {
        cout<<"base's destructor called"<<endl;
    }

};

class der1: public base
{
    public:
    string der1_name;

    der1()
    {
        cout<<"der1's constructor called"<<endl;
    }

    ~der1()
    {
        cout<<"der1's destructor called"<<endl;
    }
};

class der2:public base
{
    public:
    string der2_name;

    der2()
    {
        cout<<"der2's constructor called"<<endl;
    }

    ~der2()
    {
        cout<<"der2's destructor called"<<endl;
    }
};




int main()
{
    der2 *obj = new der2();
    obj->base1_name = "Base1_name";
    cout<<obj->base1_name<<endl;



    return 0;
}