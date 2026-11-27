#include "iostream"
using namespace std;

// Default Copy Constructor

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
    obj.veh_name = "3XO";
    obj.speed = 90;
    obj.print();
    vehicle obj1(obj);  // Default Copy Constructor will called
    obj1.print();

    // dynamically
    vehicle* ptr = new vehicle();
    ptr->veh_name = "XUV7XO";
    ptr->speed = 0;
    ptr->print();
    vehicle* ptr1 = new vehicle(*ptr);  // Default Copy Constructor will called
    ptr1->print();




    return 0;
}