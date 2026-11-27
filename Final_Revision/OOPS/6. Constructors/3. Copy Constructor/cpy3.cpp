#include "iostream"
using namespace std;

// copy constructor

class vehicle
{
    public:
    string veh_name;
    int speed;

    vehicle() = default;
    // copy constructor called

    vehicle(vehicle& temp)
    {
        this->veh_name = temp.veh_name;
        this->speed = temp.speed;
    }

    void print()
    {
        cout<<"veh_name:"<<this->veh_name<<endl;
        cout<<"speed:"<<this->speed<<endl;
    }
};

int main()
{
    // statically
    vehicle obj;
    obj.veh_name = "3XO";
    obj.speed = 30;
    obj.print();
    vehicle obj1(obj);  // copy constructor called
    obj1.print();

    // dynamically
    vehicle* ptr = new vehicle;
    ptr->veh_name = "KIA";
    ptr->speed = 40;
    ptr->print();

    vehicle* ptr1 = new vehicle(*ptr); // copy constructor called
    ptr1->print();









    return 0;
}