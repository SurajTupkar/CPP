/*
1. Find the largest element in an array.
2. Find the smallest element in an array.
3. Calculate the sum of all elements.
4. Calculate the average of all elements.
5. Count the number of even and odd elements.
6. Search for a given element (Linear Search).
7. Find the index of a given element.
8. Reverse an array.

*/

#include "iostream"
using namespace std;


int main()
{
    int arr[10] = {1,2,3,4,-5,6,7,-8,9,10};
    // for(int i=0;i<std::size(arr);i++)
    // {
    //     cout<<arr[i]<<endl;
    // }

    cout<<"1.Find the largest element in an array."<<endl;
    // 1. Find the largest element in an array.

    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of array:"<<n<<endl;

    int large = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            large = arr[i];
        }
    }

    cout<<"largest element in array:"<<large<<endl;

    cout<<endl;
    cout<< "************************************"<<endl;
    cout<<endl;
    cout<<"2.Find the smallest element in an array."<<endl;

    // 2. Find the smallest element in an array.

   int smallest = arr[0];
   for(int i=0;i<n;i++)
   {
    if(arr[i]<smallest)
    {
        smallest = arr[i];
    }
   }

   cout<<"smallest element in an array:"<<smallest<<endl;

    cout<<endl;
    cout<< "************************************"<<endl;
    cout<<endl;
    cout<<"3.Calculate the sum of all elements."<<endl;

    //3. Calculate the sum of all elements.

    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    cout<<"sum of all elements in an array:"<<sum<<endl;

    cout<<endl;
    cout<< "************************************"<<endl;
    cout<<endl;
    cout<<"4.Calculate the average of all elements."<<endl;

    // 4. Calculate the average of all elements.

    int sum1 = 0;
    
    for(int i=0; i<n;i++)
    {
        sum1+=arr[i];
    }
    float avg = float(sum1) / n ;
    cout<<"average of all elements:"<<float(avg)<<endl;
    cout<<endl;
    cout<< "************************************"<<endl;
    cout<<endl;
    cout<<"5. Count the number of even and odd elements."<<endl;

    // 5. Count the number of even and odd elements.

    int even = 0;
    int odd  = 0;
    int negative = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
           
            negative++;
        }
        else if(arr[i]%2==0)
        {
             even++;
        }
        else
        {
            odd++;
        }
    }

    cout<<"even:"<<even<<endl;
    cout<<"odd:"<<odd<<endl;
    cout<<"negative:"<<negative<<endl;
    cout<<endl;
    cout<< "************************************"<<endl;
    cout<<endl;
    cout<<"6.Search for a given element (Linear Search)."<<endl;
    //6. Search for a given element (Linear Search).

    
    int k = 7;
    bool a = false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            a = true;
            break;
        }
    }

    if(a)
    {
        cout<<"Given element is present"<<endl;
    }
    else
    {
        cout<<"Given element is not present"<<endl;
    }

    cout<<endl;

    char ch[] ={'z','z','a','a','d','h','h','h','i','l','j','l','m','n','o','z','h'};
    char ch1 = 'z';
    for(int i = 0; i < std::size(ch); i++)
    {
        int count = 0;

        for(int j = i+1; j < std::size(ch); j++)
        {
            if(ch[i] == ch[j])
            {
                count++;
            }
        }
       
        cout<<ch[i]<<":"<<count<<endl;
    }



    return 0;
}