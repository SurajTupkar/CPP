#include "iostream"
using namespace std;


class Vehicle
{
    public:
    string brand;

    private :
    int speed;

};

class car : public Vehicle
{
    public:
    int doors;


};

class truck : public car
{
    public:
    int tyres;

};

int main()
{

    truck t;
    t.brand="BMW";
    cout<<t.brand<<endl;

    


    return 0;
}