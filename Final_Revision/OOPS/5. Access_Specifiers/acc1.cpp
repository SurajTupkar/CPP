/*
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


class vehicle
{
    // Access specifiers
    // 1. public: DM & MF which are public access from anywhere means from the class and outside the class
    public:
    string veh_name;

    // 2. private : DM & MF which are private access only from the same class
    private:
    int speed;

    // 3. protected : DM & MF which are protected access from the same class and from it's derived class
    protected:

    // 4. getter and setter : public member functions are use when we have set and access the value of private data members

    public:

    void setspeed(int speed)
    {
        this->speed = speed;
    }

    int getspeed()
    {
        return speed;
    }
};


int main()
{
    vehicle* ptr = new vehicle();
    ptr->veh_name = "3XO";
    cout<<"veh_name:"<<(*ptr).veh_name<<endl;
    cout<<"veh_name:"<<ptr->veh_name<<endl;

    ptr->setspeed(50);
    cout<<"speed:"<<ptr->getspeed()<<endl;




    return 0;
}