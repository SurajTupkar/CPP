#include "iostream"
using namespace std;


int main()
{
    // declaration
    int arr[10];
    cout<<"arr:"<<arr<<" "<<" value:"<<arr[0]<<endl;
    cout<<"arr+1"<<arr+1<<"  value:"<<arr[1]<<endl;
    cout<<"arr+2"<<arr+2<<"  value:"<<arr[2]<<endl;

    // initialisation

    cout<<endl;
    int arr1[3]={5,7,8};
    cout<<"arr1:"<<arr1<<" "<<" value:"<<arr1[0]<<endl;
    cout<<"arr1+1:"<<arr1+1<<"  value:"<<arr1[1]<<endl;
    cout<<"arr1+2:"<<arr1+2<<"  value:"<<arr1[2]<<endl;

    cout<<endl;
    // initialise with 0
    int arr2[10]={0};
    cout<<"arr2:"<<arr2<<" "<<" value:"<<arr2[0]<<endl;
    cout<<"arr2+1:"<<arr2+1<<"  value:"<<arr2[1]<<endl;
    cout<<"arr2+2:"<<arr2+2<<"  value:"<<arr2[2]<<endl;
    cout<<endl;
    for(int i=0;i<std::size(arr2);i++)
    {
        cout<<arr2[i]<<endl;
    }

    cout<<endl;

    int arr3[10]={1};
    for(int i=0;i<std::size(arr);i++)
    {
        cout<<arr3[i]<<endl;
    }



    return 0;
}