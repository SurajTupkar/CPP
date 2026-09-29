#include "iostream"
#include "memory"
using namespace std;

class vehicle
{
    public:
    vehicle()
    {
        cout<<"vehicle's constructor called"<<endl;
    }

    void speed()
    {
        cout<<"speed method called"<<endl;
    }

    ~vehicle()
    {
        cout<<"vehicle's destructor called"<<endl;
    }


};

int main()
{
    // unique_ptr
    unique_ptr <vehicle> ptr = make_unique<vehicle>();  // constructor
    ptr->speed();  // speed
                  // destructor

    unique_ptr<vehicle>ptr1 = make_unique<vehicle>();
    ptr1->speed();

    // move semantics
    unique_ptr<vehicle>ptr2 = move(ptr1);

    // shared_ptr

    shared_ptr<vehicle>ptr3 = make_shared<vehicle>();
    ptr3->speed();
    shared_ptr<vehicle>ptr4 = ptr3;
    cout<<"Reference_Count:"<<ptr4.use_count()<<endl; // 2

    weak_ptr<vehicle>ptr5 = shared_ptr<vehicle>();
    if(auto temp=ptr5.lock())
    {
        temp->speed();
    }

    


    return 0;
}