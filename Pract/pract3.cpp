#include "iostream"
using namespace std;

/*
class
    -> class is an user-defined data types 
        -> that contains
            -> Data Members and 
            -> Member Functions
    -> It acts as an blueprint for creating an objects.

object
    -> object is an instance of class.
    -> and we can access class's data members and member functions according to the access specifiers.
        -> ways to create object
            -> 1. static
            -> 2. dynamic

Encapsulation
    -> is an oops mechanism 
        -> where we can Wrap up our data memebers and member function into a single unit and 
            -> that single unit we called it as class
    -> Encapsulation provides data hiding by restricting direct access to data using access specifiers 
    
Access specifiers
    -> Access specifiers allows us to restrict direct access to data using access specifiers
        -> Types of Access specifiers
            -> 1. public
                -> public DM & MF accessible from anywhere means inside the class and outside the class.
            -> 2. private
                -> private DM & MF accessible within the class only.
            -> 3. protected
                -> protected DM & MF accessible within the class and it's derived class.
*/

// class 

// Encapsulation
class vehicle
{
    public: // access specifiers
    string veh_name; // DM

    private:
    void start()  // MF
    {
        cout<<"start method of vehicle"<<endl;
    }

    

};

int main()
{
    // object
    // 1. statically
    vehicle obj;
    obj.veh_name = "NEXON";
    
    // 2. dynamically
    vehicle* ptr = new vehicle();
    ptr->veh_name = "SIERA";
    cout<<ptr->veh_name<<endl;







    return 0;
}