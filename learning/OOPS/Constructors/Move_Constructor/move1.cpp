#include "iostream"
using namespace std;


class vehicle
{
    public:
    string name;

    vehicle()
    {
        cout<<"Default Constructor"<<endl;
    }

    vehicle(vehicle&& mvc)
    {
        cout<<"move constructor called"<<endl;
    }



};

int main()
{
    vehicle obj1;
    vehicle obj2(move(obj1));



    return 0;
}