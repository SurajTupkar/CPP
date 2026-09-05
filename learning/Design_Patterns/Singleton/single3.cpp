/*
Thread-safe Singleton Design Patter :
    -> Let's suppose this is my multhreading environment 
        -> I have 2 threads : T1,T2
            -> Both come simulatneously at my getInstance method both check instance is nullptr
                -> so both will create object so 2 objects will created so we have to make it thread-safe.
                    -> So here locking and unlocking comes into the picture
                        -> we can lock thread so if one thread is executed then other thread will execute that part
                            but we use locking and unlocking at critical section
                        -> But the drawback point is locking and unlocking itself is expensive operation in multhereading 
                            -> so tried to avoid it as much as possible
    -> So in this code there is a scope of improvement 
        -> so we can avoid locking and unlocking some time
            -> what we are doing here if both theread (T1,T2) comes in getInstance method
               we are locked t2 and t1 execute critical section and create new object and return and unlock thread for T2
               now t2 check instance is nullptr or not and return.
            -> But if we have 3 threads t1,t2,t3 and and t1 comes early and create object then for t2,t3 our locking and unlocking 
                run t3 thread will lock t2 check instance is nullptr or not then check t3
            -> so what we can do we can do double lock checking. 
*/

#include "iostream"
using namespace std;

class singleton
{
    private:
    static singleton* instance;
    static mutex mtx;
    singleton()
    {
        cout<<"Default constructor called"<<endl;
    }

    public:
    static singleton* getInstance()
    {
        lock_guard<mutex> lock(mtx);
        if(instance == nullptr)
        {
            instance = new singleton();
        }

        return instance;
    }

};

singleton* singleton::instance = nullptr;
mutex singleton::mtx;

int main()
{
    singleton* ptr1 = singleton::getInstance();
    singleton* ptr2 = singleton::getInstance();
    cout<<(ptr1==ptr2)<<endl;

    delete ptr1,ptr2;


    return 0;
}