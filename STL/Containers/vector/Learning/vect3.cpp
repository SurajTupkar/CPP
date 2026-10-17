#include "iostream"
#include "vector"
using namespace std;


int main()
{
    vector<int>v1;
    v1.push_back(10);
    cout<<v1.front()<<endl;
    v1.emplace_back(20);
    cout<<v1.front()<<endl;
    cout<<v1.back()<<endl;


    return 0;
}