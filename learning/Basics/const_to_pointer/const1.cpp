#include "iostream"
using namespace std;

int main()
{
    int a = 10;
    int b = 30;
    const int *p = &a;
    //*p = 20;  // Not allowed : pointer can not modify it's value it points to.
    p = &b;     // Allowed : it can point to another address.

    int c = 50;
    int *q = &c;
    c = 60;
    cout<<*q<<endl;


    return 0;
}