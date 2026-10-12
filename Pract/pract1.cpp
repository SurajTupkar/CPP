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
      
                
Encapsulation 
    -> OOPS mechanism 
        -> where we can  Wrap data members and member functions into a single unit 
        -> that single unit we called class
    -> We can achieve data hiding by restricting direct access to data using access specifiers like public,private and protected.

Constructors 
    -> Constructor is a special member function of class that will automatically called when an object is created.
    -> It's mainly used to initialise an data memebrs of object.

    Types :
        1) Default Constructors
            -> Constructor will be called without any argument.
        2) Parameterised Constructor
            -> Constructor will be called with argument to initialise an object's data memebers.
        3) Copy Construtor
            -> Copy constructor is used to create an new object from existing one means 
            -> We are doing copy of one object to another.
        
        4) Copy Assignment
            -> Copy assignment means we can copy one object to other when have already created object
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

    // constructor
    // Default Constructor
    vehicle()
    {
        cout<<"default constructor callled"<<endl;
    }

    // Parameterised constructor
    vehicle(string veh_name)
    {
        this->veh_name=veh_name;
        cout<<"veh_name:"<<this->veh_name<<endl;
    }

    // copy constructor
    vehicle(const vehicle& obj)
    {
        this->veh_name = obj.veh_name;
        cout<<"veh_name through copy constructor: "<<this->veh_name<<endl;
    }

    private:


};

int main()
{
    // object 
    vehicle obj; // statically
    obj.start();

    vehicle* obj1 = new vehicle("XUV"); // dynamically
    obj1->start();

    vehicle obj3("seltos");
    vehicle obj2(obj3);
    //cout<<obj2.veh_name<<endl;

    obj3 = obj2; // copy assignment operator
    obj3.start(); 






    return 0;
}