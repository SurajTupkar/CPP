// find intersection of two array

#include "iostream"
using namespace std;



int main()
{
    int arr1[] = {1,2,3,4,2,2};
    int arr2[] = {2,3};

    
    for(int i=0;i<std::size(arr1);i++)
    {
        int flag = false;
        for(int k=0;k<i;k++)
        {
            if(arr1[k] == arr1[i])
            {
                flag = true;
                break;
            }
        }
        if(flag)
        {
            continue;
        }
        for(int j=0;j<std::size(arr2);j++)
        {
            if(arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<" ";
            }
        }
    }



}