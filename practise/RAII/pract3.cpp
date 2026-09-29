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

    // shared_ptr
    


    return 0;
}