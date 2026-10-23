#include "iostream"
#include "vector"
using namespace std;

// vector creation


int main()
{
    // 1. empty vector
    vector<int>v; 
    cout<<"size of empty vector:"<<v.size()<<endl; //0
    cout<<"capacity of empty vector:"<<v.capacity()<<endl; //0

    // 2. vector with some size
    vector<int>v1(10);
    cout<<"Size of vector v1:"<<v1.size()<<endl; // 10
    cout<<"capacity of vector v1:"<<v1.capacity()<<endl; // 10

    // 3. vector with some size and value
    vector<int>v2(5,2);
    cout<<"size of vector v2:"<<v2.size()<<endl; // 5
    cout<<"capacity of vector v2:"<<v2.capacity()<<endl; // 5

    // 4. vector with some value
    vector<int>v3 = {1,2,3,4,5};
    cout<<"size of vector v3:"<<v3.size()<<endl; // 5
    cout<<"capacity of vector v3:"<<v3.capacity()<<endl; // 5

    // Accessing vector elements 
    // 1. for loop

    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<" ";
    }cout<<endl;

    // 2. range based for loop

    for(auto x : v3)
    {
        cout<<x<<" ";
    }cout<<endl;

    // 3. iterators

    for(auto it=v3.begin();it!=v3.end();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    // 4. reverse

    for(auto it = v3.rbegin();it!= v3.rend();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    // data members

    // 1. push_back()
    // 2. capacity()
    // 3. size()
    // 4. front()
    // 5. back()
    // 6. begin()
    // 7. end()
    // 8. pop_back()

    cout<<"capacity before push_back(6):"<<v3.capacity()<<endl;  //5
    cout<<"size before push_back(6):"<<v3.size()<<endl; // 5
    v3.push_back(6);
    cout<<"end after push_back(6):"<<*(v3.end())<<endl; // 0 
    cout<<"end after push_back(6):"<<*(v3.end()-1)<<endl; // 6
    cout<<"begin after push_back(6):"<<*(v3.begin())<<endl; // 1
    // front
    cout<<"front after push_back(6):"<<v3.front()<<endl; // 1
    // back
    cout<<"back after push_back(6):"<<v3.back()<<endl; // 6
    cout<<"capacity of vector v3 after push_back(6):"<<v3.capacity()<<endl; // 10
    cout<<"size of vector v3 after push_back(6):"<<v3.size()<<endl; // 6


    // 8. pop_back()
    v3.pop_back();
    cout<<"end after pop_back():"<<*(v3.end()-1)<<endl; // 5
    cout<<"size after pop_back():"<<v3.size()<<endl; // 5
    cout<<"capacity after pop_back():"<<v3.capacity()<<endl; // 10

    // 9. empty

    if(v3.empty())
    {
        cout<<"v3 is empty"<<endl;
    }
    else
    {
        cout<<"v3 is not empty"<<endl;
    }

    // 10. [] -> not check upper bound
    cout<<"element present at index 2 :"<<v3[2]<<endl; // 3
   // cout<<"element present at index 10:"<<v3[6]<<endl; // actually we dont have 10 elements in vector v3 so it's not checking upper bound limit so that's why it will give garbage number


    // 11. at()
    cout<<"element present at index 2:"<<v3.at(2)<<endl;
    //cout<<"element present at index 6:"<<v3.at(6)<<endl; // it will check upper bound limit and we do not have element at 6th index  or we don't have 6 or 7 elements so that's why it will us : std::out_of_range' error


    // 12. insert()
    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<" ";
    }cout<<endl;
    cout<<"element present at first index before insert->"<<v3.front()<<endl;
    v3.insert(v3.begin(),3);
    cout<<"element present at first index after insert->"<<v3.front()<<endl;
    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<" ";
    }cout<<endl;

    // 13. resize()

    cout<<"size of vector 3 now :"<<v3.size()<<endl;
    cout<<"capacity of vector 3 before resize : "<<v3.capacity()<<endl; 
    v3.resize(18);
    cout<<"resize of vector 3 from size 6 to 10 -> "<<v3.size()<<endl; // 18
    cout<<"capacity of vector 3 after resize(10):"<<v3.capacity()<<endl; // 18

    // 14. shrink_to_fit
    vector<int>v4 = {1,2,3,4};
    cout<<"size of vector v4:"<<v4.size()<<endl; //4
    cout<<"capacity of vector v4:"<<v4.capacity()<<endl; //4
    v4.push_back(10);
    cout<<"size of vector v4:"<<v4.size()<<endl;
    cout<<"capacity of vector v4:"<<v4.capacity()<<endl; // 8
    v4.shrink_to_fit();
    cout<<"Capacity of vector v4:"<<v4.capacity()<<endl; // 5
    v3.shrink_to_fit();
    cout<<"capacity of v3 after shrink_to_fit:"<<v3.size()<<endl;
    



    return 0;
}