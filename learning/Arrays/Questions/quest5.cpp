#include "iostream"
using namespace std;

/*

1. Find the largest element in an array.
2. Find the smallest element in an array.
3. Calculate the sum of all elements.
4. Calculate the average of all elements.
5. Count the number of even and odd elements.
6. Search for a given element (Linear Search).
7. Find the index of a given element.
8. Reverse an array.
    --> Traverse loop reversely
    --> Two pointer
        -> while loop
        -> for loop
10. Count the occurrences of a given element.
11. Find the second largest element.
12. Find the second smallest element.
13. Check whether the array is sorted in ascending order.
14. Find the maximum and minimum in a single traversal.
15. Copy one array into another.
16. swap alternate
17. find unique element

*/

// 1. Find the largest element in an array.



void min_max_sum_avg_odd_even(int arr[],int size)
    {
    int max = INT_MIN;
    int min = INT_MAX;
    int sum = 0;
    int even =0;
    int odd = 0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
        if(arr[i] %2 ==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    float avg ;
  cout<<"max: "<<max<<endl;
  cout<<"min: "<<min<<endl;
  cout<<"sum: "<<sum<<endl;
  cout<<"avg: "<<sum/size<<endl;
  cout<<"even: "<<even<<endl;
  cout<<"odd: "<<odd<<endl;

}

// 6. Search for a given element (Linear Search).

bool search(int arr[],int size,int key)
{
    bool flag = false;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

int search_index(int arr[],int size,int key)
{
    int index = -1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            index = i;
            break;
        }
    }
    return index;
}

// 8. Reverse an array.

void reverse_1(int arr[],int size)
{
    for(int i=size-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}

void reverse_2(int arr[],int size)
{
    int start = 0;
    int end = size-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void reverse_3(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=size-1;j<=0;j--)
        {
            swap(arr[i],arr[j]);
        }
    }
}

int occurence(int arr[], int size,int key)
{
    int occ = 0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            occ++;
        }
    }
    return occ;
}

// 11. Find the second largest element.
// 12. Find the second smallest element.

void sec_min_max_first_min_max(int arr[],int size)
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
        else if(arr[i]>sec_max)
        {
            sec_max = arr[i];
        }
    }

    int first_min = INT_MAX;
    int sec_min = INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<first_min)
        {
            sec_min= first_min;
            first_min = arr[i];
        }
        else if(arr[i] < sec_min)
        {
            sec_min = arr[i];
        }
    }
    cout<<"first_max:"<<first_max<<endl;
    cout<<"second_max:"<<sec_max<<endl;
    cout<<"first_min:"<<first_min<<endl;
    cout<<"second_min:"<<sec_min<<endl;
}



void PrintArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {1,2,5,8,-7,3};
    cout<<"largest element in an array:"<<endl;
    min_max_sum_avg_odd_even(arr,std::size(arr));
    bool flag = search(arr,std::size(arr),5);
    if(flag)
    {
        cout<<"present"<<endl;
    }
    else
    {
        cout<<"not-present"<<endl;
    }

    cout<<search_index(arr,std::size(arr),5)<<endl;
    reverse_1(arr,std::size(arr));
    cout<<endl;
    reverse_2(arr,std::size(arr));
    PrintArray(arr,std::size(arr));
    cout<<endl;
    reverse_3(arr,std::size(arr));
    PrintArray(arr,std::size(arr));
    cout<<endl;
    cout<<"occurence of 5 in an array:"<<occurence(arr,std::size(arr),5)<<endl;
    int arr1[] = {1,6,9,8,-2};
    sec_min_max_first_min_max(arr1,std::size(arr1));



   
    


    return 0;
}
