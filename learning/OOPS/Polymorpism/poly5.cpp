#include "iostream"
using namespace std;

/*
Function overloading :
    -> Having multiple function with same name but different parameter list. 
        -> The parameter list can differ by :
            -> 1. No.of parameters
            -> 2. Type of parameters
            -> 3. Order of parameters

    Note : different return type can't be overloaded. 

*/


class vehicle
{
    public:

    // No of parameters
    void service(int km)
    {
        cout<<"servicing after "<<km<<" kilometer"<<endl;
    }

    void service(int km,double cost)
    {
        cout<<"servicing after "<<km<<" kilometer and the servicing cost is "<<cost<<endl;
    }

    // Type of parameters

    void service(double km)
    {
        cout<<"servicing after "<<km<<" kilometer"<<endl;
    }

    // Order of parameter

    void service(double cost,int km)
    {
         cout<<"servicing cost is "<<cost<<" after "<<km<<" kilometer"<<endl;
    }

    // return type only : changing only the return type cannot overload a function.
    /*int service(int km)
    {
        return km;    //error: 'int vehicle::service(int)' cannot be overloaded with 'void vehicle::service(int)'
    }*/




};

int main()
{
    vehicle *p = new vehicle();
    p->service(300);
    p->service(300,567.89);
    p->service(300.9);
    p->service(390.78,500);
   // cout<<p->service(400); //error: 'int vehicle::service(int)' cannot be overloaded with 'void vehicle::service(int)'
    
    

    return 0;
}