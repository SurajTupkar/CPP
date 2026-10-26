#include "iostream"
#include "stack"
using namespace std;

/*
stack


*/

int main()
{
    // stack creation
    stack<int> stc;

    // Member Functions 

    // 1. size() -> no of elements present in the stack
    cout<<"size of stack:"<<stc.size()<<endl; //0

    // 2. push() -> to push the element in the stack
    stc.push(5);
    cout<<"size of stack:"<<stc.size()<<endl; // 1

    // 3. pop() -> to remove the top element from the stack
    stc.pop();
    cout<<"size of stack after pop:"<<stc.size()<<endl; //0

    // 4. top() -> top element present in the stack
    stc.push(10);
    stc.push(20);
    cout<<"top element present in the stack stc:"<<stc.top()<<endl;

    // 5. empty() -> Check stack is empty or not means check elements are 0 or not

    if(stc.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"stack is not empty"<<endl;
    }

    // 6. swap -> Swap elements of two stack
    stack<int>stc1;
    stc1.swap(stc);
    cout<<"top element present in the stack stc1:"<<stc1.top()<<endl;
    

    



    return 0;
}