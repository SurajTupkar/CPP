#include "iostream"
#include "mutex"
using namespace std;

/*
RAII
    -> Resource Allocation Is Initialization
    -> Lifetime of resource is tied to the lifetime of object
    -> Means resource is allocated during object creation and automatically destroyed when object is destroyed.
        -> Example of resources
            -> 1. mutex lock 
            -> 2. Dynamic memory
                -> smart pointers
                    -> unique
                    -> weak
                    -> shared


*/



mutex mtx;
int main()
{
    // mutex
    lock_guard<mutex> lock(mtx);

    /*
        
        mtx.lock();
   
        //some function
   
        mtx.unlock();

    
    */
   


    return 0;
}