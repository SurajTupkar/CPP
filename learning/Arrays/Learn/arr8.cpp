// swap alternate

#include "iostream"
using namespace std;



void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapalternate(int arr[],int size)
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
  
    int even[] = {2,7,3,5,9,0};
    int odd[]  = {8,2,1,6,7};
    swapalternate(even,std::size(even));
    printArray(even,std::size(even));

    swapalternate(odd,std::size(odd));
    printArray(odd,std::size(odd));


  
    return 0;
}