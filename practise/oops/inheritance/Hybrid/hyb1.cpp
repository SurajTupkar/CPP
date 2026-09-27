#include "iostream"
using namespace std;

class A
{
    public:
    int value;
    A(int v):value(v)
    {
        cout<<"value of A:"<<v<<endl;

    }
};

class B:virtual public A
{
    public:
    B():A(10)
    {

    }

};

class C:virtual public A
{
    public:
    C():A(20)
    {

    }
    
};

class D: public C, public B
{
    public:
    D():A(200)
    {

    }

};

int main()
{
    D* ptr = new D();
    // ptr->B::value=100;
    // ptr->C::value=200;
    // cout<<ptr->B::value<<endl;
    // cout<<ptr->C::value<<endl;
    delete ptr;




    return 0;
}