#include "iostream"
using namespace std;

// Function overloading with Default Arguments

class vehicle
{
    public:
    
    void service(int km)
    {
        cout<<"servicing at km: "<<km<<endl;
    }

    void service(int km, int month=6)
    {
        cout<<"servicing at km:"<<km<<" after:"<<month<<" months"<<endl;
    }


    void display(int a)
    {
        cout<<"display with a"<<endl;
    }

    void display(double b)
    {
        cout<<"display with b"<<endl;
    }

    void display1(long km)
    {
        cout<<"display1 with long"<<endl;
    }

    void display1(double km)
    {
        cout<<"display1 with double"<<endl;
    }




};

int main()
{
    vehicle *ptr = new vehicle();
    ptr->service(100,2);
    ptr->display(100);
  //  ptr->display1(1000);  error: call of overloaded 'display1(int)' is ambiguous
  ptr->display1(1000.00);



    return 0;
}