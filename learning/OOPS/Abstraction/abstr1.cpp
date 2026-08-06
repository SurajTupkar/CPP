#include "iostream"
using namespace std;

class car
{
    public:
    virtual void start() = 0;

    car()
    {
        cout<<"abstract class"<<endl;
    }

};

class sport:public car
{

    public:
    int speed;
    string brand;

    sport(int s,string b)
    {
        this->speed = s;
        this->brand = b;
    }

    void start()
    {
        cout<< this->brand << " is start and running at speed: "<<this->speed<<endl;
    }


};


int main()
{
    car *p = new sport(18,"NEXON");
    p->start();

    return 0;
}