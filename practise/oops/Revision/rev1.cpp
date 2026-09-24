/*
-> Classes and Objects
    -> Types of object creation
        -> Static
        -> Dynamic
-> Encapsulation
    -> Access specifiers
        -> public
        -> private
    -> getter and setter
     
Inheritance
    -> Access specifier : protected
    -> Types
        -> Single
        -> Multiple
        -> Multilevel
        -> Hierarchical
        -> Hybrid
        -> Diamond problem
        
Polymorphism
    -> Types of poly
        -> Static Poly
            -> Function overloading
        -> RunTime Poly
            -> Function overriding
        

*/

#include "iostream"
using namespace std;

class vehicle
{
    private:
    string key;

    public:
    string vin;

    // setter
    void setkey(string key)
    {
        this->key = key;
    }

    // getter
    string getkey()
    {
        return key;
    }

};

int main()
{
    // objects
    vehicle obj; // statically
    obj.vin="VIN_001";
    cout<<obj.vin<<endl;

    obj.setkey("Key_100");
    cout<<obj.getkey()<<endl;

    // dynamically
    vehicle* ptr = new vehicle();
    ptr->vin = "VIN_002";
    cout<<ptr->vin<<endl;
    ptr->setkey("Key_101");
    cout<<ptr->getkey()<<endl;




    return 0;
}