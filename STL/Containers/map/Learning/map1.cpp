#include "iostream"
#include "map"
#include <unordered_map>
using namespace std;


/*
Map :
    -> It's STL container where we can store elements in the key-value pair.
    -> Key should be unique across the map
    -> Allows efficient retrieval and modification of values based on the keys.

    Types of Map :
        -> 1. unordered map 
            -> data stored in the unsorted order.
        -> 2. ordered map 
            -> data stored in the sorted order

    Creation of Map
        -> ways 
            -> 1. empty map
            -> 2. Using Initializer List
            -> 3. Copying an Existing Map

*/


int main()
{

    // 1. Creation of ways -> 3. ways
    // way 1: empty map
    map<int,string> a;

    // way 2: using intialiser list
    map<int,string> b = {
        {1,"A"},
        {2,"B"},
        {4,"C"},
        {3,"D"}
    };

    // accessing elements
    for(const auto& i : b)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    // way 3: Copying an Existing Map

    map<int,string> c = b;

    for(const auto& y : c)
    {
        cout<<y.first<<" "<<y.second<<endl;
    }


    // 1. Create : unordered_map
    unordered_map<string,string> table;

    // 2. insert key value pair in map

    // 3 ways for insertion

    // 1. using [] operator
    table["in"] = "India";

    cout<<"size of table map:"<<table.size()<<endl; // 1

    // 2. using insert function
    table.insert(make_pair("en","England"));

    cout<<"size of map table:"<<table.size()<<endl; // 2

    // 3. using pair
    pair<string,string>p;
    p.first  = "br";
    p.second = "Brazil";

    table.insert(p);

    cout<<"size of table map:"<<table.size()<<endl;




    



    return 0;
}