/*
smart pointers
    -> is an objects that manages dyanamically allocated resources automatically
        -> Types :
            -> 1. unique_ptr
            -> 2. weak_ptr
            -> 3. shared_ptr


1. unique_ptr :
    -> is a smart pointer that provides exclusive ownership of a dynamically allocated object
    -> It can not be copied but it's ownership can be transferred using move semantics
    -> when unique_ptr goes out of the scope it automatically release the owned object using RAII.


*/


#include "iostream"
#include "memory"
using namespace std;

class vehicle
{
    public:
    vehicle()
    {
        cout<<"vehicle's default constructor is called"<<endl;
    }

    ~vehicle()
    {
        cout<<"vehicle's destructor is called"<<endl;
    }


    void speed()
    {
        cout<<"speed of vehicle"<<endl;
    }
    


};



int main()
{

    unique_ptr<vehicle>ptr1 = make_unique<vehicle>();
    ptr1->speed();

    // not create copy of ownership but it's tranferable using move semantics
    unique_ptr<vehicle>ptr2 = std::move(ptr1);
    if(ptr1 != nullptr)
    {
        ptr1->speed();
    }
    else
    {
        cout<<"ptr1 is nullptr"<<endl;
    }
    ptr2->speed();





    return 0;
}