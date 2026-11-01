/*
Padding
    -> Padding means unused bytes added by the compiler
    -> between data memebers or at the end of the class/structure

    

*/


#include "iostream"
using namespace std;



class vehicle
{
    int a;
    char b;

};


int main()
{

    vehicle obj;
    // size of obj = 8 without padding


    return 0;
}