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

    truck *t =new truck() ; 
    t->brand="BMW";
    t->doors = 4;
    cout<<t->brand<<endl;
    cout<<t->doors<<endl;

    


    return 0;
}