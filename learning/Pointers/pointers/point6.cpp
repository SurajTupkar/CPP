// Pointer Arithmetic

#include "iostream"
using namespace std;


int main()
{
    int a = 10;
    int* ptr = &a;
    cout<<"a++:"<<a++<<endl;
    cout<<"*ptr++:"<<(*ptr)++<<endl;
    cout<<"address of a:"<<ptr<<endl;
    cout<<"address of a++:"<<ptr++<<endl;
    cout<<"address of a after increment:"<<ptr<<endl;


    return 0;
}