#include "iostream"
using namespace std;

// Copy Assignment operator

class vehicle
{
    public:
    string veh_name;
    int speed;

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
    obj.veh_name = "NEXON";
    obj.speed = 80;
    obj.print();

    // Default Copy Constructor called while using copy assignment operator
    vehicle obj1 = obj;
    obj1.print();

    // Dynamically

    vehicle* ptr = new vehicle();
    ptr->veh_name = "AERIS";
    ptr->speed = 20;
    ptr->print();

    // Default copy constructor called while using copy assignment operator
    vehicle* ptr1 = ptr;
    ptr1->veh_name = "Brezza";
    ptr1->print();



    return 0;
}