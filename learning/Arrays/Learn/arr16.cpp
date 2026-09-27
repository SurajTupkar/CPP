//  sort 0's and 1's

#include "iostream"
using namespace std;


int main()
{
    int arr[] = {1,0,1,1,1,0};
    int n = std::size(arr);
    int start = 0;
    int end = n-1;

    // sorting like 0 0 1 1 1 1
    // while(start<end)
    // {
    //     if(arr[start]==0)
    //     {
    //         start++;
    //     }
    //     else if(arr[end]==1)
    //     {
    //         end--;
    //     }
    //     else{
    //         swap(arr[start],arr[end]);
    //     }
    // }

    // sorting like 1 1 1 1 0 0

    while(start<end)
    {
        if(arr[start]==1)
        {
            start++;
        }
        else if(arr[end]==0)
        {
            end--;
        }
        else
        {
            swap(arr[start],arr[end]);
        }
    }


    // for(int i=0;i<std::size(arr);i++)
    // {
    //     for(int j=n-1;j>0;j--)
    //     {
    //         if(arr[i] ==0)
    //         {
    //             break;
    //         }
    //         else if (arr[j]==1)
    //         {
    //             break;
    //         }
    //         else
    //         {
    //             swap(arr[i],arr[j]);
    //         }
    //     }
    // }
  

    for(int i=0;i<std::size(arr);i++)
    {
        cout<<arr[i]<<" ";
    }
   



    return 0;
}