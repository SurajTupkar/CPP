#include "iostream"
using namespace std;

// palindrome
bool palindrome(string str)
{
    int start = 0;
    int end = str.length()-1;
    while(start<end)
    {
        if(tolower(str[start])!=tolower(str[end]))
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;

}

// reverse string

void reverse(string &str)
{
    int start = 0;
    int end   = str.length()-1;
    while(start<end)
    {
        swap(str[start],str[end]);
        start++;
        end--;
    } 
}

void printstring(string str)
{
    for(int i=0;i<str.length();i++)
    {
        cout<<str[i]<<" ";
    }
}

int main()
{
    string str = "Naman";
    bool check = palindrome(str);
    if(check)
    {
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"not palindrome"<<endl;
    }
    string str1 = "hello";
    //cout<<reverse(str1)<<endl;
    reverse(str1);
    printstring(str1);


    return 0;
}