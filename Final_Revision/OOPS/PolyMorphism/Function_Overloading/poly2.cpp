#include "iostream"
using namespace std;

// Function overloading with const by value
// Function overloading with by reference

class vehicle
{
    public:

    void service(int &km)
    {
        cout<<"servicing at "<<km<<":km"<<endl;
    }

   // error: 'void vehicle::service(int)' cannot be overloaded with 'void vehicle::service(int)'
    void service(const int &km)   
    {
        cout<<"servicing at every "<<km<<":km"<<endl;
    }
    



};

int main()
{
    vehicle *ptr = new vehicle();
    int km = 10;
    const int km1 = 100;
    ptr->service(km);
    ptr->service(km1);


    return 0;
}