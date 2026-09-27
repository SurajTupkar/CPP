/*

-> Classes
    -> Data Members & Member Functions
    -> Constructor
        -> 1. Default
        -> 2. Parameterised
        -> 3. Copy
        -> 4. Move
    -> Destructor
    -> Access Specifier
        -> 1. public
        -> 2. private
        -> 3. protected

    -> this 
    -> Encapsulation
        -> getter & setter



-> Objects
    -> Two Ways to create objects 
        -> 1. static
        -> 2. dynamic
    -> Parametrised object
    -> 




*/


#include "iostream"
using namespace std;


class Student
{   

    // Access specifier
    private:
    int age;

    void bunk()
    {
        cout<<"bunking"<<endl;
    }



    public:

    // DM
    string name;
    int id;


    // MF
    void study()
    {
        cout<<"doing study"<<endl;
    }

    void setage(int age)
    {
        if(age>18)
        {
            this->age = age;
        }
    }

    int getage()
    {
        return age;
    
    }

    void getbunk()
    {
        return bunk();
    }

    

    // constructor

    Student()
    {
        cout<<"Default Constructor called"<<endl;
    }

    Student(string name,int id,int age)
    {
       this->name = name;
       this->id = id;
       this->age=age;
    }

    // copy constructor
    Student(const Student &src)
    {
        cout<<"copy constructor called"<<endl;
        this->name = src.name;
        this->id = src.id;
        this->age = src.age;
    }

    // Destructor
    ~Student()
    {
        cout<<"Destructor called"<<endl;
    }

};

int main()
{
    // statically

    Student obj;
    obj.name;

    // dynamically

    Student *p = new Student("A",1,21);
    cout<<"value of p's name:"<<p->name<<endl;
    p->setage(11);
    cout<<p->getage()<<endl;
    p->getbunk();

    Student *q(p);
    cout<<"value of q's name:"<<q->name<<endl;

    delete p;


    
}