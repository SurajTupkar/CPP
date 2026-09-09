#include "iostream"
using namespace std;


class vehicle
{

    public:


};

int main()
{
    vehicle* ptr = new vehicle();
    cout<<"size of vehicle type of pointer:"<<sizeof(ptr)<<endl;

    int a = 20;
    int* ptr1 = &a;
    cout<<"size of int type of pointer:"<<sizeof(ptr1)<<endl;




    return 0;
}