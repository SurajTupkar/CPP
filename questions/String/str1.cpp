#include "iostream"
using namespace std;


bool palindrome(string str,int size)
{
    int start = 0;
    int end = size-1;
    while(start<end)
    {
        if(tolower(str[start]) != tolower(str[end]))
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

int main()
{
    string str = "Mam";
    for(int i=0;i<str.length();i++)
    {
      //  cout<<str[i]<<endl;
    }

    bool check = palindrome(str,str.length());
    cout<<check<<endl;
    if(check)
    {
        cout<<"string is pandlindrome"<<endl;
    }
    else
    {
        cout<<"string is not palindrome"<<endl;
    }

  



    return 0;
}