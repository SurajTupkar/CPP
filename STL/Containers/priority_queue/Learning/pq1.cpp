#include <iostream>
#include <queue>
using namespace std;


int main()
{
    // max_heap -> priority -> highest element
    priority_queue<int> pq;
    
    // 1. push()
    pq.push(10);
    pq.push(20);
    pq.push(8);
    pq.push(30);
    
    // 2. pop()
    pq.pop();
    
    
    // 3. top()
    cout<<"top:"<<pq.top()<<endl;

    // 4. size()
    cout<<"size of pq:"<<pq.size()<<endl;

    // 5. empty()
    if(pq.empty())
    {
        cout<<"pq is empty"<<endl;
    }
    else
    {
        cout<<"pq is not empty"<<endl;
    }

    // 6. swap

    priority_queue<int>pq1;
    pq.swap(pq1);
    cout<<"top of pq1:"<<pq1.top()<<endl;
    cout<<"Size of pq1:"<<pq1.size()<<endl; 



    // min_heap -> High priority -> Min element
    priority_queue<int,vector<int>,greater<int>>pqm;
    pqm.push(10);
    pqm.push(20);
    pqm.push(30);

    // 10 20 30
    cout<<"top of pqm:"<<pqm.top()<<endl; //10
    
    // 2. pop -> 20 30
    pqm.pop();
    cout<<"top of pqm:"<<pqm.top()<<endl; // 20

    pqm.push(8);
    cout<<"top of pqm:"<<pqm.top()<<endl; // 8

    return 0;
}