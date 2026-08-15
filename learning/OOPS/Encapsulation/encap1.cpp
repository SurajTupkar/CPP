#include "iostream"
using namespace std;
/*
Encapsulation :
    -> Wrapping up of data member and member function in a single unit 
        -> example : class
    -> We can achieve Data Hiding through Encapsulation
        -> It restrict direct access to the data.

*/

class Student
{
    int roll_no;

    public:
    string name;

    protected:
    int age;

    public:
    void setroll_no(int roll)
    {
        this->roll_no = roll;
    }

    int getroll_no()
    {
        return roll_no;
    }


};


int main()
{
    Student *obj = new Student();
    obj->name = "suraj";
    cout<<obj->name<<endl;
    obj->setroll_no(20);
    cout<<obj->getroll_no()<<endl;






    return 0;
}