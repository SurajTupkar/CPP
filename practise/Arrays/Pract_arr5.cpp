/*	
Arrays Questions

Level 1 – Basics (Warm-up)
1. Find the largest element in an array.
2. Find the smallest element in an array.
3. Find the maximum and minimum in a single traversal.
4. Calculate the sum of all elements.
5. Calculate the average of all elements.
6. Count the number of even and odd elements.
7. Search for a given element (Linear Search).
8. Find the index of a given element.
9. Reverse an array.
	-> using Swap
		-> with while loop, Time Complexity : O(n)
		-> with for loop,   Time complexity : O(n)
10. Print an array in reverse order (without modifying it).
11. Count the occurrences of a given element.
12. Find the second largest element.
13. Find the second smallest element.
14. Check whether the array is sorted in ascending order.
15. Check whether the array is sorted in descending order.
16. Copy one array into another.
17. swap alternate
18. find unique element (Non-Repeating)
    -> 2 Approaches
        -> 1. Duplicate element replace as 0
        -> 2. XOR operator
		
19. find duplicate element
20. find missing element
		-> Approaches
			-> 1. Formula n*(n+1)/2  
			-> 2. XOR
21. Intersection of array (same element from two array)
22. Pair sum
23. Triplet sum
24. Sort 0's & 1's

*/


#include "iostream"
using namespace std;


/*
1. Find the largest element in an array.
2. Find the smallest element in an array.
3. Find the maximum and minimum in a single traversal.
*/


class vehicle
{
    public:

    void min_max(int arr[],int size)
    {
        int max = INT_MIN;
        int min = INT_MAX;
        for(int i=0;i<size;i++)
        {
            if(arr[i]<min)
            {
                min = arr[i];
            }
            if(arr[i]>max)
            {
                max = arr[i];
            }
        }
        cout<<"Time Complexity : O(n) and Space Complexity : O(1)"<<endl;
        cout<<"maximum element in an array:"<<max<<endl;
        cout<<"minimum element in an array:"<<min<<endl;
        cout<<"*******************************"<<endl;

    }

/*
    4. Calculate the sum of all elements.
    5. Calculate the average of all elements.
    6. Count the number of even and odd elements.

*/

void sum_avg_even_odd(int arr[],int size)
{
    float sum = 0;
    int even = 0;
    int odd = 0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        sum+=arr[i];
    }
    cout<<"Time Complexity : O(n) and Space Complexity : O(1)"<<endl;
    cout<<"sum:"<<sum<<endl;
    cout<<"avg:"<<sum/size<<endl;
    cout<<"even:"<<even<<endl;
    cout<<"odd:"<<odd<<endl;
    cout<<"***********************************"<<endl;
}


/*
7. Search for a given element (Linear Search).
8. Find the index of a given element.
*/

void search_index(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i] == key)
        {
            cout<<"Time Complexity:O(n) and Space Complexity:O(1)"<<endl;
            cout<<"present"<<endl;
            cout<<"index:"<<i<<endl;
            break;
            cout<<"********************************"<<endl;
        }
    }
}

// reverse_an_array

void reverse_1(int arr[],int size)
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

// reverse -> 2nd approach

void reverse_2(int arr[],int size)
{
    for(int i=0,j=size-1;i<j;i++,j--)
    {
        swap(arr[i],arr[j]);
    }
}

void PrintArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

// 11. Count the occurrences of a given element.

void count_occ(int arr[],int size,int element)
{
    int count = 0;
    for(int i=0;i<size;i++)
    {
            if(arr[i]==element)
            {
                count++;
            }
    }
    cout<<"No of Occurence:"<<count<<endl;
}

/*
12. Find the second largest element.
13. Find the second smallest element.
*/

void sec_max_min(int arr[],int size)
{
    int first_min = INT_MAX;
    int sec_min = INT_MAX;
    int first_max = INT_MIN;
    int sec_max = INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<first_min)
        {
            sec_min = first_min;
            first_min = arr[i];
        }
        else if(arr[i]<sec_min)
        {
            sec_min = arr[i];
        }

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
    cout<<"first_min:"<<first_min<<endl;
    cout<<"second_min:"<<sec_min<<endl;
    cout<<"first_max:"<<first_max<<endl;
    cout<<"second_max:"<<sec_max<<endl;
}

};

int main()
{
    vehicle* ptr = new vehicle();
    int arr[] = {1,2,3,4,5,-4,-2};
    ptr->min_max(arr,size(arr));
    ptr->sum_avg_even_odd(arr,size(arr));
    ptr->search_index(arr,size(arr),5);
    cout<<"Time Complexity:O(n) and Space Complexity:O(1)"<<endl;
    cout<<"reverse_approach_1:"<<" ";
    ptr->reverse_1(arr,size(arr));
    ptr->PrintArray(arr,size(arr));
    cout<<endl;

    int arr1[] = {1,2,3,4,5};
    cout<<"reverse_approach_2:"<<" ";
    ptr->reverse_2(arr1,size(arr1));
    ptr->PrintArray(arr1,size(arr1));
    cout<<endl;
    cout<<"*******************************"<<endl;

    int arr3[] = {1,2,2,2,3,4};
    ptr->count_occ(arr3,size(arr3),2);

    ptr->sec_max_min(arr1,size(arr1));



    return 0;
}