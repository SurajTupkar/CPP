#include "iostream"
using namespace std;

int main()
{
    int arr[] = {1, 0, 2, 1, 4, 3, 7, 2, 5, 4};
    int count = 0;
    for(int i=0;i<std::size(arr);i+=2)
    {
        int a = arr[i];
        int b = arr[i+1];
        int total = a + b;
        int group = total / 2;
        if(group % 2 == 0)
        {
            count++;
        }
    }

    cout<<"Count: "<<count<<endl;



    return 0;
}