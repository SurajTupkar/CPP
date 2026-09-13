#include "iostream"
#include "string"
using namespace std;

// reverse_1
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

// check palindrome
bool check_palindrome(string str,int size)
{
    int start = 0;
    int end = size-1;
    while(start<end)
    {
        if(str[start]!=str[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;

}

// first non-repeating character

void non_rep(string str,int size)
{
    for(int i=0;i<size;i++)
    {
        int count = 0;
        for(int j=0;j<size;j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            cout<<str[i];
            break;
        }
    }
}

int main()
{
    string str = "Palindrome";

    reverse_1(str,size(str));
    cout<<endl;

    string str1 = "nayan";
    if(check_palindrome(str1,size(str1)))
    {
        cout<<"Palindrome string"<<endl;
    }
    else
    {
        cout<<"Not Palindrome"<<endl;
    }
    

    string str3 = "aabccdd";
    non_rep(str3,size(str3));
   


    return 0;
}