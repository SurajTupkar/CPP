#include "iostream"
#include <mutex>
using namespace std;

class singleton
{
    private:
    static singleton* instance;
    static mutex mtx;
    singleton()
    {
        cout<<"Default constructor called"<<endl;
    }

    public:
    static singleton* getInstance()
    {
        if(instance==nullptr)
        {
            lock_guard<mutex> lock(mtx);
            if(instance == nullptr)
            {
                instance = new singleton();
            }
        }
        return instance;
    }
};

singleton* singleton::instance=nullptr;
mutex singleton::mtx;

int main()
{
    singleton* ptr1 = singleton::getInstance();
    singleton* ptr2 = singleton::getInstance();
    cout<<(ptr1==ptr2)<<endl;
    delete ptr1,ptr2;




    return 0;
}