#include "iostream"
#include "vector"
using namespace std;

/*

vector practise
    1. vector creation
        -> 1. empty vector
        -> 2. vector with size
        -> 3. vector with size and element
        -> 4. vector with elements
*/


int main()
{
    vector<int> v1; // empty vector
    cout<<"size of vector v1:"<<v1.size()<<endl; //0
    cout<<"capacity of vector v1:"<<v1.capacity()<<endl; //0

    v1.push_back(10);
    cout<<"after push back size of vector v1:"<<v1.size()<<endl; // 1
    cout<<"after push back capacity of vector v1:"<<v1.capacity()<<endl; //1

    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    // 2. vector with size
    vector<int>v2(5);
    cout<<"size of vector v2:"<<v2.size()<<endl; // 5
    cout<<"capacity of vector v2:"<<v2.capacity()<<endl; // 5

    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }cout<<endl;

    // after push_back v2

    v2.push_back(10);
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" "; // 0 0 0 0 0 10
    }cout<<endl;
    
    return 0;
}