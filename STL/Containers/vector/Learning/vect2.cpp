#include <iostream>
#include <vector>

using namespace std;


int main()
{
    // 1. vector creation : empty
    vector<int> marks;
    cout<<"size of empty vector:"<<marks.size()<<endl;
    cout<<"capacity of empty vector:"<<marks.capacity()<<endl;
    cout<<"maximum size of empty vector:"<<marks.max_size()<<endl;

    // 2. vector creation : with some size
    vector<int> marks1(10);
    cout<<"size of vector marks1:"<<marks1.size()<<endl;
    cout<<"capacity of vector marks1:"<<marks1.capacity()<<endl;

    marks1.push_back(20);
    cout<<"size of vector marks1 after push_back(20):"<<marks1.size()<<endl;
    cout<<"capacity of vector marks1:"<<marks1.capacity()<<endl;

    // 3. vector creation : with some default values
    vector<int> marks2(10,2);
    cout<<"size of vector marks2:"<<marks2.size()<<endl;
    cout<<"capacity of vector marks2:"<<marks2.capacity()<<endl;

    cout<<"after iterating marks2"<<endl;
    for(int i=0;i<marks2.size();i++)
    {
        cout<<marks2[i]<<" ";
    }
    cout<<endl;


    // 4. vector creation with some values
    vector<int> marks3 = {10,20,30};

    // 5. size and capacity of vector having some values
    cout<<"size of vector marks3:"<<marks3.size()<<endl;
    cout<<"capacity of vector marks3:"<<marks3.capacity()<<endl;
    cout<<"max_size of vector marks3:"<<marks3.max_size()<<endl;

    // 6. push_back : entering element from end of the vector 
    for(int i=0;i<5;i++)
    {
        marks3.push_back(i);
    }

    

    // 7. iterate like c-style array or normal array
    for(int i=0;i<marks3.size();i++)
    {
        if(marks3[i]%2==0)
        {
            cout<<marks3[i]<<" ";
        }
    }

    cout<<endl;
    // Methods :

    // 1. begin() -> first element of the vector
    
    vector<int>v = {1,2,3,4,5};
    cout<<"v.begin():"<<*(v.begin())<<endl;

    // 2. end() -> pointing to the position after the last element of the vector

    cout<<"v.end():"<<*(v.end())<<endl; // after last element
    cout<<"v.end()-1:"<<*((v.end()-1))<<endl;


    // 3. push_back() : entering element from last

    v.push_back(6);
    cout<<"after push_back():"<<*(v.end()-1)<<endl;

    // 4. pop_back() : pop/remove element from vector at the end

    v.pop_back();
    cout<<"after pop_back last element:"<<*(v.end()-1)<<endl;


    // 5. size() : no.of elements present in the vector
    cout<<"v.size():"<<v.size()<<endl; 

    







    return 0;
}