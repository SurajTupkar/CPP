#include "iostream"
using namespace std;

/*
Padding :
    -> Unused bytes added by the compiler
    -> between data members or at the end of the class/struct

Types
    -> Internal Padding
        -> When compiler adds extra bytes between two data members to satisfy the alignment requirement of next member
    -> Trailing Padding
        -> When compiler adds extra bytes at the end of a class or structure
        
*/

// example of internal padding
class vehicle
{
    public:
    char b;
    int a;
};

// example of trailing padding

class veh
{
    int a;
    char b;

};


int main()
{
    vehicle obj;
    cout<<"size of char b:"<<sizeof(obj.b)<<endl;
    cout<<"size of int a:"<<sizeof(obj.a)<<endl;
  //  cout<<"size of string str:"<<sizeof(obj.str)<<endl;
    cout<<"size of vehicle:"<<sizeof(obj)<<endl;

    veh obj1;
    cout<<"size of veh:"<<sizeof(obj1)<<endl;



    return 0;
}