#include "iostream"
using namespace std;

/*
Function overloading with Const :
    -> 1. const with pass by value
    -> 2. const with pass by reference or pointer

*/


class vehicle
{
    public:

    // 1. const with pass by value 
    //    -> error: 'void vehicle::service(int)' cannot be overloaded with 'void vehicle::service(int)'
    /*
    void service(int km)
    {
        cout<<"servicing after km "<<km<<endl;
    }
    void service(const int km)
    {
        cout<<"servicing after const km "<<km<<endl;
    }
    */

     // 2. const with pass by value 
     // -> Overloaded
     /*
    void service(int &km)
    {
        cout<<"servicing after km "<<km<<endl;
    }

    void service(const int &km)
    {
        cout<<"servicing after const km "<<km<<endl;
    }
    */

    // 3. const with pass by pointer

    void service(int *p)
    {
        cout<<"servicing after km "<<endl;
    }

    void service(const int *p)
    {
        cout<<"servicing after const km "<<endl;
    }



};


int main()
{
    vehicle *p = new vehicle();
    int km = 10;
    const int km1 = 100;

    /*
    // 1. pass by value
        p->service(km);
        p->service(km1);
    */

    /*
    // 2. pass by reference
        p->service(km);
        p->service(km);
    */

    /*
    // 3. pass by pointer
        p->service(&km);
        p->service(&km);
    */

    p->service(&km);
    p->service(&km1);



    return 0;
}