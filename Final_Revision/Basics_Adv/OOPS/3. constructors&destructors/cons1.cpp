/*
constructor :
    -> It is a special member function of class that is automatically called when an object is created.

    characteristics
        1) Same name as the class
        2) No return type, not even void
        3) Automatically called when object is created
        4) Used mainly to initialize the object's data members
        5) Can be overloaded
        6) Cannot be static

    Types
        1) Default constructor
            -> constructor can be called without any arguments

        2) Parameterised constructor
            -> A constructor that accepts parameters to initialize an object.

        3) copy constructor
            -> creates a new object by copying an existing object

    copy assignment operator 
        -> Both objects already exist and one is assigned to another → Copy Assignment

    Destructor
        -> A destructor is a special member function that is automatically called when an object is destroyed. It is mainly used to release resources held by the object.
*/


#include "iostream"
using namespace std;


class vehicle
{
    public:
    string name;
    //1. Default constructor
    vehicle()
    {
        cout<<"default constructor called"<<endl;
    }

    //2. parameterised constructor : 
    vehicle(string n)
    {
        this->name=n;
    }

    //3. copy constructor
    vehicle(const vehicle &obj)
    {
        this->name=obj.name;
    }

    // destructor
    ~vehicle()
    {
        cout<<"destructor called"<<endl;
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

    // copy assignment operator 
    // Both objects already exist and one is assigned to another → Copy Assignment

    vehicle obj;
    vehicle obj1;
    obj=obj1;

    return 0;
}