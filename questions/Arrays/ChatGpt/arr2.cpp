// 7. Print the array elements in reverse order.
// 8. Find whether a given element exists in the array.


#include "iostream"
using namespace std;

void reverse_1(int arr[],int size)
{
    for(int i=size-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}

void reverse_2(int arr[],int size)
{
    int start= 0;
    int end = size-1;
    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[] = {1,2,3,4,5};
    reverse_1(arr,std::size(arr));
    cout<<endl;
    reverse_2(arr,std::size(arr));
    printArray(arr,std::size(arr));

    return 0;
}