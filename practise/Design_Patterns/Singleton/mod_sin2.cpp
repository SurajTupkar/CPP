#include "iostream"
using namespace std;


class singleton
{
    public:
    ~ singleton()
    {
        cout<<"Destructor called"<<endl;
    }

    static singleton& getInstance()
    {
        static singleton obj;
        return obj;
    }

    private:
    singleton()
    {
        cout<<"constructor called"<<endl;
    }



};

int main()
{
    singleton& obj = singleton::getInstance();




    return 0;
}