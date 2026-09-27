/*
Abstraction
│
├── 1. What is Abstraction?
│
├── 2. Why do we need Abstraction?
│
├── 3. How C++ achieves Abstraction
│
├── 4. Pure Virtual Function ⭐
│
├── 5. Abstract Class ⭐
│
├── 6. Can we create an object of Abstract Class?
│
├── 7. Base Pointer → Derived Object
│      Vehicle* ptr = new Car();
│
├── 8. Multiple Pure Virtual Functions
│
├── 9. Abstract Class with Normal Functions
│
├── 10. Interface concept in C++
│
└── 11. Abstraction vs Encapsulation ⭐


*/

/*
├── 4. Pure Virtual Function ⭐
│       -> A virtual function initialises with 0
├── 5. Abstract Class ⭐
        -> A class which contains atleast one pure virtual function
*/


#include "iostream"
using namespace std;


class vehicle
{
    public:
    virtual void start() = 0;

};

class car:public vehicle
{
    public:
    /*
        without overriding pure virtual function we can not create an object of derived class also 
        it will give an error.

        error: invalid new-expression of abstract class type 'car'
   65 |      vehicle* ptr = new car(); //error: invalid new-expression of abstract class type 'car'

        note: because the following virtual functions are pure within 'car':
   50 | class car:public vehicle
    */

    void start() override
    {
        cout<<"this is start function"<<endl;
    }



};


int main()
{
     vehicle* ptr = new vehicle(); 




    return 0;
}

