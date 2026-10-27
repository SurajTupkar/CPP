/*
Question 2: Find Duplicate Elements Using map
Problem: Given a vector, find all duplicate elements and print each duplicate only once, in ascending order.

*/


#include "iostream"
#include "vector"
#include "map"
using namespace std;



int main()
{
    vector<int> v = {4, 2, 7, 2, 4, 4, 9, 7, 1};
    map<int,int>freq;
    for(auto x : v)
    {
        freq[x]++;
    }

    cout<<freq.size()<<endl; // 5
    
    map<int,int>::iterator it = freq.begin();
    for(it;it != freq.end(); it++)
    {
        if(it->second > 1)
        {
            cout<<it->first<<endl;
        }
    }




    return 0;
}

