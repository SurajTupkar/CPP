#include "iostream"
#include "vector"
using namespace std;

/*
STL 
    -> Stands for Standard Template Library
        -> Which provides the generic and reusable components 
            -> Components like 
                -> 1. Container
                -> 2. Iterators
                -> 3. Algorithms
    
    -> 1. Container
        -> Where we can store elemenets 
            -> vector is a container
            -> set is a container
            -> map is a container

    -> 2. Iterators
        -> Used to iterate or access elements stored in the container
            -> begin and end
    
    -> 3. Algorithms
        -> Used to solve common operations like sort, count, find, min_elements, max_elements



*/


int main()
{
    // vector creation -> 4 ways

    // 1. empty vector
    vector<int>v;
    cout<<"Size of empty vector:"<<v.size()<<endl; // 0
    cout<<"Capacity of empty vector:"<<v.capacity()<<endl; // 0

    // 2. vector creation with input size
    vector<int>v1(10);
    cout<<"Size of vector v1:"<<v1.size()<<endl; // 10
    cout<<"Capacity of vector v1:"<<v1.capacity()<<endl; // 10

    // 3. vector with size and some input elements
    vector<int>v2(3,10);
    cout<<"Size of vector v2:"<<v2.size()<<endl;
    cout<<"Capacity of vector v2:"<<v2.capacity()<<endl;

    cout<<"front:"<<v2.front()<<endl; // 10
    cout<<"back:"<<v2.back()<<endl;  // 10

    // 4. vector with some elements
    vector<int>v3 = {1,2,3,4};
    cout<<"size of vector v3:"<<v3.size()<<endl;         // 4
    cout<<"capacity of vector v3:"<<v3.capacity()<<endl; // 4

    // Member Functions

    // 1. push_back -> to push element from the back
    v3.push_back(5);
    cout<<"Size of vector v3:"<<v3.size()<<endl; // 5
    cout<<"Capacity of vector v3:"<<v3.capacity()<<endl; //8

    // 2. size() -> no of elements stored in vector
    // 3. capacity() -> how many elements vector can stored before reallocation of vector

    // 4. begin() -> point to the first element of vector
    cout<<"begin element of vector v3:"<<*(v3.begin())<<endl; //1

    // 5. end() -> point to the position just after the last element of vector
    cout<<"just after the last element of vector v3:"<<*(v3.end())<<endl; // 0
    cout<<"last element of vector v3:"<<*(v3.end()-1)<<endl; // 5

    // 6. front() -> refer the first element in the vector
    cout<<"front element in the vector v3:"<<v3.front()<<endl; //1
    // 7. back() -> refer the last element in the vector 
    cout<<"back element in the vector v3:"<<v3.back()<<endl; //5

    // 8. []  -> it will not check upper bound limit
    cout<<"find element at index 3:"<<v3[3]<<endl; // 4

    // 9. at() -> It will check upper bound limit
    cout<<"find element at index 3:"<<v3.at(3)<<endl; // 4

    // 10. empty
    cout<<"check vector is empty or not:"<<v3.empty()<<endl; // 0

    // 11. insert element at index insert(index,element)
    v3.insert(v3.begin()+1,7);
    cout<<"size of vector after insert 7 at index 1:"<<v3.size()<<endl; // 6
    cout<<"size of vector after inserting 7 at index 1:"<<v3.capacity()<<endl; //8
    cout<<"element after inserting at index 1:"<<v3.at(1)<<endl; // 7

    // 12. pop_back() -> remove element from back
    v3.pop_back();
    cout<<"size of vector after pop_back:"<<v3.size()<<endl; // 5
    cout<<"Capacity of vector after pop_back:"<<v3.capacity()<<endl; // 8
    cout<<"last element present at vector v3:"<<v3.back()<<endl; 

    // 13. erase() -> remove element from perticular position/index
    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<" ";
    }cout<<endl;
    v3.erase(v3.begin()+2); 
    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<" "; // 1 7 3 4
    }cout<<endl;

    // vector tranversal and iterators

    vector<int>v4 = {1,2,3,4,5,6};
    // 1. for loop
    for(int i=0;i<v4.size();i++)
    {
        cout<<v4[i]<<" ";
    }cout<<endl;

    // 2. range based for loop
    for(auto i:v4)
    {
        cout<<i<<" ";
    }cout<<endl;

    // 3. iterators

    cout<<"iterators:"<<endl;
    for(auto i=v4.begin(); i!=v4.end(); i++)
    {
        cout<<*i<<" ";
    }cout<<endl;

    cout<<"Reverse Iterators"<<endl;
    for(auto it=v4.rbegin();it!=v4.rend();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;





  




    return 0;
}