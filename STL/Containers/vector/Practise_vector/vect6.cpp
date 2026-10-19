#include "iostream"
#include "vector"
using namespace std;


class vehicle
{
    public:
    int value;

    vehicle()
    {
        cout<<"default constructor"<<endl;
    }

    vehicle(int n) : value(n)
    {
        cout<<"parameterised constructor"<<endl;
    }

    vehicle(const vehicle& cpy)
    {
        cout<<"copy constructor called"<<endl;
    }

    vehicle(vehicle&& cpy1)
    {
        cout<<"move constructor called"<<endl;
    }

    ~vehicle()
    {
        cout<<"destructor called"<<endl;
    }


};



int main()
{
    //vehicle obj(10);
    vector<vehicle> v1;
    vehicle obj; // default constructor
    vehicle obj1(move(obj)); // move constructor
    //v1.push_back(obj);
    v1.emplace_back(20); // parameterised constructor
    v1.push_back(obj1);



    return 0;
}