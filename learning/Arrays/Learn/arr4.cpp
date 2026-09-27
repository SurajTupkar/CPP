// Max and Min element using function

#include "iostream"
using namespace std;

int printmax(int arr[],int n)
{
    int maximum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        maximum = max(maximum,arr[i]);
        // if(arr[i]>max)
        // {
        //     maxi = arr[i];
        // }
    }
    return maximum;
}

int printmin(int arr[], int n)
{
    int minimum = INT_MAX;
    for(int i=0;i<n;i++)
    {
        minimum = min(minimum,arr[i]);
        // if(arr[i]<min)
        // {
        //     min = arr[i];
        // }
    }
    return minimum;
}


int main()
{

    int arr[] = {1,20,3,4,5};
    cout<<"max element:"<<printmax(arr,std::size(arr))<<endl;
    cout<<"min element:"<<printmin(arr,std::size(arr))<<endl;


    



    return 0;
}