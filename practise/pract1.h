#include "iostream"
using namespace std;

class Student
{
    //  Access Specifier
    private :
    int age;
    string add;

    int sum()
    {
        return 4+6;
    }

    public :
    string name;
    int id;

    void study()
    {
        cout<<this->name<<" doing study"<<endl;
    }

    // getter

    int getsum()
    {
        return sum();
    }

    // Default Constructor
    Student()
    {
        cout<<"default constructor called"<<endl;
    }

    // Parameterised Constructor

    Student(int age,string add,string name,int id)
    {
        this->age = age;
        this->add = add;
        this->name = name;
        this->id = id; 
    }

    ~Student()
    {
        cout<<"destructor called"<<endl;
    }

    // copy constructor
    Student(const Student &srcobj)
    {
        this->id = srcobj.id;
    }

    protected :


};