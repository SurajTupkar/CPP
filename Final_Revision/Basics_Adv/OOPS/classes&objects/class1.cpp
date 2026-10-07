/*
Class
    -> class is a user defined data type
    that contains
        -> data members
        -> member functions and,
    -> It acts as a blueprint for creating objects

*/

/*
Objects
    -> object is an instance of class
    -> it has it's own state
    -> It can access class's data members and member functions according to the access specifiers.


*/

#include "iostream"
using namespace std;

// class 
class vehicle
{
    // access specifiers
    public:
    string veh_name;  // data members 
    void start()     // member functions
    {
        cout<<"start the vehicle"<<endl;
    }

    private:  
    int VIN;

};

int main()
{
    // objects 
    // we can create objects using statically and dynamically

    // statically -> object store at stack
    vehicle obj;
    obj.start();
    
    // dynamically -> object store at the heap memory and need to delete it manually
    vehicle* ptr = new vehicle();
    ptr->start();
    delete ptr;

    // but this ptr pointing to an memory address which is not available so this is an dangling pointer so we need to intiliase it to the nullptr;

    ptr = nullptr;



    return 0;
}

