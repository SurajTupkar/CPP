// 8. Find whether a given element exists in the array.
// 9. Count how many times a given element occurs in the array.

#include "iostream"
using namespace std;

int occurence(int arr[],int size,int key)
{
    int count = 0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            count++;
        }
    }
    return count;
}

bool search(int arr[],int size,int key)
{
   // bool flag = false;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return true;
        }

    }
    return false;
}

int main()
{

    int arr[] = {2,3,2,1,2,4};
    cout<<"count of given element:"<<occurence(arr,std::size(arr),2);
    cout<<endl;
    cout<<"existence of given element in an array:"<<search(arr,std::size(arr),2);




    return 0;
}