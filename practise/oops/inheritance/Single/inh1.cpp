#include "iostream"
using namespace std;

/*
single inheritance
    -> Where a derived class inheritance properties of base class
*/

class vehicle
{
    public:
    string veh_name;
    float vin;
    private:
    void start()
    {
        cout<<"starting_engine"<<endl;
    }
};

class car:public vehicle
{
    public:
    
};

int main()
{
    car* ptr = new car();
    ptr->veh_name="altroz";
    cout<<ptr->veh_name<<endl;
    return 0;
}