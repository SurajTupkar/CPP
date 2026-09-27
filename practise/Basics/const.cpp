#include "iostream"
using namespace std;


int main()
{
    // const variable

    // const int a = 10;
    // cout<<a<<endl;
    // a = 20; // allowed 
    // cout<<a<<endl; 

    // const int a;
    // a = 20;

    // pointer to const

    int a =10;
    int b =20;

    const int *p = &a;
    //*p = 20;
    p = &b;


    return 0;
}