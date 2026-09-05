// without singleton design pattern

#include "iostream"
using namespace std;

class singleton
{

    public:
    singleton()
    {
        cout<<"Default_Constructor_called"<<endl;
    }

};

int main()
{
    singleton* ptr1 = new singleton;
    singleton* ptr2 = new singleton;
    
    if(ptr1==ptr2)
    {
        cout<<"both objects are same"<<endl;
    }
    else
    {
        cout<<"both objects are different"<<endl;
    }

    delete ptr1;
    delete ptr2;



    return 0;
}