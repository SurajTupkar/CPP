#include "iostream"
using namespace std;

// reverse

void reverse(string str,int size)
{
    int start = 0;
    int end   = size-1;
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

// check palindrome

bool palindrome(string str,int size)
{
    int start = 0;
    int end = size-1;
    while(start<end)
    {
        if(tolower(str[start])!=tolower(str[end]))
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}


    
    
int main()
{
    string str = "Hello";
    reverse(str,size(str));
    cout<<endl;

    string str1 = "naMan";
    if(palindrome(str1,size(str1)))
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not Palindrome"<<endl;
    }





    return 0;
}