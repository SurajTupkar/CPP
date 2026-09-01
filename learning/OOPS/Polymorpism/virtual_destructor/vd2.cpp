/*
Before virtual destructor:
    -> When i have create 
        -> vehicle* ptr = new car();

-> Ya ha pe kya ho raha hai sbase pehle object create ho raha hai i.e new car()
-> and iss object me kya hoga base class ka subobject and khud ka part hoga
-> to ye kya karega base class ka constructor call karega then apna 
-> means order like
   -> after new car();
   -> vehicle's constructor
   -> car's constructor 

-> now next what happen
-> abhi jo car ka object bana hai jisme vehicle means base ka subobject and derived ka khud ka apna part hai to 
-> after this vehicle* ptr 
-> to ye ptr sirf vehicle k subobject ko point karega ... correct ?

isliye destructor iska hi call hoga means ~vehicle() and data members and member functions bhi iske hi call krr payenge ... correct ?


1. Object creation
    Vehicle* ptr = new Car();

First:
    new Car();

-> creates a Car object.

Conceptually:

Car object
┌──────────────────────┐
│ Vehicle subobject    │
│ Vehicle data         │
├──────────────────────┤
│ Car's own part       │
│ Car data             │
└──────────────────────┘
Correct. ✅

2. Constructor order
    -> Because the object is a Car:
            Vehicle constructor
                    ↓
            Car constructor

Correct. ✅
The base class constructor executes first, then the derived class constructor.


3. Then Vehicle* ptr
    After the Car object is created:
        Vehicle* ptr = ...

-> ptr is a Vehicle pointer, and it points to the Vehicle base-class subobject inside the Car object.

Conceptually:
Car object
┌──────────────────────┐
│ Vehicle subobject ◄──┼── ptr
│                      │
├──────────────────────┤
│ Car's own part       │
└──────────────────────┘

-> So yes, this part of your understanding is correct. ✅


4. Member access
    Because ptr is:
    Vehicle*

-> the compiler allows you to access Vehicle's members:
 ptr->start();       // ✅

But:
ptr->car_start();   // ❌

because Vehicle doesn't declare car_start().
Correct. ✅


5. BUT — destructor ❗
    -> This is the one correction.

You said:
    -> "isliye destructor iska hi call hoga means ~Vehicle()"

Not necessarily.
If you have:
    Vehicle* ptr = new Car();

and then:
    delete ptr;

the behavior depends on whether the Vehicle destructor is virtual.


Without virtual destructor
~Vehicle()
    is not virtual → deleting the derived object through Vehicle* is undefined  behavior

With virtual destructor
virtual ~Vehicle()

then:
        Car destructor
            ↓
        Vehicle destructor

-> Both are called in the correct order. ✅
*/

#include "iostream"
using namespace std;

class vehicle
{
    public:
    vehicle()
    {
        cout<<"vehicle's constructor"<<endl;
    }

    ~vehicle()
    {
        cout<<"vehicle's destructor"<<endl;
    }

};

class car:public vehicle
{
    public:
    car()
    {
        cout<<"car's constructor"<<endl;
    }

    ~car()
    {
        cout<<"car's destructor"<<endl;
    }

};

int main()
{
    vehicle* ptr = new car(); 
    /*
    Without virtual destructor:
        what happens after this :
            -> vehicle's constructor called
            -> car's constuctor called
            -> after delete ptr 
                -> vehicle's destructor called

    with virtual destructor
        what happens after this :
            -> vehicle's constructor called
            -> car's constructor called
            -> after delete ptr
                -> car's destructor called
                -> vehicle's destructor called
    
    */
    delete ptr;



    return 0;
}


