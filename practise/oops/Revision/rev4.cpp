// Multiple Inheritance

#include "iostream"
using namespace std;


class vehicle
{
    public:
    void start()
    {
        cout<<"starting"<<endl;
    }

};

class car
{
    public:
    string car_type(string type)
    {
        cout<<"car_type:";
        return type;
    }
};

class truck:public car, public vehicle
{
    public:
    void truck_start()
    {
        cout<<"starting truck"<<endl;
    }

};

int main()
{
    truck* ptr = new truck();
    ptr->truck_start();
    cout<<ptr->car_type("diesel")<<endl;
    ptr->start();


    return 0;
}