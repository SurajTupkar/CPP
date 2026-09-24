/*
Inheritance :
    -> OOPs mechanism which allows derived class to reuse the properties and behaviour of base class 
    -> Which save code deduplication and maintain readability
        -> Types
            -> Single

*/

// single

#include "iostream"
using namespace std;

class vehicle
{
    public:
    string vin;

    void start()
    {
        cout<<"start method"<<endl;
    }

    void getstop()
    {
        stop();
    }
    
    private:
    string key;

    void stop()
    {
        cout<<"stop method"<<endl;
    }

};

class car:public vehicle
{
    public:
   
   

};


int main()
{
    car* ptr = new car();
    ptr->start();
    ptr->getstop();




    return 0;
}