#include "iostream"
using namespace std;


int main()
{

    // ways of creating pointers :

    // 1. ways

    int a = 10;
    int* ptr = &a;
    cout<<"value of a:"<<a<<endl;
    cout<<"value of a:"<<*ptr<<endl;
    cout<<"address of a:"<<&a<<endl;
    cout<<"address of a:"<<ptr<<endl;

    // 2. way

    int b = 20;
    int* ptr1 = 0;
    ptr1=&b;

    cout<<"value of b:"<<b<<endl;
    cout<<"value of b:"<<*ptr1<<endl;
    cout<<"address of b:"<<&b<<endl;
    cout<<"address of b:"<<ptr1<<endl;

    // 3. way

    int c = 30;
    int* ptr3 = nullptr;
    ptr3 = &c;
    cout<<"value of c:"<<c<<endl;
    cout<<"value of c:"<<*ptr3<<endl;
    cout<<"address of c:"<<ptr3<<endl;
    cout<<"address of c:"<<&c<<endl;

    // 4. 




    return 0;
}