#include "iostream"
#include "mutex"
#include "thread"
using namespace std;

/*
singleton design pattern :
    -> It says a class should have only one instance
    -> Means let suppose i have class named singleton 
        -> so normally i can create multiple instances of class
        -> but if we implement singleton design pattern we can create only one instance of this singleton class
    


*/

class singleton
{
    private:
    singleton()
    {
        cout<<"constructot called"<<endl;
    }

    public:
    static singleton* instance;
    static mutex mtx;
    static singleton* getInstance()
    {
        if(instance == nullptr)
        {
            lock_guard<mutex> lock(mtx);
            if(instance == nullptr)
            {
                instance = new singleton();
            }
        }

        return instance;
    }

    static void deleteinstance()
    {
        delete instance;
        instance = nullptr;
    }

    ~singleton()
    {
        cout<<"destructor called"<<endl;
    }

};

singleton* singleton::instance = nullptr;
mutex singleton::mtx;


void task(int thread_no)
{
    singleton* ptr = singleton::getInstance();
    cout<<"thread_id:"<<this_thread::get_id()<<" and thread_no:"<<thread_no<<endl;
}

int main()
{
    thread t1(task,1);
    thread t2(task,2);
    t1.join();
    t2.join();

    singleton::deleteinstance();

  



    return 0;
}