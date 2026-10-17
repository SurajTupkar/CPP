#include "iostream"
#include "vector"
using namespace std;


int main()
{
    vector<int>v;

    // push_back : to add element in an vector

    v.push_back(10);
    for(int i=0;i<size(v);i++)
    {
        cout<<v[i]<<endl;
    }

    v.push_back(20);
    cout<<"v.size():"<<v.size()<<endl;   // 2
    cout<<"v.capacity():"<<v.capacity()<<endl; //4
    v.push_back(30);
    cout<<"after pushing 3"<<endl;
    cout<<"v.size():"<<v.size()<<endl; // 3
    cout<<"v.capacity():"<<v.capacity()<<endl; // 4
    v.push_back(40);

    cout<<"size of vector:"<<v.size()<<endl; 4
    cout<<"capacity of vector:"<<v.capacity()<<endl; 4
    v.push_back(50);
    cout<<"capacity of vector:"<<v.capacity()<<endl; // 8






    return 0;
}