#include "iostream"
#include "list"
using namespace std;


int main()
{
    list<int>lst;

    // 1. push_back

    lst.push_back(10);
    lst.push_back(20);
    // 10->20
    lst.push_back(30);
    // 10->20->30


    // 2. push_front
    lst.push_front(100);
    // 100->10->20->30
    lst.push_front(200);
    // 200->100->10->20->30

    // 3. pop_back
    lst.pop_back();
    // 200->100->10->20

    // 4. pop_front
    lst.pop_front();
    // 100->10->20

    // 5. begin()
    cout<<"begin of lst:"<<*(lst.begin())<<endl; // 100

    // 6. end()
    cout<<"end of lst:"<<*(lst.end())<<endl; // 30

    // 7. size()
    cout<<"size of lst:"<<lst.size()<<endl; // 3

    // 8. front()
    cout<<"front() of lst:"<<lst.front()<<endl; // 200

    // 9. back()
    cout<<"back() of lst:"<<lst.back()<<endl; // 20

    // 10. insert
    lst.insert(lst.begin(),200);
     // 200->100->10->20
    lst.insert(lst.begin(),300);


    // 11. erase
    lst.erase(lst.begin());

    // 12. clear

    // 13.  empty

    // 14. remove

    // 15. swap


    // iterator
    list<int>::iterator it = lst.begin();
    while(it!=lst.end())
    {
        cout<<*it<<" ";
        it++;
    }cout<<endl;






    return 0;
}