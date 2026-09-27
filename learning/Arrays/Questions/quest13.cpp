//  Find missing element in an array

#include "iostream"
using namespace std;


int main()
{
    int arr[] ={0,2,3,1,4,5,6,8};
    int result = 0;

    for(int i=0;i<=std::size(arr);i++)
    {
        result = result^i;
    }


    for(int i=0;i<std::size(arr);i++)
    {
        result = result^arr[i];
    }

     cout<<result<<endl;

















    // for(int i=0;i<=std::size(arr);i++)
    // {
    //     result = result ^ i;
    // }

    // // for(int i=0;i<std::size(arr);i++)
    // // {
    // //     result = result ^ arr[i];
    // // }

    // for(int arr:arr)
    // {
    //     cout<<arr<<" ";
    // }


    //cout<<result<<endl;

    return 0;
}