#include "iostream"
#include "algorithm"
#include "vector"
#include <numeric>
using namespace std;

/*

sort()
find()
count()
reverse()
min_element()
max_element()
binary_search()
accumulate()

*/


int main()
{
    // 1. sort -> ascending order
    vector<int> v1 = {2,1,3,8,4,5};
    sort(v1.begin(),v1.end());
    for(auto it = v1.begin(); it != v1.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    // sort -> descending order
    sort(v1.begin(),v1.end(),greater<int>());
    for(auto it = v1.begin(); it != v1.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    // question on sort 
    vector<int> v2 = {50, 10, 40, 20, 30};
    // ascending order
    sort(v2.begin(),v2.end());
    for(auto it = v2.begin(); it != v2.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    // descending order

    sort(v2.begin(),v2.end(),greater<int>());
    for(auto it = v2.begin(); it != v2.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    // sort() with string

    vector<string> str = {"Suraj", "Amit", "Rahul", "Neha"};
    sort(str.begin(), str.end());
    for(auto it = str.begin(); it != str.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    sort(str.begin(),str.end(), greater<string>());
    for(auto it = str.begin(); it != str.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    vector<string> str1 = {"Banana", "Apple", "Mango", "Cherry"};
    sort(str1.begin(),str1.end());
    for(auto it = str1.begin(); it != str1.end(); it++)
    {
        cout<<*it<< " ";
    }cout<<endl;

    sort(str1.begin(), str1.end(), greater<string>());
    for(auto it = str1.begin(); it != str1.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    // 2. find() algorithm
    vector<int> v = {10, 20, 30, 40};
    auto it = find(v.begin(),v.end(),40);
    cout<<*it<<endl; // 20
    if(it != v.end())
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }

    vector<int> v5 = {10,20,30,40};
    auto it1 = find(v5.begin(),v5.end(),50);
    if(it1!=v.end())
    {
        cout<<"present"<<endl;
    }
    else
    {
        cout<<"not present"<<endl;
    }

    vector<int> v6 = {10, 20, 30, 40};
    auto it2 = find(v6.begin(),v6.end(), 30);
    cout<<*it2<<endl; 
    if(it2 != v6.end())
    {
        cout<<"present"<<endl;
    }
    else
    {
        cout<<"not present"<<endl;
    }

    vector<string> str4 = {"Aman","Kartik","Siddhart"};
    auto it3 = find(str4.begin(),str4.end(), "Kartik");
    cout<<*it3<<endl;
    if(it3!=str4.end())
    {
        cout<<"kartik is present"<<endl;
    }
    else
    {
        cout<<"kartik is not present"<<endl;
    }

    // 3. reverse

    vector<int> v10 = {10, 20, 30, 40};
    reverse(v10.begin(),v10.end());
    for(auto it = v10.begin(); it != v10.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    vector<char> ch ={'a','z','v','s','c'};
    reverse(ch.begin(),ch.end());
    for(auto it = ch.begin(); it != ch.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    sort(ch.begin(),ch.end());
    for(auto it = ch.begin(); it != ch.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    sort(ch.begin(), ch.end(), greater<char>());
    for(auto it = ch.begin(); it != ch.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    auto x = find(ch.begin(),ch.end(),'m');
    if(x != ch.end())
    {
        cout<<"present"<<endl;
    }
    else
    {
        cout<<"not present"<<endl;
    }

    // 4. min_element()

    vector<int> v11 = {1,2,3,4,5,6};
    auto y = min_element(v11.begin(),v11.end());
    cout<<*y<<endl;

    // 5. max_element()
    auto z = max_element(v11.begin(),v11.end());
    cout<<*z<<endl;

    // 6. binary_search()

    bool m = binary_search(v11.begin(),v11.end(),2);
    cout<<m<<endl;

    // 7. accumulate
    auto sum = accumulate(v11.begin(),v11.end(),0);
    cout<<sum<<endl;



    return 0;
}