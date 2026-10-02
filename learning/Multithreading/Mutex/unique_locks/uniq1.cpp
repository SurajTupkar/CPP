#include "iostream"
#include "memory"
#include "mutex"
#include "thread"
#include "condition_variable"
using namespace std;

mutex mtx;
condition_variable cv;

bool dataReady = false;

void receiveData()
{
    cout<<"Thread 1 : Receiving ECU data..."<<endl;
    
    // Data received
    {
        lock_guard<mutex> lock(mtx);
        dataReady = true;
    }

    // Tell Thread 2 that data is ready
    cv.notify_one();
}

void processData()
{
    unique_lock<mutex> lock(mtx);

    // wait until dataReady becomes true
    cv.wait(lock,[]
    {
        return dataReady;
    });

    cout<<"Thread 2: Processing ECU data..."<<endl;
}


int main()
{
    thread t1(receiveData);
    thread t2(processData);

    t1.join();
    t2.join();



    return 0;
}