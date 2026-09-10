#include "iostream"
using namespace std;


class vehicle
{

    public:


};

int main()
{
    /*
    Any type of pointer will store 8 bytes of memory
    
    */
    vehicle* ptr = new vehicle();
    cout<<"size of vehicle type of pointer:"<<sizeof(ptr)<<endl;

    int a = 20;
    int* ptr1 = &a;
    cout<<"size of int type of pointer:"<<sizeof(ptr1)<<endl;

    /*
    move semantics
        -> We can transfer one object to another
    */     
    int b = 30;
    int c = move(b);
    cout<<"value of b:"<<b<<endl;
    cout<<"value of c:"<<c<<endl;




    return 0;
}