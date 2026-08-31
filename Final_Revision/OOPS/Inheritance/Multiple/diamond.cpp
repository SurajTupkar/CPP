#include "iostream"
using namespace std;

class A
{
    public:
    int value;
    A(int v):value(v)
    {
        cout<<"value of v:"<<value<<endl;
        cout<<"A's constructor called"<<endl;
    }
};

class B:public A
{
    public:
     B():A(10)
    {
        cout<<"B's constructor called"<<endl;
    }

};

class C:public A
{
    public:
    C():A(20)
    {
        cout<<"C's constructor called"<<endl;
    }
};

class D:public B, public C
{
    public:
    D()
    {
        cout<<"D's constructor called"<<endl;
    }
};


int main()
{
    D obj;
    /*
    obj.value=20; // error: request for member 'value' is ambiguous
        -> obj is does not know which value he has to been assigned is it for B's subobject's value or C's subobject's value
    */
   obj.B::value=20;
   cout<<"Value of B's subobject A:"<<obj.B::value<<endl;
    //    cout<<obj.B::value<<endl; 

   obj.C::value=30;
   cout<<"Value of C's subobject A:"<<obj.C::value<<endl;




    return 0;
}