// Find Duplicate element in array

#include "iostream"
using namespace std;



int main()
{
    int arr[] = {1,2,3,4,1};
    // for(int i=0;i<std::size(arr);i++)
    // {
    //     for(int j=i+1;j<std::size(arr);j++)
    //     {
    //         if(arr[i]==arr[j])
    //         {
    //             cout<<arr[i]<<endl;
    //             break;
    //         }
    //     }
    // }

    int ans = 0;
    for(int i=0;i<std::size(arr);i++)
    {
        ans = ans^arr[i];
    }

    for(int i=1;i<std::size(arr);i++)
    {
        ans = ans^i;
    }

    cout<<ans<<endl;




    return 0;
}