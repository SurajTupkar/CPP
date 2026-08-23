// 1. Find the largest element in an array.
// 2. Find the smallest element in an array.
// 3. Find the sum of all elements in an array.
// 4. Find the average of all elements in an array.
// 5. Count the number of even and odd elements.
// 6. Count the number of positive, negative, and zero elements.

#include "iostream"
using namespace std;

void min_max(int arr[],int size)
{
    int max = INT_MIN;
    int min = INT_MAX;
    int sum = 0;
    int odd = 0;
    int even = 0;
    int positive = 0;
    int negative = 0;
    int zero = 0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            positive++;
        }
        else if(arr[i]<0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        sum+=arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
        }

        if(arr[i]<min)
        {
            min=arr[i];
        }
    }

    cout<<"largest element in an array:"<<max<<endl;
    cout<<"smallest element in an array:"<<min<<endl;
    cout<<"sum of all elements in an array:"<<sum<<endl;
    cout<<"avg of all elements in an array:"<<sum/size<<endl;
    cout<<"odd elements in an array:"<<odd<<endl;
    cout<<"even elements in an array:"<<even<<endl;
    cout<<"positive elements in an array:"<<positive<<endl;
    cout<<"negative elements in an array:"<<negative<<endl;
    cout<<"zero elements in an array:"<<zero<<endl;

}

int main()
{

    int arr[] = {1,-3,-4,9,22};
    min_max(arr,std::size(arr));



    return 0;
}