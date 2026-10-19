#include "iostream"
#include "vector"
using namespace std;

// vector creation


int main()
{
    // 1. empty vector
    vector<int>v; 
    cout<<"size of empty vector:"<<v.size()<<endl; //0
    cout<<"capacity of empty vector:"<<v.capacity()<<endl; //0

    // 2. vector with some size
    vector<int>v1(10);
    cout<<"Size of vector v1:"<<v1.size()<<endl; // 10
    cout<<"capacity of vector v1:"<<v1.capacity()<<endl; // 10

    // 3. vector with some size and value
    vector<int>v2(5,2);
    cout<<"size of vector v2:"<<v2.size()<<endl; // 5
    cout<<"capacity of vector v2:"<<v2.capacity()<<endl; // 5

    // 4. vector with some value
    vector<int>v3 = {1,2,3,4,5};
    cout<<"size of vector v3:"<<v3.size()<<endl; // 5
    cout<<"capacity of vector v3:"<<v3.capacity()<<endl; // 5

    // Accessing vector elements 
    // 1. for loop

    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<" ";
    }cout<<endl;

    // 2. range based for loop

    for(auto x : v3)
    {
        cout<<x<<" ";
    }cout<<endl;

    // 3. iterators

    for(auto it=v3.begin();it!=v3.end();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    // 4. reverse

    for(auto it = v3.rbegin();it!= v3.rend();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;




    return 0;
}