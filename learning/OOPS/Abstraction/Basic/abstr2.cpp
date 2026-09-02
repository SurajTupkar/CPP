/*
1. What is abstraction
2. What is pure virtual function
3. what is abstract class
     -> An abstract class is a class that contains at least one pure virtual function and cannot be      instantiated directly. It is generally used as a base class to define a common interface for derived classes.
4. Why does a pure virtual function make the class abstract, and what exactly is an abstract class?
5. Can an abstract class have a constructor, destructor, normal functions, and data members?
    -> Yes, absolutely. An abstract class can have all of these.

Note :
    Important interview point

-> Abstract class does NOT mean "a class containing only pure virtual functions."

It simply means:
-> A class having at least one pure virtual function is an abstract class.

And although we cannot create:
Vehicle v;   // ❌

its constructor does execute when a derived object is created:

Car c;      // Vehicle constructor → Car constructor

That's an important point for interviews.


6. Can we create an object of an Abstract Class?
    -> We cannot create an object of an abstract class because it contains at least one pure virtual function whose implementation is incomplete at the abstract-class level. However, we can create an object of a derived concrete class and use a base-class pointer to refer to it.

Note :
                    Pure virtual function
                            ↓
                    class becomes abstract
                            ↓
                    cannot create its object
                            ↓
                    can create derived-class objects



Note :
    A base pointer can access any member declared in the base class. If that member is virtual, the derived implementation can execute through runtime polymorphism. Derived-specific members are not directly accessible through the base pointer; we need downcasting if we specifically need them.
*/

#include "iostream"
using namespace std;


class vehicle
{
    public:
    //Constructor, destructor, normal functions, and data members

    void start()
    {
        cout<<"normal start_function"<<endl;
    }

    int speed;

    vehicle()
    {
        cout<<"vehicle's constructor"<<endl;
    }

    virtual ~vehicle()
    {
        cout<<"vehicle's destructor"<<endl;
    }

    void virtual stop() = 0;

   

};

class car:public vehicle
{
    public:
    void stop() override
    {
        cout<<"Car stop"<<endl;
    }

    void service()
    {
        cout<<"service method of car"<<endl;
    }

    car()
    {
        cout<<"car's constructor called"<<endl;
    }

    ~car()
    {
        cout<<"car's destructor called"<<endl;
    }




};

int main()
{
    vehicle* ptr = new car();
    ptr->stop();
    ptr->start();
    car* carptr = dynamic_cast<car*>(ptr);
    carptr->service();
    delete ptr;





    return 0;
}