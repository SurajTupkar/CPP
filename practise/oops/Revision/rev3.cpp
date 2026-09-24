#include "iostream"
using namespace std;


// multilevel
class vehicle
{
    public:
    void veh_start()
    {
        cout<<"veh_start_method"<<endl;
    }

};

class car : public vehicle
{
    public:
    void car_start()
    {
        cout<<"car_start_method"<<endl;
    }

};

class truck : public car
{
    public:
    void truck_start()
    {
        cout<<"truck_start_method"<<endl;
    }
};


int main()
{
    truck* ptr = new truck();
    ptr->veh_start();
    ptr->car_start();
    ptr->truck_start();



    return 0;
}