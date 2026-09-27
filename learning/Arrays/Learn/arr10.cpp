// Find unique element in an array.

#include "iostream"
using namespace std;


int main()
{
    int arr[]={1,1,2,3,2,4,3};
    for(int i=0;i<std::size(arr);i++)
    {
        for(int j=i+1;j<std::size(arr);j++)
        {
            if(arr[i]==arr[j])
            {
                arr[i] = 0;
                arr[j] = 0;
            }
        }
    }

    for(int i=0;i<std::size(arr);i++)
    {
        if(arr[i]!=0)
        {
            cout<<arr[i]<<" ";
        }
    }


    return 0;
}