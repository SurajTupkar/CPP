#include "iostream"
using namespace std;


int main()
{

    int a = 10;
    void* ptr = &a;
    cout<<ptr<<endl;
    // cout<<*ptr<<endl;  // cannot dereference void ptr

    cout<<*(static_cast<int*>(ptr))<<endl;


    char ch = 'A';
    void* ptr1 = &ch;
    cout<<"value of ch:"<<ch<<endl;
    cout<<"value of ch:"<<*(static_cast<char*>(ptr1))<<endl;

    double b = 12.90;
    void* ptr3 = &b;
    cout<<"value of b:"<<b<<endl;
    cout<<"value of b:"<<*(static_cast<double*>(ptr3))<<endl;





    return 0;
}