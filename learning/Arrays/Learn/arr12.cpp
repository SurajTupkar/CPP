#include "iostream"
using namespace std;

// Find all duplicate elements in an array but print uniquely


void duplicate(int arr[],int size)
{
    bool flag = false;
    for(int i=0;i<size;i++)
    {
        for(int k = 0;k<i;k++)
        {
            if(arr[k]==arr[i])
            {
                flag = true;
                break;
            }
        }

        if(flag)
        {
            continue;
        }

        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
}



int main()
{
   int arr[] = {1,2,2,2,3,1,4,5,6,3};
   //int arr[] = {1,2,2,2,3,1,3};
    duplicate(arr,std::size(arr));

    return 0;
}