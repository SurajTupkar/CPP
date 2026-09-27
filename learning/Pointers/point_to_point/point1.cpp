/*
    pointer to pointer
        -> Double Pointer
*/  

#include "iostream"
using namespace std;


int main()
{
    int a = 10;
    cout<<"address of a using &a:"<<&a<<endl;
    cout<<"value of a using a:"<<a<<endl;
    int* ptr = &a;
    cout<<"address of a using ptr:"<<ptr<<endl;
    cout<<"value of a using *ptr:"<<*ptr<<endl;
    int** ptr1 =&ptr;
    cout<<"address:"<<ptr1<<endl;
    cout<<"address of a using *ptr1:"<<*ptr1<<endl;
    cout<<"value of a using **ptr1:"<<**ptr1<<endl;



    return 0;
}