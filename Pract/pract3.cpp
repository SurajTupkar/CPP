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

Constructor
    -> special memeber function of class that will be called automatically when an object is created.
        -> Types of constructor
            -> 1. Default
                -> Constructor with no argument
            -> 2. Parameterised
                -> Constructor with taking argument in input
            -> 3. Copy
                -> we can copy object from one to another
    Characterstics
        -> 1. Same name as a class name
        -> 2. No return type even void also
        -> 3. can be overload
        -> 4. can not be virtual
        -> 5. can not be static
        -> 6. can not be virtual
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

    public:
    // constructor
    vehicle()
    {
        cout<<"Default Constructor called"<<endl;
    }

    vehicle(string veh_name)
    {
        this->veh_name = veh_name;
        cout<<"Parameterised constructor called"<<endl;
        cout<<"veh_name under constructor:"<<this->veh_name<<endl;
    }

    vehicle(const vehicle& obj)
    {
        cout<<"Copy Constructor called"<<endl;
        this->veh_name = obj.veh_name;
    }

    ~vehicle()
    {
        cout<<"Destructor called"<<endl;
    }

};

int main()
{
    // object
    // 1. statically
    vehicle obj;
    obj.veh_name = "NEXON";
    
    // 2. dynamically
    vehicle* ptr = new vehicle("XUV");
    ptr->veh_name = "SIERA";
    cout<<ptr->veh_name<<endl;

    vehicle obj2;
    obj2.veh_name = "SELTOS";
    vehicle obj3(obj2);
    cout<<obj3.veh_name<<endl;


    delete ptr;
    ptr = nullptr;

    return 0;
}