#include "iostream"
using namespace std;


class vehicle
{
    public:
    int speed;
    vehicle()
    {
        speed = 100;
    }
};

int main()
{
    vehicle obj;
    cout<<obj.speed<<endl;



    return 0;
}