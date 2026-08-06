/*
Arrays with functions


*/

#include "iostream"
using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int arr[]={1,2,3,4,5};
    printArray(arr,std::size(arr));



    return 0;
}