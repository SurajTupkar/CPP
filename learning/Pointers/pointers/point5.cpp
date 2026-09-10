// Copying a pointer 

#include "iostream"
using namespace std;




int main()
{

    int a = 10;
    int* ptr = &a;
    cout<<"value of ptr before copying:"<<*ptr<<endl;
    cout<<"address of ptr before copying:"<<ptr<<endl;
    int* ptr1 = ptr;
    cout<<"value of ptr after copying:"<<*ptr1<<endl;
    cout<<"address of ptr after copying:"<<ptr1<<endl;
    

    cout<<"**********************"<<endl;

    int b = 20;
    int* ptr5 = &b;
    cout<<"value of b before updation:"<<b<<endl;
    *ptr5 = 50;
    cout<<"value of b after updation:"<<b<<endl;


    return 0;
}