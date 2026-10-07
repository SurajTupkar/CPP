#include "iostream"
using namespace std;


class vehicle
{
    public:
    virtual void start() = 0;

    vehicle()
    {
        cout<<"vehicle's constructor called"<<endl;
    }

    virtual ~vehicle()
    {
        cout<<"vehicle's destructor called"<<endl;
    }

};

class car:public vehicle
{
    public:
    void start() override
    {
        cout<<"car start"<<endl;
    }

    

    car()
    {
        cout<<"car's constructor called"<<endl;
    }

    ~car()
    {
        cout<<"car's destructor called"<<endl;
    }



};

int main()
{
    vehicle* ptr = new car();
    delete ptr;
    ptr = nullptr;

    // vehcle' constructor
    // car's constructor
    // car's destructor
    // vehicle's destructor




    return 0;
}