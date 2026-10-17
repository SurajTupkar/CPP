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
    
    // 3. vector creation : with some size and value
    vector<int>v3(5,3);
    cout<<"size of vector v3:"<<v3.size()<<endl; // 5
    cout<<"capacity of vector v3:"<<v3.capacity()<<endl; //5
    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<" ";
    }

    v3.push_back(4);
    cout<<"size of vector v3:"<<v3.size()<<endl; // 6
    cout<<"capacity of vector v3:"<<v3.capacity()<<endl; // 12

    // 4. vector creation with values
    vector<int>v4 = {1,2,3,4};
    for(int i=0;i<v4.size();i++)
    {
        cout<<v4[i]<<" ";  // 1,2,3,4
    }

    cout<<endl;
    cout<<"size of vector v4:"<<v4.size()<<endl; // 4
    cout<<"capacity of vector v4:"<<v4.capacity()<<endl; // 4
    
    v4.push_back(5);
    cout<<"size of vector v4:"<<v4.size()<<endl;  // 5
    cout<<"capacity of vector v4:"<<v4.capacity()<<endl;  // 8

    // Data Members:
    // 1. push_back() -> push the element at the back of the vector
    vector<int>v5;
    v5.push_back(10);
    v5.push_back(20);
    v5.push_back(30);
    for(int i=0;i<v5.size();i++)
    {
        cout<<v5[i]<<" ";
    }cout<<endl;

    // 2. begin() -> first element of the vector
    cout<<*(v5.begin())<<endl;

    // 3. end() -> pointing to the position after the last element of the vector
    cout<<"v5.end():"<<*(v5.end())<<endl; // 0
    cout<<"v5.end()-1:"<<*(v5.end()-1)<<endl; // 30

    // 4. pop_back() -> remove/pop element from the back
    v5.pop_back();
    cout<<"after pop_back, end()-1:"<<*(v5.end()-1)<<endl;
    return 0;
}