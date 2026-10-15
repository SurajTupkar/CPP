#include "iostream"
using namespace std;


class singleton
{
    public:
    static singleton& getInstance()
    {
        static singleton instance;
        return instance;
    }

    ~singleton()
    {
        cout<<"destructor called"<<endl;
    }


    private:
    singleton()
    {
        cout<<"constructor called"<<endl;
    }

};

int main()
{
    singleton& ptr = singleton::getInstance();
    singleton& ptr1 = singleton::getInstance();



    return 0;
}