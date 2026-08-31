#include "iostream"
using namespace std;


class vehicle
{

    private:
    void start()
    {
        cout<<"starting"<<endl;
    }

    protected:
    void stop()
    {
        cout<<"stoping"<<endl;
    }

     public:
     string veh_type;

     void getstart()
     {
        start();
     }

      void getstop()
    {
        stop();
    }

     vehicle()
     {
        cout<<"vehicle's constructor"<<endl;
     }

     ~vehicle()
     {
        cout<<"vehicle's destructor"<<endl;
     }

};

class car:public vehicle
{
    private:
    int car_vin;

    protected:
    string car_market;

    public:
    string car_name;

   


};

class truck:public vehicle
{
    private:
    int truck_vin;

    protected:
    string truck_market;

    public:
    string car_name;

    truck()
    {
        cout<<"truck's constructor called"<<endl;
    }

    ~truck()
    {
        cout<<"truck's destructor called"<<endl;
    }

};

int main()
{
    truck *ptr = new truck();
    ptr->veh_type = "vehicle_type";
    cout<<ptr->veh_type<<endl;
    ptr->getstart();
    ptr->getstop();
    delete ptr;



    return 0;
}