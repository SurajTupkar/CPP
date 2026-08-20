#include "iostream"
using namespace std;

/*
Function Overloading 
    -> With Default Arguments
        -> error: call of overloaded 'service(int)' is ambiguous

*/

class vehicle
{
    // 1. Function overloading with default arguments
    //      -> gives : error: call of overloaded 'service(int)' is ambiguous
    public:
    /*
    void service(int km)
    {
        cout<<"servicing after kilometer "<<km<<endl;
    }

    void service(int km , int cost = 2000)
    {
        cout<<"servicing after kilometer "<<km<<" and the cost is "<<cost<<endl;
    }
    */

    // Ambiguous call :
    //    -> error: call of overloaded 'service(int)' is ambiguous

    void service(long km)
    {
        cout<<"long km servicing"<<endl;
    }

    void service(double km)
    {
        cout<<"double km servicing"<<endl;
    }


};

int main()
{
    vehicle obj;
   // obj.service(10);
    // obj.service(100,3000);
   // obj.service(1000); // error: call of overloaded 'service(int)' is ambiguous

//    but can resolve using 
obj.service(1000L);
obj.service(1000.0);



}