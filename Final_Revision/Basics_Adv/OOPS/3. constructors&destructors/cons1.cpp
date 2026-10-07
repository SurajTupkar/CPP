/*
constructor :
    -> It is a special member function of class that is automatically called when an object is created.

    Types
        1) Default constructor
            -> constructor can be called without any arguments

        2) Parameterised constructor
            -> A constructor that accepts parameters to initialize an object.

        3) copy constructor
            -> creates a new object by copying an existing object
*/


#include "iostream"
using namespace std;


class vehicle
{
    public:
    string name;
    // Default constructor
    vehicle()
    {
        cout<<"default constructor called"<<endl;
    }

    // parameterised constructor : 
    vehicle(string n)
    {
        this->name=n;
    }

    vehicle(const vehicle &obj)
    {
        this->name=obj.name;
    }


};

int main()
{
    vehicle* ptr = new vehicle();
    vehicle* ptr1 = new vehicle("suraj");
    cout<<"name:"<<ptr1->name<<endl;
    vehicle* ptr3 = new vehicle(*ptr1);
    cout<<"name from ptr3:"<<ptr3->name<<endl; 
    delete ptr;
    ptr = nullptr;

    return 0;
}