#include "iostream"
using namespace std;
/*
Encapsulation
    -> Is an oops mechanism where we can 
        -> Wrap-up our data members and member functions into a single unit and 
        -> That single unit we called it as class.
        -> It also help to achive data hiding by restricting direct access to data using 
           access specifiers
            -> public
            -> private
            -> protected

    Q. Why we need it ?
        -> To protect direct access to data.
        -> To control how data is access and modified

Topics :
    -> 1. class
    -> 2. objects
    -> 3. Access specifiers
    -> 4. constructors
        -> types
            -> default
            -> parameterised
            -> copy
    -> 5. destructors
    -> 6. constructor creation orders
    -> 7. destructor creation orders

*/

// class
class vehicle
{
    private:
    string vin;
    string veh_name;

    public:
    int veh_id;

    // setter
    void setvin(string vin)
    {
        this->vin = vin;
    }

    //getter
    string getvin()
    {
        return vin;
    }

    string getveh_name()
    {
        return veh_name;
    }


    // default constructor
    vehicle()
    {
        cout<<"default constructor called"<<endl;
    }

    // parameterised constructor
    vehicle(string veh_name)
    {
        this->veh_name = veh_name;
    }

    // copy constructor

    vehicle(const vehicle &cpyptr)
    {
        cout<<"copy constructor called"<<endl;
        this->veh_name = cpyptr.veh_name;
    }



    ~vehicle()
    {
        cout<<"destructor called"<<endl;
    }

};

int main()
{
    /*
    object :
        -> can create using 2 ways
            => static
            => dynamic
    */ 

    // static
    vehicle obj;
    obj.veh_id = 123;
    cout<<obj.veh_id<<endl;

    obj.setvin("VIN123");
    cout<<obj.getvin()<<endl;

    // dynamic
    vehicle *ptr = new vehicle("PHEV");
    ptr->veh_id = 890;
    cout<<ptr->veh_id<<endl;

    ptr->setvin("VIN890");
    cout<<ptr->getvin()<<endl;
    cout<<ptr->getveh_name()<<endl;

    vehicle* copyptr = new vehicle(*ptr);
    cout<<copyptr->getveh_name()<<endl;
    

    delete ptr;
    




    return 0;
}