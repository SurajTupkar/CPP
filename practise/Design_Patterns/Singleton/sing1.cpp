#include "iostream"
#include "memory"
using namespace std;


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
        // if(instance == nullptr)
        // {
        //      lock_guard<mutex> lock(mtx); // T1 and T2 - Thread Safe  -- double locking
        //     if(instance ==nullptr)
        //     {
        //         instance = new singleton();
        //     }

        // }
       
         return instance;
    }
   
};

// singleton* singleton::instance = nullptr;
singleton* singleton::instance = new singleton();


int main()
{
    singleton* ptr = singleton::getInstance();
    singleton* ptr1 = singleton::getInstance();
    cout<<(ptr==ptr1)<<endl;


    return 0;
}