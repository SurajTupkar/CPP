// Max and Min element using function

#include "iostream"
using namespace std;

int printmax(int arr[],int n)
{
    int max = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}

int printmin(int arr[], int n)
{
    int min = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    return min;
}


int main()
{

    int arr[] = {1,20,3,4,5};
    cout<<"max element:"<<printmax(arr,std::size(arr))<<endl;
    cout<<"min element:"<<printmin(arr,std::size(arr))<<endl;


    



    return 0;
}