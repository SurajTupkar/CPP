/*
Inheritance 
    -> oops mechanism where derived class can reuse the properties and behaviour of base class.
    -> The main purpose is reduce code deduplicaion and improve maintability
        -> Example :
            => suppose i have vehicle class contains properties like brand and speed and behaviour like start and stop
            so now if i have to create car class and my car also have same properties and behaviour which vehicle class already have
            => so instead of rewriting same properties and behaviour i will inherit this properties and behaviour from vehicle class
            so in that situation vehicle class will be my base class and car class is my derived class which is inheriting properties from base vehicle class.

            Types 
                -> 1. single
                -> 2. multiple
                -> 3. multilevel
                -> 4. hierarchical
                -> 5. hybrid
*/

// single inheritance

#include "iostream"
using namespace std;

class vehicle
{
    private:
    string vin;

    void stop()
    {
        cout<<"stoping"<<endl;
    }
    
    protected:
    string veh_fam;

    void start()
    {
        cout<<"starting"<<endl;
    }
    
 

    public:
    int veh_id;
    int speed;
    string brand;
    void start_veh()
    {
        start();
    }


};

class car:public vehicle
{
    public:
    string car_name;

};


int main()
{
    car *ptr = new car;
    ptr->start_veh();


    return 0;
}