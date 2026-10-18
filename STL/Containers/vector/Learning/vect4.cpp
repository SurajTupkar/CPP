/*
Difference between push_back and emplace_back
*/


#include "iostream"
#include "vector"
using namespace std;

class vehicle
{
    public:
    int value;

    vehicle()
    {
        cout<<"Default constructor called"<<endl;
    }

    vehicle(const vehicle& cpyctor)
    {
        cout<<"copy constructor called"<<endl;
    }

    vehicle(vehicle&& movectror)
    {
        cout<<"move constructor called"<<endl;
    }

    ~vehicle()
    {
        cout<<"Destructor called"<<endl;
    }

};


int main()
{
    //vehicle obj; // default , destructor
    vector<vehicle>v;
    v.push_back(vehicle()); // push_back -> object copy into the vector and same with emplace_back
    /*
    1.
    till here 
    default constructor called
    destructor called
    destructor called
    Note : two times destructor called because first destructor for object we have created
    second one is for the object present in the vector
    */

    /*
    2.
    when i create copy constructor 
    so result will be 
        -> default constructor -> for object we have created
        -> copy constructor -> for object we are copying to the vector
        -> then two destructor for both constructor

    NOTE : Same for push_back and emplace_back
    
    */

    /*
    3.
    If i create move constructor still 
    default 
    copy 
    destructor 
    destructor 
    this order comes when we have already created object
    */

    /*
    4.
    -> if we does not have already object is present
    -> and we have assign at the time of push_back then that time move constructor will called instead of copy constructor
    -> and two destructor called    
    */


    return 0;
}