// Homework Question :  sum of array through function

#include "iostream"
using namespace std;

int sum(int arr[],int n)
{
    int add=0;
    for(int i=0;i<n;i++)
    {
        add+=arr[i];
    }
    return add;
}

int main()
{
    int n;
    cout<<"Enter no. of elements:";
    cin>>n;
    int arr[n]={};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"sum of array's element:"<<sum(arr,n)<<endl;

    
    

    


    return 0;
}