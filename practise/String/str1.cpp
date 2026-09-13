#include "iostream"
#include "string"
using namespace std;


void reverse_1(string str,int size)
{
    int start = 0;
    int end = size-1;
    while(start<end)
    {
        swap(str[start],str[end]);
        start++;
        end--;
    }

    for(int i=0;i<size;i++)
    {
        cout<<str[i]<<" ";
    }
}


int main()
{
    string str = "Palindrome";

    reverse_1(str,size(str));
    
   


    return 0;
}