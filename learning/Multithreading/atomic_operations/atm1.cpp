#include "iostream"
#include "thread"
#include "atomic"
#include "mutex"

using namespace std;

atomic<int> count = 0;
mutex mtx;

void counter()
{
   // lock_guard<mutex> lock(mtx);
    count++;
    cout<<"count"<<count<<endl;
}

int main()
{
    thread t1(counter);
    thread t2(counter);
    t1.join();
    t2.join();




    return 0;
}