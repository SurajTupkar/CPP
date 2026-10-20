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

            -> Question : Why pointer should not be wild or uninitialised ?
                -> Dereferencing it can cause undefined behavior, 
                    including crashes or invalid memory access.
                -> To avoid this, we should initialize pointers with a valid object address or nullptr.

        -> 2. Null pointer
            -> means our pointer does not pointing to any valid object,
            -> so instead of uninitialising the pointer we can initialise with nullpointer so it can not gives us undefined pointer.

            Example :

            int* ptr = nullptr;

            

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

    // wild or uninitialised pointer
    int* ptr3;
    cout<<*ptr3<<endl;

    if(ptr3==nullptr)
    {
        cout<<"ptr3 is an nullptr"<<endl;
    }
    else
    {
        cout<<"ptr3 is an nullptr"<<endl;
    }
    
    // nullptr

    // void pointer

    /*
    void pointer
        -> pointer which can hold the address of any type of pointer
        -> but we can not deference it directly we need to cast it to valid type of pointer
            -> If we try to deference it will give "'void*' is not a pointer-to-object type"
    */

    int z = 10;
    void* ptr4 = &z;
    int* intptr = static_cast<int*>(ptr4);
    cout<<*intptr<<endl;
    
    



    return 0;
}