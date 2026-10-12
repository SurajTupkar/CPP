#include "iostream"
#include "mutex"
using namespace std;


class vehicle
{
    private:
    vehicle()
    {
        cout<<"constructor called"<<endl;
    }

    public:
    static mutex mtx;
    static vehicle* instance;
    static vehicle* getinstance()
    {
        lock_guard<mutex>lock(mtx);
        if(instance == nullptr)
        {
            instance = new vehicle;
        }
        return instance;
    }

    ~vehicle()
    {
        cout<<"destructor called"<<endl;
    }

    static void deletedestr()
    {
        delete instance;
    }

};

vehicle* vehicle::instance = nullptr;
mutex vehicle::mtx;

int main()
{
    vehicle* ptr = vehicle::getinstance();
    vehicle* ptr1 = vehicle::getinstance();

    vehicle::deletedestr();




    return 0;
}