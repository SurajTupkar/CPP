// Binary Search : 

#include "iostream"
using namespace std;


int binary_search(int arr[],int size,int key)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start+end)/2;
    int mid = start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }

        if(arr[mid]<key)
        {
            start++;
        }
        else
        {
            end--;
        }

        mid = start+(end-start)/2;
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int index = binary_search(arr,std::size(arr),5);
    cout<<"index: "<<index<<endl;


    return 0;
}