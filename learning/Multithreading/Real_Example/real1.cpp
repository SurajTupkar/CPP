#include "iostream"
#include "thread"
#include "mutex"
#include "condition_variable"
using namespace std;

bool dataReady = false;
condition_variable cv;
mutex mtx;

bool receive_data()
{
    // assuming here data is received
    cout<<"Receiving data from ECU ... "<<endl;
    return true;

}

void receive()
{
    if(receive_data())
    {
        {
             lock_guard<mutex> lock(mtx);
            dataReady = true;

        }
       
    }
    cv.notify_one();
}

void process_data()
{
    unique_lock<mutex> lock(mtx);
    cv.wait(lock,[]
    {
        return dataReady;
    });

    cout<<"ECU data Received Processing data ... "<<endl;
}

int main()
{
    thread t1(receive);
    thread t2(process_data);
    t1.join();
    t2.join();



    return 0;
}