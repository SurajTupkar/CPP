/*
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


class question
{
    public:
/*
1. Find the largest element in an array.
2. Find the smallest element in an array.
3. Find the maximum and minimum in a single traversal.
4. Calculate the sum of all elements.
5. Calculate the average of all elements.
6. Count the number of even and odd elements.

*/
    void large_small_max_min_sum_avg_even_odd(int arr[],int size)
    {
        int min = INT_MAX;
        int max = INT_MIN;
        int even = 0;
        int odd = 0;
        float sum = 0;

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
            if(arr[i]>max)
            {
                max = arr[i];
            }
            if(arr[i]<min)
            {
                min = arr[i];
            }

        }

        cout<<"min:"<<min<<endl;
        cout<<"max:"<<max<<endl;
        cout<<"even:"<<even<<endl;
        cout<<"odd:"<<odd<<endl;
        cout<<"sum:"<<sum<<endl;
        cout<<"avg:"<<sum/size<<endl;
        

    }

    /*
        7. Search for a given element (Linear Search).
        8. Find the index of a given element.
    */

    int search_index(int arr[],int size,int key)
    {
        for(int i=0;i<size;i++)
        {
            if(arr[i]==key)
            {
                return i;
            }
        }
        return 0;
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
        int end   = size-1;
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

    // 11. Count the occurrences of a given element.

    int occurence(int arr[],int size,int key)
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
            if(arr[i]>first_max)
            {
                sec_max = first_max;
                first_max = arr[i];
            }
            else if(arr[i]>sec_max)
            {
                sec_max = arr[i];
            }

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

        cout<<"first_max:"<<first_max<<endl;
        cout<<"sec_max:"<<sec_max<<endl;
        cout<<"first_min:"<<first_min<<endl;
        cout<<"sec_min:"<<sec_min<<endl;
    }


};

int main()
{

    question* ptr = new question();
    int arr[] = {1,2,3,4,5,6};
    cout<<"size:"<<size(arr)<<endl;
    ptr->large_small_max_min_sum_avg_even_odd(arr,size(arr));

    delete ptr;
    ptr=nullptr;

    int ans = ptr->search_index(arr,size(arr),3);
    if(ans>0)
    {
        cout<<"The Index of given element:"<<ans<<endl;
    }
    else
    {
        cout<<"The given element is not present"<<endl;
    }

    ptr->reverse_1(arr,size(arr));
    cout<<endl;
    int arr1[] = {1,2,3,4,5};
    ptr->reverse_2(arr1,size(arr1));

    cout<<endl;
    cout<<"Total No. of occurence:"<<ptr->occurence(arr,size(arr),2)<<endl;

    ptr->sec_max_min(arr,size(arr));



    return 0;
}




