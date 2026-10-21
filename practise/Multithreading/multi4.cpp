// Ticket booking example

#include "iostream"
#include "thread"
#include "mutex"
using namespace std;


int ticket = 1; // one movie ticket is available
mutex mtx;

void book_ticket(int thread_id)
{

    lock_guard<mutex>lock(mtx);
    if(ticket>0)
    {
        cout<<"thread_no locks the mutex:"<<thread_id<<endl;
        cout<<"ticket available:"<<ticket<<endl;
        ticket--;
        cout<<"ticket booked"<<endl;
        cout<<"ticket available after booking:"<<ticket<<endl;
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