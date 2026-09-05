/*
    Achiveing Singleton Design pattern
        -> Let's suppose I have a class named singleton so we can create multiple instance of this class
        -> But what actually singleton design pattern do:
            -> So we can create only one instance of this singleton class.
      
    Singleton Design Pattern
    -> Let suppose we have a class named singleton 
    -> now, what is singleton design pattern
        -> When we create an object of class singleton it should be return only one instance of clas.
            -> Eventhough we created an multiple object it should return the same of instance of that class.

Note : Here we have achieved singleton design pattern : means we have created single instance for multiple objects
        but it's not thread safe.
        
*/
#include "iostream"
using namespace std;

class singleton
{
    private:
    static singleton* instance;
    singleton()
    {
        cout<<"Default_Constructor_called"<<endl;
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

singleton* singleton :: instance =nullptr;

int main()
{
    singleton* ptr1 = singleton::getInstance();
    singleton* ptr2 = singleton::getInstance();
    
    if(ptr1==ptr2)
    {
        cout<<"both objects are same"<<endl;
    }
    else
    {
        cout<<"both objects are different"<<endl;
    }

    return 0;
}