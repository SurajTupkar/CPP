#include "iostream"
using namespace std;


/*
Default Constructor :
    -> Default Constructor will called when we have not send any input argument at the time of object creation

*/


class vehicle
{
    public:
    vehicle()
    {
        cout<<"Default Constructor called"<<endl;
    }

};

int main()
{
    // static
    vehicle obj; // Default Constructor called

    // dynamic
    vehicle* ptr = new vehicle();
    






    return 0;
}