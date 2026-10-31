/*
Empty class
    -> If i have created an empty class which means it does not have a single DM or MF
    -> and I have created an object of that class
    -> then the size of class still have 1 byte of memory 

How and Why ?
    -> an empty class object generally has a size of 1 byte.
        -> Even though the class has no data members, C++ requires every object to have a unique memory address.
        -> If an empty object had size 0, multiple objects of the same class could occupy the same address, which would create problems with object identity.

Therefore, the compiler gives an empty class at least 1 byte of storage.


Interview-ready answer

-> "An empty class has a size of at least 1 byte because every object in C++ must have a unique address. Even if the class contains no data members, the compiler allocates 1 byte to maintain its object identity."

-> Interview point: Empty class size is typically 1 byte, but its exact size is implementation-dependent.

*/



#include "iostream"
using namespace std;

//  Empty class
class vehicle
{


};



int main()
{
    vehicle obj;
    vehicle obj1;
    vehicle* ptr = new vehicle();
    cout<<"size of obj:"<<sizeof(obj)<<endl; // size of empty object -> 1 byte -> for identification or 
    // 1 byte of memory address will allocate to make a track.
    cout<<"size of obj1:"<<sizeof(obj1)<<endl; // 1
    cout<<"address of obj: "<<&obj<<endl;
    cout<<"address of obj1:"<<&obj1<<endl;
    cout<<sizeof(ptr)<<endl;




    return 0;
}