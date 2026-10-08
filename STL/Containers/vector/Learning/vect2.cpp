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
    vector<int> marks2(10);
    cout<<"size of vector marks2:"<<marks2.size()<<endl;
    cout<<"capacity of vector marks2:"<<marks2.capacity()<<endl;

    marks2.push_back(20);
    cout<<"size of vector marks2 after push_back(20):"<<marks2.size()<<endl;
    cout<<"capacity of vector marks2:"<<marks2.capacity()<<endl;

    

    // 2. vector creation with some values
    vector<int> marks1 = {10,20,30};

    // 3. size and capacity of vector having some values
    cout<<"size of vector marks1:"<<marks1.size()<<endl;
    cout<<"capacity of vector marks1:"<<marks1.capacity()<<endl;
    cout<<"max_size of vector marks1:"<<marks1.max_size()<<endl;

    // 4. push_back : entering element from end of the vector 
    for(int i=0;i<5;i++)
    {
        marks1.push_back(i);
    }

    

    // 5. iterate like c-style array or normal array
    for(int i=0;i<marks1.size();i++)
    {
        if(marks1[i]%2==0)
        {
            cout<<marks1[i]<<" ";
        }
    }








    return 0;
}