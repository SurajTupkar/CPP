#include "iostream"
using namespace std;

/*
class :
    -> class is an user-defined data types which containes related 
        i) data members and 
        ii) member functions

    -> It act as an blueprint for creating objects

    example :
    -> Let suppose i have class named vehicle and 
        data members like speed , colour , state and
        member functions like start, stop

*/
class vehicle
{
    public:
    // Data members
    string colour;
    int speed;
    bool state=false;

    // member functions
    void start()
    {
        cout<<"vehicle is started"<<endl;
        state = true;
    }

    void stop()
    {
        if(state)
        {
            cout<<"vehicle is stopped"<<endl;
            state = false;
        }
        else
        {
            cout<<"vehicle is already stopped"<<endl;
        }
    }


};

int main()
{

    return 0;
}