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

class C : public A, public B
{
    public:
    void display()
    {
        cout<<"C"<<endl;
    }

};

int main()
{
    C *obj = new C;
    obj->display(); // error: request for member 'display' is ambiguous

    //obj->C::display();



    return 0;
}