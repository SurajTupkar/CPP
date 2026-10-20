#include "iostream"
#include "memory"
using namespace std;


/*
RAII
    -> RAII stands for Resource Acquisition is intialisation
    -> Means lifetime of resource is tied to the lifetime of object
    -> Resource are allocated during object creation and automatically releases when an object is destroyed.

    Examples of RAII
        -> Smart Pointers
            -> 1. unique_ptr
                -> unique_ptr is an smart pointer that provides exclusive ownership of dyanmically allocated resources
                -> it's ownership can not be copied but we can transfered using move semantics
                -> when unique_ptr goes out of the scope the own object automatically destroyed using RAII.
            -> 2. shared_ptr
            -> 3. weak_ptr
        -> Mutex locks

    


*/

class vehicle
{
    public:
    vehicle()
    {
        cout<<"default constructor called"<<endl;
    }

    ~vehicle()
    {
        cout<<"destructor called"<<endl;
    }



};

int main()
{
    // unique_ptr
    unique_ptr<vehicle>ptr = make_unique<vehicle>();
    unique_ptr<vehicle>ptr1 = move(ptr);
    if(ptr==nullptr)
    {
        cout<<"ptr is nullptr"<<endl;
    }
    else
    {
        cout<<"ptr is not nullptr"<<endl;
    }



    return 0;
}