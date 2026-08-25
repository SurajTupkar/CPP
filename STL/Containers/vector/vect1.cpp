#include "iostream"
using namespace std;
#include "vector"


/*

STL 
    -> Standard Template Library

Containers :
    -> are classes or data structures that are designes to store and manage collection of objects.
    -> provide standardized way to store,retrieve and manipulate data in various ways.
    -> vector,list,queue,stack,set,map etc.


1) vector :
    -> Dynamic array that can grow or shrink in size.
    -> Allow fast random access to elements
    -> Insertion and removal of elements at the end is efficient.
    -> Suitable for most scenarios when elements need to be stored in a linear sequence.    

*/
int main()
{
    // Creation
    vector<int> v1;
    vector<int> v2(10); //create vector with size 10
    vector<int> v3(10,2); //create vector with size 10 and value 2

    // Methods :
    /*
    1. begin
        -> Returns an iterator pointing to the first element in the vector.
    
    2. end
        -> Returns an iterator pointing to the position just after the last element in the vector.
    */
    cout<<*(v3.begin())<<endl;
    cout<<*(v3.end()-1)<<endl;

    /*
    3. push_back() : Add an element to the end of the vector
    4. size()      : Returns the no. of elements in the vector
    5. pop_back()  : Remove the last element from the vector
    6. front()     : Return first element from the vector and can run without deferencing
    7. back()      : Return last element from the vector and can run without deferencing
    8. empty()     : Check vector is empty or not. 
    9. Operator [] : To access element from specific index
        Condition : Value should be present at the specific index otherwise it will give error.
    10. at()       : To access element of specific index.
    11. capacity() : Returns the no. of elements that the vector can hold before needing to allocate more space.
    12. reserve(size_type n) :Request that the vector capacity be increased to at least n elements, potentially reducing the no. of reallocations.
    13. max_size() : Returns maximum no. of elements that the vector can hold due to system or library limitations
    14. clear()    : Clear elements from vector
    15. insert(position,value)   : insert value at position
    16. erase(iterator position) or erase(iterator first,iterator last) : Removes one or more elements from the vector starting at the specified position
    */
        // 10 added to v1 at starting
        v1.push_back(10);
        cout<<*(v1.begin())<<endl;
        // 20 added to v1 after 10 
        v1.push_back(20);
        cout<<"size:"<<v1.size()<<endl;
        cout<<"size:"<<v2.size()<<endl;
        cout<<"size:"<<v3.size()<<endl;
       
        // pop_back() will remove last element from vector
        v1.pop_back(); 
        cout<<"size of v1 atfer pop_back(20):"<<v1.size()<<endl;


        v1.push_back(30);
        v1.push_back(40);
        v1.push_back(50);
        cout<<"size of v1 after push_back 30,40,50:"<<v1.size()<<endl;

        // front and back
        cout<<"front element from vector v1:"<<v1.front()<<endl;
        cout<<"begin element from vector v1:"<<*(v1.begin())<<endl;
        cout<<"back element from vector v1:"<<v1.back()<<endl;
        cout<<"end element from vector v1:"<<*(v1.end()-1)<<endl;

        // empty : to check vector is empty or not.

        if(v1.empty()==true)
        {
            cout<<"vector is empty"<<endl;
        }
        else
        {
            cout<<"vector is not empty"<<endl;
        }


        // Operator [] : To access value at specific index.

        cout<<"Zero th index of vector v1:"<<v1[0]<<endl;
        cout<<"First Index of vector v1:"<<v1[1]<<endl;

        // Updation
        cout<<"Before updating Element of First Index:"<<v1[0]<<endl;
        v1[0] = 100;
        cout<<"After updating Element of First Index:"<<v1[0]<<endl;

        // Printing values from vector v1 through for loop
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;

        cout<<"element at zero th index: "<<v1.at(0)<<endl;

        // capacity()

        cout<<"capacity of vector v1:"<<v1.capacity()<<endl;
        v1.push_back(90);
        cout<<"capacity of vector v1:"<<v1.capacity()<<endl;

        // reverse()

        vector <int> v5;
        cout<<"capacity of vector v5:"<<v5.capacity()<<endl;
        cout<<"size of vector v5:"<<v5.size()<<endl;
        v5.reserve(10);
        cout<<"capacity of vector v5 after reserse(10):"<<v5.capacity()<<endl;
        cout<<"size of vector v5 after reserve(10):"<<v5.size()<<endl;

        // max_size()
        cout<<"max_size of vector v5:"<<v5.max_size()<<endl;

        // clear()
        cout<<"size of vector v1 before clear():"<<v1.size()<<endl;
        v1.clear();
        cout<<"size of vector v1 after clear():"<<v1.size()<<endl;

        vector<int> v6;
        v6.push_back(10);
        v6.push_back(20);
        v6.push_back(30);
        // insert
        cout<<"Zero th element of vector v6 before inserting 90 at begining:"<<v6.at(0)<<endl;
        v6.insert(v6.begin(),90);
        cout<<"zero th element of vector v6 after inserting 90 at begining of vector v6:"<<v6.at(0)<<endl;
        cout<<"end element of vector v6 before inserting 100 :"<<*(v6.end()-1)<<endl;
        v6.insert(v6.end(),100);
        cout<<"end element of vector v6 after inserting 100:"<<*(v6.end()-1)<<endl;

        // erase(from,to)

        cout<<"size of vector v6 before erase:"<<v6.size()<<endl;
        v6.erase(v6.begin(),v6.end());
        cout<<"size of vector v6 after erase:"<<v6.size()<<endl;

        vector<int> v7;
        vector<int> v8;

        v7.push_back(10);
        v7.push_back(20);
        v7.push_back(30);

        v8.push_back(1);
        v8.push_back(2);
        v8.push_back(3);

        v7.swap(v8);

        cout<<"After swapping v8 to v7"<<endl;
        for(int i=0;i<v7.size();i++)
        {
            cout<<v7[i]<<" ";
        }

        cout<<endl;

           cout<<"After swapping v8 to v7"<<endl;
         for(int i=0;i<v8.size();i++)
        {
            cout<<v8[i]<<" ";
        }

        // for each loop

        cout<<endl;
        for(int i:v8)
        {
            cout<<i<<" ";
        }

        // erase
        vector<int> v9;
        v9.push_back(10);
        v9.push_back(20);
        v9.push_back(30);
        v9.push_back(40);
        cout<<"size of v9 before erase: "<<v9.size()<<endl;
        v9.erase(v9.begin());
        cout<<"size of v9 after erase: "<<v9.size()<<endl;
        cout<<"first element after erasing first element:"<<*(v9.begin())<<endl;
        v9.erase(v9.begin(),v9.end());
        cout<<"size of v9 after erasing elements from begin to end:"<<v9.size()<<endl;


        // Iterator :
        cout<<"printing elements through iterator:"<<endl;
        vector<int>::iterator it = v8.begin();

        while(it != v8.end())
        {
            cout<<*it<<" ";
            it++;
        }











}