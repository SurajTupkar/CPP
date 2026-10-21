#include "iostream"
#include "thread"
#include "mutex"
#include "condition_variable"
using namespace std;

mutex mtx;
condition_variable cv;
bool dataready = false;

void receive_data()
{
    cout<<"receiving data from ECU:"<<endl;

    // receive data
    {
        lock_guard<mutex>lock(mtx);
        dataready = true;
    }
    cv.notify_one();
}


void process_data()
{
    unique_lock<mutex> lock(mtx);
    cv.wait(lock,[]
    {
        return dataready;
    });
    cout<<"processing Data"<<endl;
}
int main()
{
    thread t1(receive_data);
    t1.join();
    thread t2(process_data);
    t2.join();



    return 0;
}