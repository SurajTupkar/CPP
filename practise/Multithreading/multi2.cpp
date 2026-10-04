#include "iostream"
#include "thread"
#include "mutex"
using namespace std;


int ticket = 1;
mutex mtx;

void book()
{
    lock_guard<mutex> lock(mtx);
    if(ticket>0)
    {
        ticket--;
        cout<<"Ticket Booked"<<endl;
    }
}

void ticket_booking()
{
    book();
}



int main()
{
    thread t1(ticket_booking);
    thread t2(ticket_booking);
    t1.join();
    t2.join();



    return 0;
}