#include "iostream"
using namespace std;

/*
    Pointers
        -> Symbol Table
        -> Address of Operator (&)
        -> Pointer 
            -> Pointer is used to store the address of another variable

*/

int main()
{

    int a = 10;
    cout<<"value of a:"<<a<<endl;
    cout<<"address of a:"<<&a<<endl;

    int* ptr = &a;
    /*
        Decode this line : int* ptr = &a;
         -> &a : & is a address of operator means address of a
         -> int* ptr : means ptr is pointer of type int
         -> So pointer ptr is storing address of a
         ->  
    
    */
    cout<<"address of a:"<<ptr<<endl;

    cout<<"value using deference ptr pointer:"<<*ptr<<endl;

    int* ptr1 = nullptr;
    if(ptr == nullptr)
    {
        cout<<"nullptr"<<endl;
    }
    else
    {
        cout<<"not nullptr"<<endl;
    }

    cout<<ptr1<<endl; 




    return 0;
}