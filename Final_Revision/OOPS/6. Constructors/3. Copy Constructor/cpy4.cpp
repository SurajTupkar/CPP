#include "iostream"
using namespace std;


class vehicle
{
    public:
    string veh_name;
    int speed;

    vehicle() =default;

    // copy constructor
    vehicle(vehicle& obj)
    {
        cout<<"copy constructor called"<<endl;
        this->veh_name = obj.veh_name;
        this->speed = obj.speed;
    }

    void print()
    {
        cout<<"veh_name:"<<this->veh_name<<endl;
        cout<<"speed:"<<this->speed<<endl;
    }

};

int main()
{
    // copy assignment operator

    // statically
    vehicle obj;
    obj.veh_name = "SELTOS";
    obj.speed = 45;
    obj.print();

    vehicle obj1 = obj;
    obj1.print();

    // dynamically
    vehicle* ptr = new vehicle;
    ptr->veh_name = "Carens";
    ptr->speed = 49;
    ptr->print();
    cout<<"address of ptr:"<<ptr<<endl;

    vehicle* ptr1 = ptr;
    cout<<"address of ptr1:"<<ptr1<<endl;
    ptr1->print();






    return 0;
}