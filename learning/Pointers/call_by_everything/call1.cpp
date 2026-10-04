#include "iostream"
using namespace std;

// call by value
void sum_value(int a , int b)
{
    a = 50;
    b = 60; 
    cout<<"Sum:"<<a+b<<endl;
}

// call by reference
void sum_reference(int &a , int &b)
{
    a = 50;
    b = 60; 
    cout<<"Sum:"<<a+b<<endl;
}

// call by pointer
void sum_pointer(int* a, int* b)
{
    *a = 100;
    *b = 200;
    cout<<"sum:"<<*a+*b<<endl;
}

int main()
{
    int a = 10;
    int b = 20;

    sum_value(a,b); // call  by value
    cout<<"Value of a:"<<a<<" value of b:"<<b<<endl;
    sum_reference(a,b);  // call by reference
    cout<<"Value of a:"<<a<<" value of b:"<<b<<endl;
    sum_pointer(&a,&b); // call by pointer
    cout<<"Value of a:"<<a<<" value of b:"<<b<<endl;






    return 0;
}