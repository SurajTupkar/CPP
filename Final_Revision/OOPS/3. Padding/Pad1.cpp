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

*/

// example of internal padding
class vehicle
{
    public:
    char b;
    int a;
};


int main()
{
    vehicle obj;
    cout<<"sie of char b:"<<sizeof(obj.b)<<endl;
    cout<<"size of int a:"<<sizeof(obj.a)<<endl;
    cout<<"size of vehicle:"<<sizeof(obj)<<endl;



    return 0;
}