/*
classes and objects 

class 
    -> class is an user-defined data type 
        that contains
            -> Data Members and
            -> Member Functions 
    -> It act as a blueprint for creating objects.

object
    -> object is an instance of class
    -> It has it's own state 
    -> It can access Data Member and member function of class according to the access specifiers
    
        -> Ways to create object
            -> 1. static
            -> 2. dynamic

Access specifiers
    -> Access specifiers allows us to retrict direct access to data,
    -> so with the help of access specifiers we can achieve data hiding
        -> Types
            1. public
                -> public DM & MF can access from anywhere
            2. private
                -> private DM & MF only accessible within the class
            3. protected
                -> protected DM & MF accessible within the class and it's derived class.
                
*/




#include "iostream"
using namespace std;

// class 
class vehicle
{
    public:
    // Data Members
    string veh_name;

    // member functions
    void start()
    {
        cout<<"Start vehicle"<<endl;
    }

    private:


};

int main()
{
    // object 
    vehicle obj; // statically
    obj.start();

    vehicle* obj1 = new vehicle(); // dynamically
    obj1->start();





    return 0;
}