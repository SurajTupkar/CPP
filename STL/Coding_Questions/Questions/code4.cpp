// Question — Q3: Find the First Non-Repeating Element

#include "iostream"
#include "map"
#include "vector"
using namespace std;


int main()
{
    vector<int> v = {4, 5, 1, 2, 1, 4, 5};
    map<int,int>freq;
    for(auto x : v)
    {
        freq[x]++;
    }

    cout<<freq.size()<<endl;

    // if order is not mandtory
    /*
    for(auto it =freq.begin();it!=freq.end();it++)
    {
        if(it->second==1)
        {
            cout<<it->first<<endl;
            break;  
        }
    }
    */

    //  To maintain the original order
    for(auto it : v)
    {
        if(freq[it]==1)
        {
            cout<<it<<endl;
            break;
        }
    }
    



    return 0;
}


// 