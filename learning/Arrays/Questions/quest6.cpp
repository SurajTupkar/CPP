#include "iostream"
using namespace std;

/*
Table Tennis Game Logic problem
Game 1 → A = 2, B = 0
Game 2 → A = 5, B = 0
Game 3 → A = 2, B = 2
*/


int main()
{
    int arr[] = {2, 0, 5, 0, 2, 2};
    int count = 0;
    for(int i=0;i<std::size(arr);i+=2)
    {
        int a = arr[i];
        int b = arr[i+1];
        int total = a+b;
        int group = total / 2;
        if(group % 2 == 0)
        {
            count++;
        }
    }
    cout<<"count:"<<count<<endl;




    return 0;
}