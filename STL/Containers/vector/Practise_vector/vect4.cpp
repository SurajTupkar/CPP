#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

/*

vector practise
    1. vector creation
        -> 1. empty vector
        -> 2. vector with size
        -> 3. vector with size and element
        -> 4. vector with elements

// Member functions
    -> 1. push_back()
    -> 2. begin()
    -> 3. end()
    -> 4. pop_back()
    -> 5. size()
    -> 6. capacity()
    -> 7. empty()
    -> 8. front()
    -> 9. back()

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

    // 5. empty() -> check vector is empty or not means it will check it's size if 0 or not
    //  if size of vector is 0 means it's an empty vector
    
    cout<<"v5.empty():"<<v5.empty()<<endl;
    
    vector<int> v6;
    cout<<"v6.empty():"<<v6.empty()<<endl;
    if(v6.empty())
    {
        v6.push_back(10);
    }
    else
    {

    }

    cout<<"v6.begin():"<<*(v6.begin())<<endl;


    // 6. front() -> fetch first element of vector
    vector<int> v7 = {1,2,3,4};
    cout<<"front of v7:"<<v7.front()<<endl; //1

    // 7. back() -> last element of vector
    cout<<"back of v7:"<<v7.back()<<endl; // 4

    vector<int> v8 = {1,6,2,4};
    sort(v8.begin(),v8.end());
    for(int i=0;i<v8.size();i++)
    {
        cout<<v8[i]<<" ";
    }

   
    return 0;
    
}