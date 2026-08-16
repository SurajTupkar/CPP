#include "iostream"
#include <iterator>
using namespace std;


int main()
{
   // int arr[];  // Not allowed
    int arr1[]={1,6,2,8,0,3,0,5}; 
    int arr2[std::size(arr1)];    
    for(int i=0;i<std::size(arr1);i++)
    {
        if(arr1[i]==0)
        {
            arr2[i]=arr1[i];
            
        }
    }

    // for(int i=0;i<std::size(arr1);i++)
    // {
    //     if(arr1[i]!=0)
    //     {
    //         arr2[i]=arr1[i];
    //     }
    // }

    for(int i=0;i<2;i++)
    {
        cout<<arr2[i]<<endl;
    }

    return 0;
}