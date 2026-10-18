/*
loops and iterators

-> 1. loops
    -> 1. for loop
    -> 2. range based loop
-> 2. iterators
    -> 1. begin and end
    -> 2. rbegin and rend -> for reverse the elements

*/

#include "iostream"
#include "vector"
using namespace std;


int main()
{
    vector<int>v = {1,2,3,4,5};

    // for loop
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;

    // range based for loop
    for(int x : v)
    {
        cout<<x<<" ";
    }cout<<endl;

    // iterators
    for(auto it = v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    // reverse
    for(auto it = v.rbegin();it!=v.rend();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;


    return 0;
}