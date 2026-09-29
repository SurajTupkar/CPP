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
        cout<<"speed "<<endl;
    }

    ~vehicle()
    {
        cout<<"vehicle's destructor called"<<endl;
    }

};

int main()
{
    // unique_ptr<vehicle>ptr = make_unique<vehicle>();
    unique_ptr<vehicle> ptr = make_unique<vehicle>();
    unique_ptr<vehicle> ptr1 = make_unique<vehicle>();

    unique_ptr<vehicle>ptr3 = move(ptr);
    ptr3->speed();




    return 0;
}