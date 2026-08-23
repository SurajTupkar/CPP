/*
UpCasting
    -> Upcasting means converting a derived-class pointer or reference to a base-class pointer or reference.
DownCasting
    -> Downcasting means converting a base-class pointer or reference to a derived-class pointer or reference.
*/

#include "iostream"
using namespace std;


class vehicle{
    public:
    void start()
    {
        cout<<"start method of vehicle"<<endl;
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

    vehicle* ptr = new car();   // upcasting 
    ptr->start(); 
   // ptr->opensunroof();

   car carobj;
   car* carobjptr = &carobj;
   vehicle* vehptr = carobjptr; // Here we are doing upcasting because casting car's pointer to vehicle's pointer.
//    vehptr->opensunroof();

    vehicle* vehptrd = new vehicle();
    vehptrd->start();
    car* carptr = static_cast<car*>(vehptrd); // DownCasting :
   carptr->opensunroof();
   // carptr->start();




    return 0;
}