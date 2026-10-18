/*
loops and iterators

-> 1. loops
    -> 1. for loop
    -> 2. range based loop

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


    return 0;
}