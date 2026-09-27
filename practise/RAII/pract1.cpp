#include "iostream"
#include "memory"
using namespace std;

class vehicle
{
    public:

    vehicle()
    {
        cout<<"default constructor called"<<endl;
    }

    void speed()
    {
        cout<<"speed method called"<<endl;
    }

    ~vehicle()
    {
        cout<<"destructor called"<<endl;
    }

};


int main()
{
    unique_ptr<vehicle>ptr = make_unique<vehicle>();
    ptr->speed();

    // unique_ptr<vehicle>ptr1 = ptr1;   i can not do this because we can not copy ownership in unique_ptr
    unique_ptr<vehicle>ptr1 = move(ptr);
    ptr1->speed();


    shared_ptr<vehicle>ptr2 = make_shared<vehicle>();
    ptr2->speed();
    cout<<"reference:"<<ptr2.use_count()<<endl;
    shared_ptr<vehicle>ptr3 = ptr2;
    cout<<"reference:"<<ptr2.use_count()<<endl;

    shared_ptr<vehicle>ptr4 = make_shared<vehicle>();
    weak_ptr<vehicle>ptr5 = ptr4;
    if(auto temp = ptr5.lock())
    {
        temp->speed();
    }

    cout<<ptr5.use_count()<<endl;

    




    return 0;
}