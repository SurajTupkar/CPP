#include "iostream"
using namespace std;

/*

TOPICS :
    -> 1. Pointers
    -> 2. sizeof
    -> 3. Modify pointers value
    -> 4. copy pointer
    -> 5. move semantics with pointers
    -> 6. Types of pointers
        -> 1. wild pointer
            -> wild pointer is an unitialised pointer whose value is inderterminate and does not point to any valid object
        Example :
            int* ptr; -> This is wild pointer because it does not pointing to any valid object.

        -> 2. Null pointer
            -> 

Pointers :
    -> pointer is an variable which stores the address of another variable.
        -> example : let suppose i have a integer varibable x which stores the value 10 so now i can create an pointer y of int type so he can store address of x
            -> int x = 10;
            -> so int* y = &x;

    Q. size of x and pointer y ?
        -> size of x is 4 because it is a integer variable 
        -> size of pointer y is 8 because
        -> any type of pointer which holds 8 bytes of memory.


*/

int main()
{
    // pointers and references

    int x = 10;
    cout<<"address of x:"<<&x<<endl; 
    cout<<"Value of x:"<<x<<endl;
    cout<<"size of x:"<<sizeof(x)<<endl;

    int* ptr = &x;
    cout<<"address of x using pointer:"<<ptr<<endl;
    cout<<"value of x using pointer:"<<*ptr<<endl;
    cout<<"size of ptr:"<<sizeof(ptr)<<endl;

    // Modify the value through pointer
    *ptr = 50;
    cout<<"value of ptr:"<<*ptr<<endl;
    cout<<"value of x:"<<x<<endl;

    *ptr = 100;
    cout<<"value of ptr:"<<*ptr<<endl; // 100
    cout<<"value of x:"<<x<<endl; // 100

    int* ptr1 = ptr; // copy 
    cout<<"Value of ptr1:"<<*ptr1<<endl;
    cout<<"address of ptr1:"<<ptr1<<endl;

    int* ptr2 = move(ptr1);
    cout<<"value of ptr2:"<<*ptr2<<endl;
    cout<<"value of ptr1:"<<*ptr1<<endl;

    



    return 0;
}