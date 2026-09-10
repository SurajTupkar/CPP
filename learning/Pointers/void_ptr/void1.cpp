#include "iostream"
using namespace std;


int main()
{

    int a = 10;
    void* ptr = &a;
    cout<<ptr<<endl;
    // cout<<*ptr<<endl;  // cannot dereference void ptr

    cout<<*(static_cast<int*>(ptr))<<endl;





    return 0;
}