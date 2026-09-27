#include "iostream"
using namespace std;

/*
Single Inheritance : 
    -> A derived class access properties and behaviour of base class
        -> Let's suppose I have vehicle base class and car derived class 
        -> so i can access properties and behaviour of vehicle class depending on the which type of data it is.
            -> which type :
                -> private : can't access outside the class.
                -> protected : can access in derived class but can't in the main.
                -> public : we can access it anywhere

*/

// Base class
class vehicle
{
    public:
    string vin;

    private:
    int diagcode;

    protected:
    bool isIndian;

    vehicle()
    {
        cout<<"vehicle's constructor called"<<endl;
    }

};

// Derived class
class suzuki:public vehicle
{
    public:
    string name;

    void setisIndian(bool isInd)
    {
        this->isIndian = isInd;
    }

    bool getisIndian()
    {
        return isIndian;
    }

    suzuki()
    {
        cout<<"suzuki's constructor called"<<endl;
    }
};

int main()
{
    suzuki *obj = new suzuki();
    obj-> setisIndian(true);
    cout<<obj->getisIndian()<<endl;
    


    return 0;
}