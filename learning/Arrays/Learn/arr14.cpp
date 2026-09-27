// pair sum

#include "iostream"
using namespace std;


int main()
{
    int arr[] = {1,2,3,4,5};
    int sum = 5;
    for(int i=0;i<std::size(arr);i++)
    {
        for(int j=i+1;j<std::size(arr);j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                cout<<arr[i]<<"+"<<arr[j]<<"="<<sum<<endl;
                break;
            }
        }
    }


    return 0;
}