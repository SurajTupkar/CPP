#include "iostream"
#include "map"
#include "vector"
using namespace std;


// Question 1 : Count Frequency of Each Element

int main()
{
    vector<int> v = {1,1,1,2,2,2,3};
    map<int,int>freq;
   
    for(auto x : v)
    {
        freq[x]++;
    }
    cout<<freq.size()<<endl;
    map<int,int>::iterator it = freq.begin();
    while(it != freq.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }







    return 0;
}