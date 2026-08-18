/*
Diamond Problem :
-> See what happen in diamond problem or what is diamond problem ?
    -> See when we have a hybrid inheritance 
        -> what is hybrid inheritance ?
            -> combination of 2 or more types of inheritance 
                -> Multiple Inheritance + Hierarchical Inheritance = Hybrid Inheritance

    -> Now When we combine this two types of inheritance it creates diamond like structure.
  
                        A
                     /    \
                    B       C  
                     \     /
                        D

    -> Now we have two paths :
        -> D B A
        -> D C A
    -> Now the problem is when i have int value in A class in it's a B class'part and C class's part
       so we got int value 2 times so it's copies of same value and the problem it is.
    -> So this problem is resolve with virtual inheritance.

    -> But before that see below classes and structure 
        -> I have int value in Class A and class B and class C inherit properties from A 
           and D inherit properties from B and C.
        -> When I create a object of D then what's in my D's object memory
            -> B subobject
                -> contains A
            -> C subobject
                -> contains A
            -> D's part 
        -> So when i initialise int value from B it's 10 and C it's 20
        -> When object is created A is initialse and 
            -> A's constructor called and print 10
            -> B's constructor called
            -> A's constructor called and print 20
            -> C's constructor called
            -> D's constructor called
        -> So now i have 10 and 20 values for int A in class A and Class B
    -> So i can resolve this using virtual inheritance
        -> So i mark virtual A inherited B and inherited by C
    -> So what happens
        -> D needs to initialse A 
        -> Then A's constructor called
        -> Then value 100
        -> B's constructor called
        -> C's constructor called
        -> D's constructor called

*/    

#include "iostream"
#include <String>
using namespace std;

class A
{
    public:
    int value;

    A(int v) : value(v)
    {
        cout<<"A's Constructor called"<<endl;
        cout<<v<<endl;
    }


};

class B : virtual public A
{
    public:
    string name;
    B():A(10)
    {
        cout<<"B's constructor called"<<endl;
    }

};

class C : virtual public A
{
    public:
    int age;
    C():A(20)
    {
        cout<<"C's Constructor called"<<endl;
    }

};

class D : public B, public C
{
    public:
    D():A(100)
    {
        cout<<"D's Constructor called"<<endl;
    }



};



#include "iostream"
using namespace std;


int main()
{
    D obj;


    return 0;
}