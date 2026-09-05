/*
Lazy & Eager Initialization:
    -> We have created object before executing main method

Advantage :
    -> It will make simple to our singleton class. 

Disadvantage :
    -> if a class have expensive operation 
        -> our class is lightweight but in real project class may have expensive operation when we trying to create 
            an object it take too much memory of system.
    -> Let suppose we create object before starting application and let's suppose if this object never called then we have wasted our memory.

    Note : It's not a practical but it will use when we have lightweight object 
*/

#include <iostream>
#include <mutex>
using namespace std;

class singleton
{
    private:
    static singleton* instance;
    static mutex mtx;
    singleton()
    {
        cout<<"default construtor called"<<endl;
    }

    public:
    static singleton* getInstance()
    {
        // if(instance == nullptr)
        // {
        //     lock_guard<mutex> lock(mtx);
        //     if(instance == nullptr)
        //     {
        //         instance = new singleton();
        //     }
        // }
        return instance;

    }
    
};
singleton* singleton::instance = new singleton();
mutex singleton::mtx;
int main()
{
    singleton* ptr1 = singleton::getInstance();
    singleton* ptr2 = singleton::getInstance();

    cout<<(ptr1==ptr2)<<endl;

    delete ptr1,ptr2;



    return 0;
}