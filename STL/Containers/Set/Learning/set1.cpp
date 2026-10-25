#include "iostream"
#include "set"
#include "unordered_set"
using namespace std;


/*
set:
    -> sorted collection of unique_elements
    -> Elements are stored in sorted order and duplicates are automatically removed
    -> Provide Efficient insertion,deletion and search operation

    Types :
        -> 1. ordered_set (set)
        -> 2. unordered_set

*/

int main()
{
    // creation 
    // 1. ordered_set
    set<int> st;
    st.insert(10);
    st.insert(15);
    st.insert(8);
    st.insert(4);


    // traverse
    set<int>::iterator it = st.begin();

    cout<<"Ordered_set: ";
    while(it != st.end())
    {
        cout<<*it<<" ";
        it++;
    }cout<<endl;



    // creation unordered_set

    unordered_set<int> ust = {1,8,2,5,3};
    unordered_set<int>::iterator it1 = ust.begin();
    cout<<"Unordered_set: ";
    for(it1;it1!=ust.end();it1++)
    {
        cout<<*it1<<" ";
    }cout<<endl;




    return 0;
}