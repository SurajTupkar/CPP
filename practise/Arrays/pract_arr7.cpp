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

class questions
{
    /*
        1. Find the largest element in an array.
        2. Find the smallest element in an array.
        3. Find the maximum and minimum in a single traversal.
        4. Calculate the sum of all elements.
        5. Calculate the average of all elements.
        6. Count the number of even and odd elements.
    */
   public:
   void max_min(int arr[],int size)
   {
        int min = INT_MAX;
        int max = INT_MIN;
        float sum = 0;
        int even = 0;
        int odd = 0;
        for(int i=0;i<size;i++)
        {
            sum+=arr[i];
            if(arr[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
            if(arr[i]<min)
            {
                min = arr[i];
            }
            if(arr[i]>max)
            {
                max = arr[i];
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
        7. Search for a given element (Linear Search).
        8. Find the index of a given element.
        11. Count the occurrences of a given element.
   */

   void search(int arr[],int size,int key)
   {
        int occ = 0;
        for(int i=0;i<size;i++)
        {
            if(arr[i]==key)
            {
                occ++;
                cout<<"present at index: "<<i<<endl;
                break;
            }
        }
        cout<<"occurence of given element:"<<occ<<endl;
   }

/*

    9. Reverse an array.
	    -> using Swap
		    -> with while loop, Time Complexity : O(n)
		    -> with for loop,   Time complexity : O(n)

*/

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

        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
   }

   void reverse_2(int arr[],int size)
   {
    for(int i=0,j=size-1;i<j;i++,j--)
    {
        swap(arr[i],arr[j]);
    }

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

   }

   /*
    12. Find the second largest element.
    13. Find the second smallest element.
   */

   void sec_max_min(int arr[],int size)
   {
        int first_min = INT_MAX;
        int sec_min = INT_MAX;
        for(int i=0;i<size-1;i++)
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
        }

        cout<<"first_min:"<<first_min<<endl;
        cout<<"sec_min:"<<sec_min<<endl;

   }

};


int main()
{
    questions* ptr = new questions();
    int arr[] = {1,2,3,4,-4,-2,9};
    ptr->max_min(arr,size(arr));

    int key;
    cout<<"Enter a key to search in array:";
    cin>>key;
    ptr->search(arr,size(arr),key);

    int arr1[] = {1,2,3,4};
    ptr->reverse_1(arr1,size(arr1));
    cout<<endl;
    int arr2[] = {1,2,3,4,5};
    ptr->reverse_2(arr2,size(arr2));

    cout<<endl;
    int arr3[] = {1,2,3,4,5};
    ptr->sec_max_min(arr3,size(arr3));
    





    return 0;
}