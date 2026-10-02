#include "iostream"
#include "mutex"
#include "thread"
using namespace std;


int tickets = 1;
mutex mtx;

void book_tickets(int threadnumber)
{

    lock_guard<mutex> lock(mtx);
    if(tickets>0)
    {
        cout<<"Thread_ID:"<<this_thread::get_id()<<endl;
        cout<<"Thread Number:"<<threadnumber<<endl;
        tickets--;
        cout<<"tickets remaining:"<<tickets<<endl;
        // book tickets
    }
}

int main()
{
    std::thread t1(book_tickets,1);
    std::thread t2(book_tickets,2);
    t1.join();
    t2.join();
   // book_tickets();



    return 0;
}