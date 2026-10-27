 /*
Problem: Given a std::vector<int>, 
remove all duplicate elements while keeping the original relative order of the remaining elements
*/
 
#include "iostream"
#include "vector"
#include "map"
using namespace std;

int main()
{
    vector<int> v = {1,2,3,1,2,3,4,5,2};
    cout<<"size of vector v intially:"<<v.size()<<endl;
    map<int,int>mp;
    for(auto x:v)
    {
        mp[x]++;
    }
    cout<<"size of map mp:"<<mp.size()<<endl; // 5

    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        cout<<it->first<<" ";
    }

  





    return 0;
}