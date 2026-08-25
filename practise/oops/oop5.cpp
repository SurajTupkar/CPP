// upcasting and downcasting:

#include "iostream"
using namespace std;

class vehicle
{
    public:
   virtual void start()
    {
        cout<<"vehicle start"<<endl;
    }
};

class car:public vehicle
{
    public:
    void car_start()
    {
        cout<<"car_starting"<<endl;
    }

};

int main()
{
    // upcasting
    vehicle* ptr = new car();
    /*
    ptr->car_star(); // not honar because ptr vehicle cha means base class pointer so we can not access derived class method thorugh base class pointer
    error: 'class vehicle' has no member named 'car_star'
    */
   ptr->start();

   /*
        Downcasting : for what ?
            -> if i have created base class pointer and derived object so i can't access derived class method
            -> so that's why i need base class to be cast into derived
   */ 
    
    // DownCasting using static_cast :
    vehicle *ptr1 = new car();
    car* carptr = static_cast<car*>(ptr1);
    carptr->car_start();
    carptr->start();

    /*
        both method car_start() and start() accessible through carptr because the actual object type is car i.e derived so in the derived object contain base class subobject so we can access both class methods.
    */

    // but if i have done like this 

    vehicle* ptr2 = new vehicle();
    car* carptr2 = static_cast<car*>(ptr2);
    carptr->start(); 
    carptr->car_start(); // ❌ Unsafe : because compiler not checking actual object type so that's why dynamic_casting comes into the picture.
    // invalid downcast → undefined behavior if used as a Car

    // car* carptr = dynamic_cast<car*>(ptr1);
    // if(carptr != nullptr)
    // {
    //     carptr->car_start();
    // }
    // else
    // {
    //     cout<<"carptr is nullptr"<<endl;
    // }

    /*
        Downcasting using dynamic_cast;
            -> So, What is dynamic_cast in downcasting
                -> first we understand what dyanamic casting resolve problem ?
                    -> If we have static_cast compiler does not look for an object type so if we have vehicle object or car object we can access both clas method of regardless pointer type.
                    -> so in dynamic_cast compiler check object type if object type is not valid so it will give nullptr
                    -> means see in below example
    */

    vehicle* ptr3 = new car();
    ptr3->start();
    car* carptr3 = dynamic_cast
    ptr3->car_start();




   




    return 0;
}