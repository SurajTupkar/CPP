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
16. Check whether the array is sorted in descending order.

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


class questions
{
    public:
/*
1. Find the largest element in an array.
2. Find the smallest element in an array.
3. Calculate the sum of all elements.
4. Calculate the average of all elements.
5. Count the number of even and odd elements.

*/

    void min_max_sum_avg_even_odd(int arr[],int size)
    {
        int min = INT_MAX;
        int max = INT_MIN;
        float sum = 0 ;
        int even = 0;
        int odd = 0;
        for(int i=0;i<size;i++)
        {
            sum+=arr[i];
            if(arr[i] %2 == 0)
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
        cout<<"max element of array:"<<max<<endl;
        cout<<"min element of array:"<<min<<endl;
        cout<<"no. of odd elements in an array:"<<odd<<endl;
        cout<<"no. of even elements in an array:"<<even<<endl;
        cout<<"sum of all elements in an array:"<<sum<<endl;
        cout<<"average of all elements in an array:"<<sum/size<<endl;
        cout<<"Time complexity of this questions is: O(n)"<<endl;
    } 

    /*
        6. Search for a given element (Linear Search).
        7. Find the index of a given element.
    */

    void search_index(int arr[], int size, int key)
    {
        for(int i=0;i<size;i++)
        {
            if(arr[i] == key)
            {
                cout<<"index of given element:"<<i<<endl;
                cout<<"Given element is present"<<endl;
                break;
            }
        }
         cout<<"Time complexity of this questions is: O(n)"<<endl;
    }

    /*
        8. Reverse an array.
        9. Print an array in reverse order (without modifying it).
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
         cout<<"Time complexity of this questions is: O(n)"<<endl;
    }

    void reverse_2(int arr[], int size)
    {
        for(int i=0, j=size-1;i<j;i++,j--)
        {
            swap(arr[i],arr[j]);
        }
         cout<<"Time complexity of this questions is: O(n)"<<endl;
    }

    void print_array(int arr[],int size)
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }

};

int main()
{
    questions *ptr = new questions();
    int arr[] = {1,2,3,4,5};
    ptr-> min_max_sum_avg_even_odd(arr,std::size(arr));
    ptr->search_index(arr,std::size(arr),4);
    ptr->reverse_1(arr,std::size(arr));
    ptr->print_array(arr,std::size(arr));
    int arr1[] = {1,2,3,4,5};
    cout<<endl;
    ptr->reverse_2(arr1,std::size(arr1));
    ptr->print_array(arr1,std::size(arr1));



    return 0;
}