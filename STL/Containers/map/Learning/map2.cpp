#include <iostream>
#include <unordered_map>
using namespace std;


int main()
{
    // 1. map creation
    unordered_map<string,string> table;

    // 2. insertion

    pair<string,string>p;
    p.first = "in";
    p.second = "India";
    table.insert(p);

    cout<<"size of table map:"<<table.size()<<endl;

    p.first = "en";
    p.second = "England";
    table.insert(p);
    p.first = "br";
    p.second = "Brazil";
    table.insert(p);

    cout<<"size of table map:"<<table.size()<<endl;

    // 3. traversal

    unordered_map<string,string>::iterator it = table.begin();

    // 1. with while loop
    while(it!=table.end())
    {
        pair<string,string> p =*it;
        cout<<p.first<<" "<<p.second<<endl;
        it++;
    }cout<<endl;

    // 2. with for loop
    cout<<"using for loop"<<endl;
    unordered_map<string,string>::iterator it1 = table.begin();
    for(it1;it1!=table.end();it1++)
    {
        pair<string,string> p1 = *it1;
        cout<<p1.first<<" "<<p1.second<<endl;
    }





    return 0;
}