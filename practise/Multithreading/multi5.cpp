#include "iostream"
using namespace std;


void even(int size)
{
    for(int i=0;i<size;i++)
    {
        if(i%2==0)
        {
            cout<<"even_number"<<endl;
        }
    }
    
}

void odd(int size)
{
    for(int i=0;i<size;i++)
    {
        if(i%2!=0)
        {
            cout<<"odd number"<<endl;
        }
    }
}

int main()
{
    thread t1(even);
    thread t2(odd);
    t1.join();
    t2.join();




    return 0;
}