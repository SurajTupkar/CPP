#include "iostream"
using namespace std;


// array = {3, 2, 4, 1, 0, 5, 6, 2}


int main()
{
    int arr[] = {3, 2, 4, 1, 0, 5, 6, 2};
    int count = 0;
    for(int i=0;i<std::size(arr);i+=2)
    {
        int a = arr[i];
        int b = arr[i+1];
        int total = a + b ;
        int group = total / 2;
        if(group % 2 == 0)
        {
            count++;
        }
    }

    cout<<"count: "<<count<<endl;


    return 0;
}