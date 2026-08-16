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
14. Find the maximum and minimum in a single traversal.
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

/*
11. Find the second largest element.
12. Find the second smallest element.
*/

void sec_min_sec_max(int arr[], int size)
{
    int first_max = INT_MIN;
    int sec_max = INT_MIN;
    int first_min = INT_MAX;
    int sec_min = INT_MAX;
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
            first_min= arr[i];
        }
        else if(arr[i]<sec_min)
        {
            sec_min = arr[i];
        }

        
    }
    cout<<"first_max:"<<first_max<<endl;
    cout<<"second_max:"<<sec_max<<endl;
    cout<<"first_min:"<<first_min<<endl;
    cout<<"second_min:"<<sec_min<<endl;
}

// 13. Check whether the array is sorted in ascending order.

bool check(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
           return false;
        }
    }
    return true;
    
}

// 15. Copy one array into another.

void copy_from_one_another(int arr[],int arr1[],int size)
{
    for(int i=0;i<size;i++)
    {
        arr1[i] = arr[i];
    }
}

/*
4. swap alternate

*/

void swap_alt(int arr[],int size)
{
    for(int i=0;i<size-1;i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
}


/*
5. find unique element
    -> 2 Approaches
        -> 1. Duplicate element replace as 0 
            -> it will work when array contains duplicate elements which repeat only 2 times         
        -> 2. XOR operator
            -> it will work when array contains same element multiple time not necessary it will repeat 2 times

*/

void unique_1(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[i] = 0;
                arr[j] = 0;
            }
        }
    }

}

void printArray_unique_element(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=0)
        {
            cout<<arr[i]<<" ";
        }
    }
}

void unique_2(int arr[], int size)
{
    int ans = 0;
    for(int i=0;i<size;i++)
    {
        ans = ans^arr[i];
    }
    cout<<"unique_element:"<<ans<<endl;
}


// 6. find duplicate element

void duplicate(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<" ";
            }
        }
    }
}


// 7. Intersection of array (same element from two array)

void intersection(int arr[], int arr1[],int size1,int size2)
{
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            if(arr[i]==arr1[j])
            {
                cout<<arr[i]<<" ";
                break;
            }
        }
    }

}

/*
8. Pair sum
9. Triplet sum
*/

void pair_triplet(int arr[], int size,int target)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<<"pair sum of "<<arr[i]<<" and "<<arr[j]<<" is "<<target<<endl;
            }
            for(int k = j+1;k<size;k++)
            {
                if(arr[i]+arr[j]+arr[k]==target)
                {
                    cout<<"triplet sum of "<<arr[i]<<","<<arr[j]<<" and "<<arr[k]<<" is "<<target<<endl;
                }
            }
        }
    }

}

// 10. Sort 0's & 1's

void sort_1_0(int arr[],int size)
{
    int start = 0;
    int end =size-1;
    while(start<end)
    {
        if(arr[start]==0)
        {
            start++;
        }
        else if(arr[end]==1)
        {
            end--;
        }
        else
        {
            swap(arr[start],arr[end]);
        }
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
    cout<<endl;
    sec_min_sec_max(arr,std::size(arr));
    int arr1[]= {2,-1,3,1};
    int arr2[std::size(arr1)];
    bool flag =check(arr1,std::size(arr1));
    if(flag)
    {
        cout<<"Array is sorted in ascending order"<<endl;
    }
    else
    {
    cout << "Array is not sorted in ascending order" << endl;
    }

    copy_from_one_another(arr1,arr2,std::size(arr));
    printArray(arr2,std::size(arr1));
    cout<<endl;
    int arr3[] = {1,2,3,4,5,6};
    swap_alt(arr3,std::size(arr3));
    printArray(arr3,std::size(arr3));
    cout<<endl;

    int arr4[] = {1,2,3,2,3};
    unique_1(arr4,std::size(arr4));
    printArray_unique_element(arr4,std::size(arr4));
    cout<<endl;
    unique_2(arr4,std::size(arr4));
    int arr5[] = {1,2,2,3,3};
    duplicate(arr5,std::size(arr5));

    int arr6[] = {1,2,3,4};
    int arr7[] ={1,2};

    cout<<endl;
    intersection(arr6,arr7,std::size(arr6),std::size(arr7));
    cout<<endl;
    pair_triplet(arr6,std::size(arr6),6);
    int arr8[] = {1,0,1,0,1};
    sort_1_0(arr8,std::size(arr8));
    printArray(arr8,std::size(arr8));






    return 0;
}