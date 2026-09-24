#include "iostream"
using namespace std;

// missing element in an array

void missing_1(int arr[],int size)
{
    int n = size+1;
    int sum_of_all_elem_1_n   = n*(n+1)/2;
    int sum_of_all_elem_array = 0;
    for(int i=0;i<size;i++)
    {
        sum_of_all_elem_array+=arr[i];
    }
    cout<<"Missing Element:"<<sum_of_all_elem_1_n-sum_of_all_elem_array<<endl;
}

void missing_2(int arr[],int size)
{
    int ans = 0;
    for(int i=0;i<size;i++)
    {
        ans = ans^arr[i];
    }

    for(int i=0;i<=size+1;i++)
    {
        ans = ans^i;
    }
    cout<<ans<<endl;
}



int main()
{
    int arr[] = {1,4,5,2};
    missing_1(arr,size(arr));
    missing_2(arr,size(arr));




    return 0;
}