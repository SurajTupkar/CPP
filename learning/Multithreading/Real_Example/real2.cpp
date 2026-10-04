#include "iostream"
#include "mutex"
#include "condition_variable"
#include "thread"
using namespace std;

// Func 1 -> Actually Receiving data from ECU
// Func 2 -> If data is received from ECU then notify to Func 3 -> Thread 1
// Func 3 -> wake up when is data is ready and process data  -> Thread 2

bool dataReady = false;
condition_variable cv;
mutex mtx;

bool receiving_data()
{
    // Here I am assuming data is received
    cout<<"Receiving data from ECU ... "<<endl;
    return true;

}

void received_data()
{
    if(receiving_data())
    {
        lock_guard<mutex> lock(mtx);
        dataReady = true;
        cout<<"Data is Received from ECU"<<endl;
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
    cout<<"Processing data"<<endl;

}

int main()
{
    thread t1(received_data);
    thread t2(process_data);
    t1.join();
    t2.join();



    return 0;
}