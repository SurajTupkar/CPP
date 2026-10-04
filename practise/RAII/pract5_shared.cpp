#include "iostream"
#include "memory"
using namespace std;

/*
shared_ptr
    -> smart pointers where multiple pointers can own the same object.
    -> we can copy the ownership of object and while copying it will increase reference count.

*/

class vehicle
{
    public:
    string veh_name;

};

int main()
{
    shared_ptr<vehicle>ptr=make_shared<vehicle>();
    cout<<"Reference_Count:"<<ptr.use_count()<<endl;

    shared_ptr<vehicle> ptr1 = ptr;
    cout<<"Reference_Count:"<<ptr.use_count()<<endl;

    shared_ptr<vehicle> ptr2 = move(ptr);
    cout<<"Reference_Count:"<<ptr.use_count()<<endl; // 0 because ptr become nullptr

    if(ptr==nullptr)
    {
        cout<<"nullptr"<<endl;
    }
   



    return 0;
}