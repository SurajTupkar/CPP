#include "iostream"
using namespace std;


class A{
    public :
    int age;
    string name;
    bool gender;

    A()
    {
        cout<<"Base class constructor"<<endl;
    }

    ~A()
    {
        cout<<"Base class Destructor"<<endl;
    }

};

class B:public A
{
    public:
    B()
    {
        cout<<"Derived Class Constructor"<<endl;
    }

    ~B()
    {
        cout<<"Derived Class Destructor"<<endl;
    }

};

int main()
{
    B *obj = new B();
    delete obj;



    return 0;
}