/*

Level 1 – Basics (Warm-up)
1. Find the largest element in an array.
2. Find the smallest element in an array.
3. Calculate the sum of all elements.
4. Calculate the average of all elements.
5. Count the number of even and odd elements.
6. Search for a given element (Linear Search).
7. Find the index of a given element.
8. Reverse an array.
9. Print an array in reverse order (without modifying it).
10. Count the occurrences of a given element.
11. Find the second largest element.
12. Find the second smallest element.
13. Check whether the array is sorted in ascending order.
14. Find the maximum and minimum in a single traversal.
15. Copy one array into another.


Questions from lecture :

1. Sum of all elements
2. Find key in an array
3. Reverse an array
    -> 2 Approaches
        -> 1. Reverse loop
        -> 2. Swap
4. swap alternate
5. find unique element
    -> 2 Approaches
        -> 1. Duplicate element replace as 0
        -> 2. XOR operator
6. find duplicate element
7. Intersection of array (same element from two array)
8. Pair sum
9. Triplet sum
10. Sort 0's & 1's


*/

#include "iostream"
using namespace std;

/*
1. Find the largest element in an array.
2. Find the smallest element in an array.
3. Calculate the sum of all elements.
4. Calculate the average of all elements.
5. Count the number of even and odd elements.
*/

void min_max_sum_avg_even_odd(int arr[], int size)
{
    int min = INT_MAX;
    int max = INT_MIN;
    float sum = 0;
    int even = 0;
    int odd = 0;
    for(int i=0; i<size; i++)
    {
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
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    cout<<"max:"<<max<<endl;
    cout<<"min:"<<min<<endl;
    cout<<"even:"<<even<<endl;
    cout<<"odd:"<<odd<<endl;
    cout<<"sum:"<<sum<<endl;
    cout<<"avg:"<<sum/size<<endl;
}

/*
6. Search for a given element (Linear Search).
7. Find the index of a given element.
10. Count the occurrences of a given element.
*/

void search(int arr[],int size,int key)
{
    int occ = 0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            occ++;
            cout<<"index:"<<i<<endl;
            cout<<"present"<<endl;
        }
    }cout<<"occurence of given element:"<<occ<<endl;
}

/*
8. Reverse an array.
9. Print an array in reverse order (without modifying it).
*/

void reverse1(int arr[], int size)
{
    for(int i=size-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}

void reverse2(int arr[],int size)
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

void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    min_max_sum_avg_even_odd(arr,std::size(arr));
    search(arr,std::size(arr),5);
    reverse1(arr,std::size(arr));
    reverse2(arr,std::size(arr));
    cout<<endl;
    printArray(arr,std::size(arr));



    return 0;
}