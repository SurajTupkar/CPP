/*
Difference between push_back and emplace_back
*/


#include "iostream"
#include "vector"
using namespace std;

class vehicle
{
    public:
    int value;

    vehicle()
    {
        cout<<"Default constructor called"<<endl;
    }

    ~vehicle()
    {
        cout<<"Destructor called"<<endl;
    }

};


int main()
{
    vehicle obj; // default , destructor
    vector<vehicle>v;
    v.push_back(obj); // push_back -> object copy into the vector and same with emplace_back
    /*
    till here 
    default constructor called
    destructor called
    destructor called
    Note : two times destructor called because first destructor for object we have created
    second one is for the object present in the vector
    */


    return 0;
}