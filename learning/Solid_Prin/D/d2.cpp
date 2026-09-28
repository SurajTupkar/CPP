#include "iostream"
using namespace std;

/*
Now Both high level modules and low level modules depends on abstraction
*/

// abstraction/interface
class IEngine
{
    public:
    void virtual start() = 0;
};

// high level modules -> depends on abstraction
class vehicle
{
    private:
    IEngine* ptr;
    public:
    vehicle(IEngine* ptr)
    {
        this->ptr=ptr;
    }

    void veh_start()
    {
        ptr->start();
    }

};


// low level modules -> depends on abstraction
class car:public IEngine
{
    public:
    void start() override
    {
        cout<<"car is started"<<endl;
    }

};

class truck:public IEngine
{
    public:
    void start() override
    {
        cout<<"truck is started"<<endl;
    }

};



int main()
{
    car obj;
    vehicle obj1(&obj);
    obj1.veh_start();
    


}