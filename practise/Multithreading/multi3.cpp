#include "iostream"
#include "mutex"
#include "condition_variable"
#include "thread"
using namespace std;


// first function -> Actually received data from ECU
// second function -> will check if data is received notify (thread 1) to process_data function (thread 2)
// third function -> Actually process data when data is received (thread 2) and it will wait for receving data 

bool dataReady = false;
mutex mtx;
condition_variable cv;

bool receive_data()
{
    // Here, Actually data is receiving 
    cout<<"Receiving data from ECU ... "<<endl;
    return true;
}

void receive()
{
    if(receive_data())
    {
        lock_guard<mutex> lock(mtx);
        dataReady = true;
        cout<<"Data Received"<<endl;
        cv.notify_one();
    }

}

void process_data()
{
    unique_lock<mutex> lock(mtx);
    cv.wait(lock,[]
    {
        return dataReady;
    });

    cout<<"Processing data ... "<<endl;
}

int main()
{
    thread t1(receive);
    thread t2(process_data);
    t1.join();
    t2.join();



    return 0;
}