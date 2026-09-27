/*
Arrays with functions


*/

#include "iostream"
using namespace std;

void printArray(string arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int arr[]={1,2,3,4,5};
    string arr1[]={"suraj"};
   // printArray(arr,std::size(arr));
    printArray(arr1,std::size(arr1));



    return 0;
}