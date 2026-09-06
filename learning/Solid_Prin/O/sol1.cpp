#include "iostream"
#include "memory"
using namespace std;

/*

O : OCP -> Open closed principle
    -> A class should be open for extension
    -> but its closed for modification
    -> It means if we have to add new functionality in class 
        what we do ?
            -> Instead of modifying existing and tested code we extend this functionality
    -> It can be achived using abstraction , inheritance and polymorphism
*/

/*

Below example not following OCP
*/
class vehicle
{
    public:
    void start(string type)
    {
        if(type=="petrol")
        {
            cout<<"starting petrol engine"<<endl;
        }
        else if(type=="diesel")
        {
            cout<<"starting diesel engine"<<endl;
        }
        else if (type=="hybrid")
        {
            cout<<"starting hybrid engine"<<endl;
        }
    }

};

int main()
{
    unique_ptr<vehicle>ptr=make_unique<vehicle>();
    ptr->start("petrol");


    return 0;
}