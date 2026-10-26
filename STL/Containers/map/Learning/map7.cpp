#include <iostream>
#include <map>
using namespace std;

/*
find vs count vs contains
*/

int main()
{
    map<int,string>emp = {
        {1,"suraj"},
        {2,"shashank"},
        {3,"nishank"}
    };

    // find -> it will search an input key in the map if key is present at will return the key otherwise end
    auto it = emp.find(2);
    cout<<it->first<<endl;
    cout<<it->second<<endl;
    if(emp.find(2) != emp.end())
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }

    // 2. count
    int a = emp.count(3);
    cout<<"count of 3 in the map:"<<a<<endl;

    if(emp.count(3) == 1)
    {
        cout<<"3 is present"<<endl;
    }
    else
    {
        cout<<"3 is not present"<<endl;
    }

    // 3. contains

    cout<<(emp.contains(3))<<endl; // 1
    cout<<(emp.contains(4))<<endl; // 0
 



    return 0;
}