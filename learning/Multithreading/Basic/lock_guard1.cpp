#include "iostream"
#include "thread"
#include "mutex"
using namespace std;

int ticket = 1;
mutex mtx;

void book_ticket(int thread_num)
{
    lock_guard<mutex> lock(mtx);
    if(ticket>0)
    {
        cout<<"thread_id:"<<this_thread::get_id()<<endl;
        cout<<"thread number:"<<thread_num<<endl;
        ticket--;
        cout<<"Ticket Pending:"<<ticket<<endl;
    }
}

int main()
{
  
    thread t1(book_ticket,1);
    thread t2(book_ticket,2);
    t1.join();
    t2.join();



    return 0;
}