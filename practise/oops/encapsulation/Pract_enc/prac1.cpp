#include "iostream"
using namespace std;

class vehicle
{
    // private
    float vin;

    public:
    string veh_name;

    void setvin(float vin)
    {
        this->vin = vin;
    }

    float getvin()
    {
        return vin;
    }


};


int main()
{
    vehicle* ptr = new vehicle();
    ptr->veh_name = "nexon";
    cout<<ptr->veh_name<<endl;
    ptr->setvin(56.25);
    cout<<ptr->getvin()<<endl;
    delete ptr;

    return 0;
}