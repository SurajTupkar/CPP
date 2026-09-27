//  Q. Find Unique element in an array.


#include "iostream"
using namespace std;


int approach2(int arr[],int size)
{
    int ans = 0;
    for(int i=0;i<size;i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}

// brute force
void approach1(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[i]=0;
                arr[j]=0;
            }
        }
    }
}

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=0)
        {
            cout<<arr[i]<<" ";
        }
    }
}


int main()
{
    int arr[] = {1,3,1,3,4};
    int n = sizeof(arr)/sizeof(int);
    // int ans = 0;
    // for(int i=0;i<n;i++)
    // {
    //     ans = ans^arr[i];
    //     cout<<ans<<" ";
    // }

    cout<<approach2(arr,n)<<endl;
    approach1(arr,n);
    printArray(arr,n);



   // cout<<"\nUnique element is "<<ans<<endl;
  


    return 0;
}