/*
Interface :
C++ doesn't have a separate interface keyword like Java. We achieve interface-like behavior using an abstract class with pure virtual functions. The interface defines what operations a class must provide, while the derived class provides the actual implementation.C++ doesn't have a separate interface keyword like Java. We achieve interface-like behavior using an abstract class with pure virtual functions. The interface defines what operations a class must provide, while the derived class provides the actual implementation.
*/

#include "iostream"
using namespace std;

class Vehicle
{
public:
    virtual void start() = 0;
};

class PetrolCar : public Vehicle
{
public:
    void start() override
    {
        cout << "Petrol engine started";
    }
};

/*
You can explain:

"Here, start() is part of the Vehicle interface. It defines that every Vehicle must have a start() operation, but it doesn't define how the vehicle starts. PetrolCar provides its own implementation."

Then:

Vehicle* ptr = new PetrolCar();
ptr->start();

Say:

"Because I'm using a common Vehicle interface, I can access the appropriate implementation through a Vehicle*. Due to virtual dispatch, PetrolCar::start() is called."

🔥 One-line version if interviewer wants a short answer

"An interface defines what a class should do, while the implementing class defines how it does it; in C++, we commonly achieve this using abstract classes with pure virtual functions."

Remember:
Vehicle → interface/contract
start() → operation in that interface
PetrolCar::start() → implementation

*/

int main()
{



    return 0;
}