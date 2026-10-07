#include "iostream"
using namespace std;

/*
Encapsulation 
    -> Encapsulation is an oops mechanism where we can wrap up our data member and member functions into the single unit
        -> that single unit we called it as class
    -> Encapuslation helps to achieve data hiding by restricting data access to data using access specifiers like
        -> public
        -> private
        -> protected
    -> to set and get(access) the private data member we can use public getter and setter method

*/

class vehicle
{
    // access specifiers
    public:
    string veh_name;

    // setter -> use to set the value to the data member
    void setveh_id(string id)
    {
        this->veh_id = id;
    }

    // getter -> use to get the value from the data member
    string getveh_id()
    {
        return veh_id;
    }
    private:
    string veh_id;
    protected:

};

int main()
{
    vehicle* ptr = new vehicle();
    ptr->setveh_id("ABC_1234");
    cout<<ptr->getveh_id()<<endl;


    return 0;
}