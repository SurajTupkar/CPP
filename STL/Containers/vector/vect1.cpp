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

        






}