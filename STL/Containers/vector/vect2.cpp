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
    v.push_back(30);
    v.push_back(40);

    cout<<"size of vector:"<<v.size()<<endl;
    cout<<"capacity of vector:"<<v.capacity()<<endl;
    v.push_back(50);
    cout<<"capacity of vector:"<<v.capacity()<<endl;






    return 0;
}