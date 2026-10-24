#include <iostream>
#include <map>
using namespace std;

/*
    Insertion in map
        -> 1. using insert function
        -> 2. [] operator
        -> 3. make_pair
        -> 4. pair
*/


int main()
{


    // empty_map
    map<int,string> student;

    // insetion

    // 1. using insert function
    student.insert({1,"Amit"});

    cout<<"size of student map:"<<student.size()<<endl; // 1

    auto result2 = student.insert({2,"Rahul"});
    cout<<"size of student map:"<<student.size()<<endl; // 2
    cout<<"result2 is inserted or not:"<<result2.second<<endl;
    cout<<"value present in result2: "<<result2.first->second<<endl;

    // if am trying to insert duplicate key 
    auto result = student.insert({1,"xyz"});
    cout<<"size of student map:"<<student.size()<<endl;
    cout<<"entry is inserted or not:"<<result.second<<endl;
    cout<<"value present in the result:"<<result.first->second<<endl;

    // 2 . []

    student[4] = "Priya";
    cout<<"size of student map:"<<student.size()<<endl; // 3 

    // 3. make_list

    student.insert(make_pair<int,string>(3,"Arjun"));
    cout<<"size of student map:"<<student.size()<<endl;

    // 4. pair
    pair<int,string> p;
    p.first = 5;
    p.second = "Kirti";
    student.insert(p);
    cout<<"size of student map:"<<student.size()<<endl;
   


    return 0;
}