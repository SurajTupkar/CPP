// 10. Find the second largest element in an array.

#include "iostream"
using namespace std;

int second_largest(int arr[],int size)
{
    int first_max = INT_MIN;
    int sec_max = INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>first_max)
        {
            sec_max = first_max;
            first_max = arr[i];
        }
        else if(arr[i]<first_max && arr[i]>sec_max)
        {
            sec_max = arr[i];
        }
    }
    return sec_max;
}

int main()
{
    //int arr[] = {1,2,3,4,5,5};
    int arr[] = {5,5,5};
    cout<<"second largest element in an array:"<<second_largest(arr,std::size(arr));




}