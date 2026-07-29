#include "iostream"
#include "pract1.h"
using namespace std;


int main()
{
    // statically
    Student obj(12,"xyz","A",1);
    obj.study();

    // dynamically
    Student *p = new Student();
    cout<<p->getsum()<<endl;

    Student obj1(obj);
    cout<<"obj's id:"<<obj.id<<endl;
    cout<<"obj1's id:"<<obj1.id<<endl;
    
    delete p;
    return 0;
}