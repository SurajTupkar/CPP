/*
Padding
    -> Padding means unused bytes added by the compiler
    -> between data memebers or at the end of the class/structure

Q. Why padding is required ?
    -> Padding is added to satisfy memory alignment requirements

    Types
        -> 1. Internal Paddinng
            -> When compiler adds extra bytes between two data members 
                to satisfy the alignment requirements of the next member
        -> 2. Trailing Padding
            -> When compiler adds extra bytes at the end of a class or structure


*/


#include "iostream"
using namespace std;


/*
Internal padding 
-> class vehicle is an example of internal padding
    -> char b 
        -> 1 byte
        -> 3 byte padding i.e Internal Padding
        -> means 0-3
    -> int a 
        -> 4 bytes
        -> means 4-7
    -> Total size : 8 bytes
*/ 
class vehicle
{
    char b;
    int a;

};

/*
Trailing Padding
    -> int a 
        -> 4 bytes
    -> char b 
        -> 1 byte
            +
        -> 3 bytes padding

    -> Total size -> 8 Bytes

*/
class vehicle1
{
    int a;
    char b;

};


int main()
{

    vehicle obj;
    // size of obj = 8 without padding
    cout<<"size of class in Internal Padding:"<<sizeof(obj)<<endl; //8

    vehicle1 obj1;
    cout<<"size of class in Trailing Padding:"<<sizeof(obj1)<<endl;


    return 0;
}