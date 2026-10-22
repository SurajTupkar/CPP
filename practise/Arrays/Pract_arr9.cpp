/*

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
    public:
    /*
    1. Find the largest element in an array.
    2. Find the smallest element in an array.
    4. Calculate the sum of all elements.
    5. Calculate the average of all elements.
    6. Count the number of even and odd elements.
    */

    void min_max(int arr[],int size)
    {
        int max = INT_MIN;
        int min = INT_MAX;
        float sum = 0;
        int even = 0;
        int odd = 0;
        for(int i=0;i<size;i++)
        {
            sum+=arr[i];
            if(arr[i]>max)
            {
                max = arr[i];
            }
            if(arr[i]<min)
            {
                min = arr[i];
            }
            if(arr[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
          
        } 

        cout<<"min:"<<min<<endl;
        cout<<"max:"<<max<<endl;
        cout<<"sum:"<<sum<<endl;
        cout<<"odd:"<<odd<<endl;
        cout<<"even:"<<even<<endl;
        cout<<"average:"<<sum/size<<endl;
        
    }

    /*
    7. Search for a given element (Linear Search).
    8. Find the index of a given element.
    */

    bool search(int arr[],int size,int key)
    {
        bool flag = false;
        for(int i=0;i<size;i++)
        {
            if(arr[i]==key)
            {
                cout<<"key is found at index:"<<i<<endl;
                flag = true;
                break;
            }
        }
        return flag;
    }
};

int main()
{
    int arr[] = {1,2,-4,3,4,-8,5};
    questions* ptr = new questions();
    ptr->min_max(arr,size(arr));
    cout<<ptr->search(arr,size(arr),4)<<endl;

    delete ptr;
    ptr = nullptr;




    return 0;
}























