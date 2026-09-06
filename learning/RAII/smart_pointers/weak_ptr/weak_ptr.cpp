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

    ~vehicle()
    {
        cout<<"vehicle's destructor called"<<endl;
    }

    void speed()
    {
        cout<<"vehicle's speed method called"<<endl;
    }



};


int main()
{
    shared_ptr<vehicle> ptr = make_shared<vehicle>();
    ptr->speed();
    weak_ptr<vehicle> ptr1 = ptr;
    //ptr1->speed();
    if(auto temp=ptr1.lock())
    {
        temp->speed();
    }
    cout<<"reference count:"<<ptr1.use_count()<<endl;




    return 0;
}