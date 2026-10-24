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

*/


int main()
{
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