/*
size of empty class:
    -> An empty class has size of at least 1 byte
    -> because every object must have unique_address
    -> Even if the class containes no data members the compiler allocate 1 byte to maintain it's object identity



*/

#include "iostream"
using namespace std;


class vehicle
{
   
};

int main()
{
    vehicle obj;
    vehicle obj1;
    cout<<"size of vehicle class:"<<sizeof(obj)<<endl;
    cout<<"address of obj:"<<&obj<<endl;
    cout<<"address of obj1:"<<&obj1<<endl;



    return 0;
}