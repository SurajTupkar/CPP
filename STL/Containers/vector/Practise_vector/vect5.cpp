#include "iostream"
#include "vector"
using namespace std;


class vehicle
{
    public:
    int value;
    vehicle()
    {
        cout<<"Default constructor"<<endl;
    }

    vehicle(int n) : value(n)
    {
        cout<<"parameterised constructor"<<endl;
    }

    vehicle(const vehicle& obj): value(obj.value)
    {
        cout<<"copy constructor"<<endl;
    }

    vehicle(vehicle&& obj) noexcept:value(obj.value)
    {
        cout<<"move constructor"<<endl;
    }

    ~vehicle()
    {
        cout<<"destructor"<<endl;
    }



};

int main()
{
    // cout<<"push_back_start"<<endl;
   // vehicle obj(10);  // para
    vector<vehicle>v;
    // v.push_back(vehicle(10));
    // cout<<"push_back_end"<<endl;
    v.emplace_back(20);



    return 0;
}