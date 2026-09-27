#include "iostream"
using namespace std;


class vehicle
{
    public:
    virtual void start() = 0;
    vehicle()
    {
        cout<<"vehicle's constructor"<<endl;
    }

    virtual ~vehicle()
    {
        cout<<"vehicle's destructor"<<endl;
    }



};

class car:public vehicle
{
    public:

    void start()
    {
        cout<<"this is car's start method"<<endl;
    }
    car()
    {
        cout<<"car's constructor"<<endl;
    }

    ~car()
    {
        cout<<"car's destructor"<<endl;
    }
};

int main()
{

    vehicle* ptr = new car();
    delete ptr;
  




    return 0;
}