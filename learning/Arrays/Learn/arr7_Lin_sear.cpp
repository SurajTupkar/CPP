/*

Linear Search :
    -> Find the given key is present or not in the array.
    -> Reverse an array.

*/


#include "iostream"
using namespace std;


bool search(int arr[],int n,int k)
{
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            
            flag=true;
            break;
        }
    }
    return flag;

}

void reverse(int arr[],int size)
{
    
    //Approach 1 : Linear Search
   
    // for(int i=size-1;i>=0;i--)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    int start = 0;
    int end = size - 1;
    while(start<=end)
    {
        // swap(arr[start],arr[end]);
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
   

  

   
}

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};
    int arr1[4] = {1,2,3,4};
    int k;
    cout<<"Enter element to find in array:";
    cin>>k;
    bool flag = search(arr,std::size(arr),k);
    if(flag)
    {
        cout<<"Present"<<endl;
    }
    else
    {
        cout<<"Not Present"<<endl;
    }

    cout<<"reversing an array:"<<endl;
    reverse(arr1,std::size(arr1));
    printArray(arr1,std::size(arr1));


  
}