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