#include "iostream"
#include "set"
using namespace std;



int main()
{
    set<int>st = {1,5,3,2,8};

    // Member Functions of set

    // 1. begin() -> Return an iterator pointing to the first element of the set
    auto it = st.begin();
    cout<<*it<<endl; // 1

    // 2. rbegin() -> Return an iterator pointing to the last element of the set
    cout<<*(st.rbegin())<<endl; // 8

    // 3. end() -> Return an iterator pointing to the past-end element of the set
    cout<<*(st.end())<<endl; // 

    // 4. insert() -> Insert element at the specified position
    st.insert(0);
    auto first = st.begin();
    cout<<"after inserting 0 first element of the set:"<<*first<<endl;

    // 5. size() -> Return size or no.of elements stored in the set
    cout<<"size of the st: "<<st.size()<<endl;

    // 6. empty() -> check set is empty or not
    if(st.empty())
    {
        cout<<"set is empty"<<endl;
    }
    else
    {
        cout<<"set is not empty"<<endl;
    }

    // 7. find() -> find the element is present or not if present return the element other the end element

    auto it2 = st.find(5);
    cout<<*it2<<endl;

    auto it3 = st.find(55);
    cout<<*it3<<endl;

    // 8. erase() -> remove or erase the specified index
    st.erase(st.begin());
    cout<<"After erasing first element of the set:"<<*(st.begin())<<endl;

    // 9. count() -> No.of the occurence of the given element present in the set

    cout<< st.count(3)<<endl; 
    if(st.count(3)==1)
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }


    return 0;
}