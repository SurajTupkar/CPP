//  Check whether the array is sorted in ascending order.

#include "iostream"
using namespace std;


int main()
{
    int arr[] = {1,2,3,4,5};
    int start = 0;
    int end = std::size(arr)-1;
    bool flag = true;

    for(int i=0;i<std::size(arr)-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            flag = false;
        }
    }
    // while(start<end)
    // {
    //     if(arr[start]<arr[end])
    //     {
    //         flag = true;
    //         start++;
    //         end--;

    //     }
    // }

    if(flag)
    {
        cout<<"sorted in ascending order"<<endl;
    }

    return 0;
}