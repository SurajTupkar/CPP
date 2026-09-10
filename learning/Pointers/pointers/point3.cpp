#include "iostream"
using namespace std;

/*
Bad practise in Pointers :
    -> How to read this : int* p = &a;
        -> pointer to int is created and pointing to address of a
    

*/

int main()
{
    // Bad Practise
    int* ptr ; // we have created pointer to int ptr and pointing to gardbage address 
    cout<<*ptr<<endl; // garbage value
    cout<<ptr<<endl; // give address of any garbage value

    // so don not delcare the pointer always initialised it if we don't know the value always intialise with nullptr

    int* ptr1 = nullptr;
    cout<<"address of nullptr:"<<ptr1<<endl;
    cout<<"value of nullptr:"<<*ptr1<<endl;

    int* ptr2 = 0;
    cout<<"address:"<<ptr2<<endl;
    cout<<"value stored by ptr2:"<<*ptr2<<endl;





    return 0;
}