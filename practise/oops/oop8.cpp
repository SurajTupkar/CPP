#include "iostream"
using namespace std;

/*
Singleton Design Pattern
    -> Let suppose we have a class named singleton 
    -> now, what is singleton design pattern
        -> When we create an object of class singleton it should be return only one instance of clas.
            -> Eventhough we created an multiple object it should return the same of instance of that class.
*/


class singleton
{
    private:
    static singleton* instance;
    singleton()
    {
        cout<<"Default constructor called"<<endl;
    }

    public:
    static singleton* getInstance()
    {
        if(instance == nullptr)
        {
            instance = new singleton();
        }
        return instance;
    }

};

singleton* singleton::instance = nullptr;

int main()
{
    singleton* ptr1 = singleton::getInstance();
    singleton* ptr2 = singleton::getInstance();
    cout<<(ptr1==ptr2)<<endl;
    
    delete ptr1,ptr2;


    return 0;
}