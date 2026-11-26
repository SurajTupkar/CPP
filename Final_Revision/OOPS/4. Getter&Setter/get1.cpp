#include "iostream"
using namespace std;

// getter and setter : public member functions are use when we have set and access the value of private data members

class vehicle
{
    string veh_name;
    int vin;
    string type;

    public:
    // setter : to set the value
    void setveh_name(string veh_name)
    {
        this->veh_name = veh_name;
    } 

    // getter : to get the value
    string getveh_name()
    {
        return veh_name;
    }

};

int main()
{
    vehicle* ptr = new vehicle();
    ptr->setveh_name("XUV700");
    cout<<"vehicle_name:"<<ptr->getveh_name()<<endl;




    return 0;
}