#include "iostream"
using namespace std;

// Triplet with given sum

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int sum = 12;
    for(int i=0; i<std::size(arr);i++)
    {
        for(int j=i+1;j<std::size(arr);j++)
        {
            for(int k=j+1;k<std::size(arr);k++)
            {
                if(arr[i]+arr[j]+arr[k]==sum)
                {
                    cout<<arr[i]<<"+"<<arr[j]<<"+"<<arr[k]<<"="<<sum<<endl;
                    break;

                }
            }
        }
    }


    return 0;
}