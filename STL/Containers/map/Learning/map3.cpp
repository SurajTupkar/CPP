#include "iostream"
#include "unordered_map"
using namespace std;

int main()
{
    // creation of map

    // 1. using operator []
    unordered_map<string,string> table;
    table["in"] = "India";
    cout<<"Size of table map:"<<table.size()<<endl; // 1

    // 2. using insert
    table.insert(make_pair("br","Brazil"));
    cout<<"Size of table map:"<<table.size()<<endl; // 2

    // 3. using pair
    pair<string,string> p;
    p.first = "en";
    p.second = "England";
    table.insert(p);
    cout<<"Size of table map:"<<table.size()<<endl; // 3

    // Member Functions 
    
    // 1. size() -> No of pair (key,value) stored in map
    auto size = table.size();
    cout<<size<<endl;

    // 2. begin() -> Iterator pointing to first position of map
    auto it = table.begin();
    pair<string,string>p1 = *it;
    cout<<"key:"<<p1.first<<","<<"value:"<<p1.second<<endl;

    // cout<<"end:"<<endl;
    // auto it1 = table.end()-1;
    // pair<string,string>p2 = *it1;
    // cout<<"key:"<<p2.first<<" value:"<<p2.second<<endl;

    // 4. empty() -> check map is empty or not
    if(table.empty())
    {
        cout<<"table map is empty"<<endl;
    }
    else
    {
        cout<<"table map is not empty"<<endl;
    }

    // 5. at

    cout<<"at en:"<<table.at("en")<<endl;

    // 6. []

    cout<<"[en]:"<<table["en"]<<endl;

    

    // 7.erase(iterator,iterator)
    // 7.erase(iterator)
    cout<<"size before doing erase:"<<table.size()<<endl;
    table.erase(table.begin());
    cout<<"size after doing erase:"<<table.size()<<endl;
    
    cout<<"size before doing erase:"<<table.size()<<endl;
    table.erase(table.begin(),table.end()); // 2 
    cout<<"size after doing erase:"<<table.size()<<endl;



    return 0;
}
