/*
Questions :
1. Print all elements
2. sum of all elements
3. largest element
4. small element
5. second largest element

*/



#include "iostream"
#include <iterator>
using namespace std;


int main()
{
   // cout<<__cplusplus;
    int arr[5] = {1,2,3,4,5};
    // int largest = 0;
    int n = std::size(arr);
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]>largest)
    //     {
    //         largest = arr[i];
    //     }
    // }
    // cout<<largest<<endl;

    int sec = arr[0];
    int arr1[5];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>sec)
        {
            sec = arr[i];
        }
    }



    // int small = arr[0];
    // for(int i=0;i<std::size(arr);i++)
    // {
    //     if(arr[i]<small)
    //     {
    //         small = arr[i];
    //     }
    // }

    // cout<<small<<endl;

    // for(int i=0;i<std::size(arr);i++)
    // {
    //     cout<<arr[i]<<endl;
    // }

    // int sum = 0;
    // for(int i=0;i<std::size(arr);i++)
    // {
    //     sum+=arr[i];
    // }
    // cout<<"sum:"<<sum<<endl;

    // int largest = arr[0];
    // for(int i=0;i<std::size(arr);i++)
    // {
    //     if(arr[i]>largest)
    //     {
    //         largest = arr[i];
    //     }
    // }
    // cout<<largest<<endl;



    return 0;
}
