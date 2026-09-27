#include "iostream"
using namespace std;

/*
Encapsulation :
-> Encapsulation is an oops mechanism where we can wrap our data members and member functions into a single unit.
-> That single unit is our class.
-> We can achive data hiding using Encapsulation which restrict direct access to data using access specifiers like 
   private and protected.
-> We can use getter and setter public methods to access to restricted data outside the class.

*/

/*
-> class
-> objects
    -> static
    -> dynamic
-> Access specifiers
-> getter and setter
-> constructors
    -> Default
    -> Parameterised
    -> Copy
*/

class Vehicle
{
    private :
    string veh_name;

    protected:
    int veh_id;

    public:
    int vin;

    // setter
    void setveh_name(string name)
    {
        this->veh_name = name;
    }

    string getveh_name()
    {
        return veh_name;
    }

    // default constructor
    Vehicle()
    {
        cout<<"Calling Default Constructor"<<endl;
    }

    // parameterised constructor
    Vehicle(string veh_name)
    {
        this->veh_name = veh_name;
        cout<<"This is default Constructor with veh_name as input:"<<veh_name<<endl;
    }

    // copy constructor
    Vehicle(Vehicle &ptr)
    {
        this-> veh_name = ptr.veh_name;
        cout<<"veh_name_copy_constructor:"<<veh_name<<endl;
    }


};


int main()
{
    // static -> stack
    Vehicle obj;
    obj.vin=12345;
    cout<<"VIN:"<<obj.vin<<endl;
    obj.setveh_name("PHEV_P20");
    cout<<"our vehicle_name_static:"<<obj.getveh_name()<<endl;

   // Vehicle obj1(obj);

    // dyanamic -> heap 
    Vehicle *p = new Vehicle("K10");
    p->vin = 6789;
    cout<<"VIN_Dynamic:"<<p->vin<<endl;
   // p->setveh_name("Frontier");
    cout<<"our vehicle_name_dynamic:"<<p->getveh_name()<<endl;
    Vehicle *q = new Vehicle(obj);



    return 0;
}