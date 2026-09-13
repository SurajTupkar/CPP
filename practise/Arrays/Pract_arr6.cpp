#include "iostream"
using namespace std;

// missing element in an array

void missing(int arr[],int size)
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

int main()
{
    int arr[] = {1,4,5,2};
    missing(arr,size(arr));




    return 0;
}