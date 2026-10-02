#include "iostream"
#include "mutex"
#include "condition_variable"
#include "thread"
#include "queue"
using namespace std;

queue<int>q;
const int MAX_SIZE = 2;

mutex mtx;
condition_variable cv;

void producer()
{
    for(int i=0;i<=5;i++)
    {
        unique_lock<mutex> lock(mtx);

        // wait if queue is full
        cv.wait(lock, []
        {
            return q.size()<MAX_SIZE;
        });

        q.push(i);
        
        cout<<"Produced:"<<i<<endl;
        // Tell consumer that data is available
        cv.notify_one();
    }
}

void consumer()
{
    for(int i=0;i<=5;i++)
    {
        unique_lock<mutex> lock(mtx);

        // wait if queue is empty
        cv.wait(lock,[]
        {
            return !q.empty();
        });
        int data = q.front();
        q.pop();
        cout<<"consumerd: "<<data<<endl;

        // Tell producer that space is available
        cv.notify_one();
    }

}


int main()
{

    thread t1(producer);
    thread t2(consumer);
    t1.join();
    t2.join();


    return 0;
}