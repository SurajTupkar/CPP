#include "iostream"
using namespace std;


class Base
{

    private:
    string name;

    protected:
    int age;

    public:
    bool gender;

};


class Derived : public Base
{
    


};

int main()
{
    Derived *obj = new Derived ();
  


    return 0;
}