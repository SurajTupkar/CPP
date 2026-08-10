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
10. Count the occurrences of a given element.
11. Find the second largest element.
12. Find the second smallest element.
13. Check whether the array is sorted in ascending order.
14. Find the maximum and minimum in a single traversal.
15. Copy one array into another.
16. swap alternate

*/

int largest(int arr[],int n)
{
    int max = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}

int smallest(int arr[],int size)
{
    int min = INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    return min;
}

int sum(int arr[],int size)
{
    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

float avgerage(int arr[],int size)
{
    float avg = 0.0;
    int add = sum(arr,size);
    avg = add / size ;
    return avg;
}

void odd_even(int arr[],int size)
{
     int odd,even = 0;
    for(int i=0;i<size;i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout<<"even: "<<even<<endl;
    cout<<"odd: "<<odd<<endl;
}

bool search(int arr[],int size,int k)
{
    bool flag = false;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==k)
        {
            flag = true;
        }
    }
    return flag;
}



int index(int arr[],int size,int k)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==k)
        {
            return i;
        }
    }
    return 0;
}

// approach 1: brute force or simple
void reverse1(int arr[],int size)
{
    for(int i=size-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}

// approach 2: swapping method
void reverse2(int arr1[],int size)
{
   int start = 0;
   int end = size - 1;
   while(start<=end)
   {
    swap(arr1[start],arr1[end]);
    start++;
    end--;
   }
}

int occurence(int arr[], int size,int k)
{
    int occ = 0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==k)
        {
            occ++;
        }
    }
    return occ;
}

// approach 1 : brute force
void secondlarge(int arr[],int size)
{
    int max = INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }

    }
    cout<<max<<endl;
    

    for(int i=0;i<size;i++)
    {
        if(arr[i]==max)
        {
            arr[i] = 0;
        }
        cout<<arr[i]<<" ";
    }

    int secmax = INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>secmax)
        {
            secmax = arr[i];
        }
    }
    cout<<endl;
    cout<<"secmax:"<<secmax<<endl;

}

// approach 2 : optimise
int secmax(int arr[],int size)
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
    return sec_max;
}

// second smallest

int secsmall(int arr[],int size)
{
    int first_small = INT_MAX;
    int sec_small = INT_MAX;

    for(int i=0;i<size;i++)
    {
        if(arr[i]<first_small)
        {
            sec_small = first_small;
            first_small = arr[i];
        }
        else if (arr[i] != first_small && arr[i]<sec_small)
        {
            sec_small = arr[i];
        }
    }
    return sec_small;
}

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}


void min_max(int arr[],int size)
{
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0;i<size;i++)
    {
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
}

void copy_one_sec(int arr[],int arr1[],int size)
{
    for(int i=0;i<size;i++)
    {
        arr1[i]=arr[i];
    }
}

void swap_alternate(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{

    int arr[]={1,-9,20,30,3};
    int arr1[]={1,2,3,4,5,6,2,2,2,2};
    int arr2[] = {5,2,8};
    cout<<"Largest Element in array: "<<largest(arr,std::size(arr))<<endl;
    cout<<"smallest Element in array: "<<smallest(arr,std::size(arr))<<endl;
    cout<<"sum of all elements in array: "<<sum(arr,std::size(arr))<<endl;
    cout<<"avg of all elements in array: "<<avgerage(arr,std::size(arr))<<endl;
    odd_even(arr,std::size(arr));
    cout<<"k is "<<search(arr,std::size(arr),10)<<endl;
    cout<<"index of k:"<<index(arr,std::size(arr),3)<<endl;
    reverse1(arr,std::size(arr));
    cout<<endl;
    reverse2(arr1,std::size(arr1));
    printArray(arr1,std::size(arr1));
    cout<<endl;
    reverse2(arr,std::size(arr));
    printArray(arr,std::size(arr));
    cout<<endl;
    cout<<"occurence of given number: "<<occurence(arr1,std::size(arr1),2)<<endl;
    secondlarge(arr1,std::size(arr1));
    cout<<secmax(arr,std::size(arr));
    cout<<endl;
    cout<<"secsmall:"<<secsmall(arr1,std::size(arr1));
    cout<<endl;
    int arr4[] = {5,2,8};
    int arr5[] = {17, -4, 29, 8, 0, 13, -11, 25};
    int arr6[] = {42, -7, 19, 3, 56, -21, 8};
    int arr7[] = {0};
    min_max(arr6,std::size(arr6));
    copy_one_sec(arr6,arr7,std::size(arr6));
    printArray(arr7,std::size(arr6));
    cout<<endl;
    cout<<"swap_alternate"<<endl;
    int arr8[] = {1,2,3,4,5};
    swap_alternate(arr8,std::size(arr8));
    printArray(arr8,std::size(arr8));



    return 0;
}