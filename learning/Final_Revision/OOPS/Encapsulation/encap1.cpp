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


*/

// class
class vehicle
{
    private:
    string vin;

    public:
    int veh_id;

    void setvin(string vin)
    {
        this->vin = vin;
    }

    string getvin()
    {
        return vin;
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
    




    return 0;
}