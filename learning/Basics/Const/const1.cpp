#include "iostream"
using namespace std;




int main()
{

    // Normal variable
    // Modification is allowed
    int a = 10 ; 
    cout<<"a before changing it's value:"<<a<<endl;
    a = 20;
    cout<<"a after changing it's value:"<<a<<endl;

    //  const variable
    // modification is not allowed

    const int c = 30;
    cout<<"c before changing it's value:"<<c<<endl;
    // c = 40;   // This not allowed because we can not modify it's value through that variable
    cout<<"c after changing it's value:"<<c<<endl;






    return 0;
}