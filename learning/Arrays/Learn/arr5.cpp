/*
we are updating array in the main function through printArray function 
by passing arr as an address to the printArray function.
*/

#include "iostream"
using namespace std;


void printArraybeforefunction(int arr[],int n)
{
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

void printArray(int arr[],int n)
{
    arr[2]=30;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}


int main()
{

    int arr[]={1,2,3,4,5};
    printArraybeforefunction(arr,std::size(arr));
    cout<<endl;
    printArray(arr,std::size(arr));

    cout<<endl;
    cout<<"update array element in the original array also:"<<endl;
    for(int i=0;i<std::size(arr);i++)
    {
        cout<<arr[i]<<endl;
    }


    return 0;
}