#include "iostream"
#include "thread"
#include "mutex"
using namespace std;

mutex mtx;
mutex mtx1;

//  print odd,even using two threads

void even()
{
    for(int i=0;i<5;i++)
    {
        lock_guard<mutex> lock(mtx);
        if(i%2==0)
        {
            cout<<"this is even number:"<<i<<endl;
        }

    }
    
}

void odd()
{
    for(int i=0;i<5;i++)
    {
        lock_guard<mutex> lock(mtx1);
        if(i%2!=0)
        {
            cout<<"this is odd number:"<<i<<endl;
        }
    }
    
}

int main()
{
    //int arr [] = {1,2,3,4}

    thread t1(even);
    thread t2(odd);
    t1.join();
    t2.join();




    return 0;
}