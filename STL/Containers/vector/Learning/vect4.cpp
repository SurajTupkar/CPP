/*
Difference between push_back and emplace_back
*/


#include "iostream"
using namespace std;

class vehicle
{
    public:
    int value;

    vehicle()
    {
        cout<<"Default constructor called"<<endl;
    }

    ~vehicle()
    {
        cout<<"Destructor called"<<endl;
    }

};


int main()
{
    vehicle obj; // default , destructor



    return 0;
}