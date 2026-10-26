#include "iostream"
#include "map"
using namespace std;


int main()
{
    map<int,string> emp;
    /*
    insert 
        -> 3 ways
            -> 1. insert({1,"suraj"}) -> means we are sending pair (key,value) in the input argument
                -> If the key is not present : it will insert the key in the map
                -> If key is already present : it should not do anything
                    -> feature : C++98
            -> 2. emplace
                -> emplace(1,"suraj") -> here insted of sending pair in the input argument here i am sending just an argument in the input
                    -> If key is not present : it will insert the key in the map
                    -> if key is already present : it will not insert the key in the map it may still try to construct key in the map
                        -> feature : C++11
            -> 3. try_emplace
                -> emplace(1,"suraj") -> here also i am doing same thing like emplace just sending arguments in the input 
                    -> if key is not present : it will insert the key in the map
                    -> If key is present : it will not insert the key in the mao and also it will not try to construct it also
                        -> feature : C++17
    */ 

    emp.insert({1,"suraj"});
    auto it = emp.begin();
    cout<<it->first<<endl; // 1
    cout<<it->second<<endl; // suraj

    emp.insert({1,"amay"});
    auto it1 = emp.begin();
    cout<<it1->first<<endl;
    cout<<it1->second<<endl;

    emp.emplace(2,"nishank");
    auto it3 = emp.begin();
    it3++;
    cout<<it3->first<<endl; //2
    cout<<it3->second<<endl; //nishank
    cout<<"size of emp:"<<emp.size()<<endl; // 2

    emp.emplace(2,"shashank");
    cout<<"size of emp:"<<emp.size()<<endl;

    //try_emplace()
    emp.try_emplace(3,"vinayak");
    it3++;
    cout<<it3->first<<endl;
    cout<<it3->second<<endl;

    



    return 0;
}