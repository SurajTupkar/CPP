#include "iostream"
using namespace std;


class vehicle
{
    public:
    int speed;
    vehicle(int speed)
    {
        this->speed=speed;
        cout<<"vehicle's default constructor called"<<endl;
    }

    vehicle(const vehicle& obj)
    {
        cout<<"copy constructor called"<<endl;
        cout<<obj.speed<<endl;
    }


};

int main()
{
    vehicle obj(100);
    vehicle obj1(obj);



    return 0;
}