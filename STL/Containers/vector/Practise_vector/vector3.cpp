#include "iostream"
#include "vector"
using namespace std;




int main()
{

    vector<string>str;
    str.push_back("suraj");
    cout<<"size:"<<str.size()<<endl;  // 1
    cout<<"capacity:"<<str.capacity()<<endl; //1
    str.push_back("tupkar");
    cout<<"size:"<<str.size()<<endl;  // 2
    cout<<"capacity:"<<str.capacity()<<endl; //2
    str.push_back("shhcbdh");
    cout<<"size:"<<str.size()<<endl;  // 3
    cout<<"capacity:"<<str.capacity()<<endl; //2





    return 0;
}