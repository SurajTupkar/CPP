#include "iostream"
#include "queue"
using namespace std;


int main()
{
    // creation
    queue<int>q;

    // Member Functions

    // 1. push -> to add the element in the queue from rear
    q.push(10);
    q.push(20);
 
   // 2. pop -> to remove the element from the queue from front
    q.pop();

    // 3. front() -> to access the element present at the front/first
    cout<<"front element present in the queue q:"<<q.front()<<endl; // 10

    // 4. back() -> to remove the element present at the back/last
    cout<<"back element present in the queue q:"<<q.back()<<endl;  // 20

    // 5. size() -> no.of elements present in the queue.
    cout<<"size of queue q after push(10):"<<q.size()<<endl; // 2

    // 6. empty() -> check queue is empty or not
    if(q.empty())
    {
        cout<<"queue q is empty"<<endl; // --
    }
    else
    {
        cout<<"queue q is not empty"<<endl;
    }

    // 7. swap() -> swap element present the queue
    queue<int> a;
    a.push(10);
    a.push(20);

    queue<int>b;
    b.push(100);
    b.push(200);
    
    a.swap(b);
    
    cout<<"front element of a :"<<a.front()<<endl; // 100
    cout<<"back element of a :"<<a.back()<<endl;  //  200

    cout<<"front element of b:"<<b.front()<<endl; // 10
    cout<<"back element of b:"<<b.back()<<endl;    // 20

    return 0;
}