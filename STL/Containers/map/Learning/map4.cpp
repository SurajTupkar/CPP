#include "iostream"
#include "map"
using namespace std;


/*
Creation of map
    -> 1. empty map
    -> 2. using intialiser list
    -> 3. Copying an Existing Map
    -> 4. 


*/

int main()
{
    // -> 1. empty map
    map<int,string> empty_map;

    empty_map.insert({101,"A"});
    cout<<"size after inserting in empty_map:"<<empty_map.size()<<endl;

    // 2. using intialiser list
    map<int,string> student = {
        {1,"std1"},
        {3,"std3"},
        {2,"std2"}
    };

    // size
    cout<<"size of student map:"<<student.size()<<endl; // 3

    // 3. Copying an Existing Map
    map<int,string> student_copy = student;
    cout<<"size of student_copy map:"<<student_copy.size()<<endl; // 3

    // 4. Creating a map using Iterator Range
    map<int,string> student_copy1(student.begin(),student.end());
    cout<<"size of student_copy1 map:"<<student_copy1.size()<<endl;




    return 0;
}