#include "iostream"
using namespace std;
#include <climits>

/*

1. Find the largest element in an array.
2. Find the smallest element in an array.
3. Calculate the sum of all elements.
4. Calculate the average of all elements.
5. Count the number of even and odd elements.


*/

class A
{
public:
    void min_max_sum(int arr[], int size);
    void search_ind_occ(int arr[], int size, int key);
    void reverse_1(int arr[],int size);
    void reverse_2(int arr[],int size);
    void printarray(int arr[],int size);
};

void A::min_max_sum(int arr[], int size)
{
    int max = INT_MIN;
    int min = INT_MAX;
    int sum = 0;
    int even = 0;
    int odd = 0;
    for (int i = 0; i < size; i++)
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
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "max:" << max << endl;
    cout << "min:" << min << endl;
    cout << "sum:" << sum <<endl;
    cout << "odd:" << odd <<endl;
    cout << "even:"<< even<<endl;
    cout << "avg:" <<sum/size<<endl;
}

/*
6. Search for a given element (Linear Search).
7. Find the index of a given element.
10. Count the occurrences of a given element.
*/

void A::search_ind_occ(int arr[],int size,int key)
{
    int index = 0;
    int occ = 0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            index = i;
            occ++;
            cout<<"index:"<<index<<endl;
            cout<<"key "<<key<<" is present at index:"<<index<<endl;
            cout<<"occurence of key:"<<occ<<endl;
            break;
        }
    }
}

// 8. Reverse an array.

void A::reverse_1(int arr[],int size)
{
    for(int i= size-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}

void A::reverse_2(int arr[],int size)
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


void A::printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    A *p = new A();
    int arr[] = {1, 2, 3, 4, 5};
    int size = std::size(arr);
    p->min_max_sum(arr, size);
    p->search_ind_occ(arr,size,5);
    p->reverse_1(arr,size);
    cout<<endl;
    p->reverse_2(arr,size);
    p->printarray(arr,size);


    delete p;

    return 0;
}