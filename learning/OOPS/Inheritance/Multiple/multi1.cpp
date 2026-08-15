#include "iostream"
using namespace std;

/*
Multiple Inheritance :
    -> Derived class : Only one
    -> Base class : More than one 
    -> A derived class can inherit properties and behaviour of more than one base class.
    
*/

class base1
{
    public:
    string base1_name;

    base1()
    {
        cout<<"Base1's constructor"<<endl;
    }


};

class base2
{
    public:
    string base2_name;
    base2()
    {
        cout<<"Base2's constructor called"<<endl;
    }

};


class derived : public base1,base2
{
    public:
    string der_name;

    derived()
    {
        cout<<"derived's constructor called"<<endl;
    }


};



int main()
{
    derived *obj = new derived();
    obj-> base1_name = "Base1_name";
    cout<<obj->base1_name<<endl;



    return 0;
}