#include "iostream"
using namespace std;


class vehicle{
    public:
    void start()
    {
        cout<<"vehicle starting"<<endl;
    }

};

class car:public vehicle
{
    public:
    void opensunroof()
    {
        cout<<"opening sunroof of car"<<endl;
    }


};

int main()
{
    // upcasting
    vehicle* vehptr = new car();
    vehptr->start();

    // another way of upcasting : implicit
    car obj;
    vehicle* vehprt1 = &obj;
    vehptr->start();

    // another way of upcasting : implicit
    car* obj1 = new car();
    vehicle* ptr = obj1;
    ptr->start();

    // DownCasting : explicit

    vehicle* ptr1 = new vehicle();
    
    car* carobj = static_cast<car*>(ptr1);
    carobj->opensunroof();



    return 0;
}