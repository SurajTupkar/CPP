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

    
    return 0;
}