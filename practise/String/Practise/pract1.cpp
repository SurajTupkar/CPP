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

// First non-repeating character
// aabbzccdee
void non_repeat(string str,int size)
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
            cout<<str[i]<<endl;
            break;
        }
    }
}

//  Count vowels/consonants

void count(string str,int length)
{
    int vowel = 0;
    int conso = 0;
    for(int i=0;i<length;i++)
    {
        if(str[i]=='a' || str[i] =='e' || str[i] == 'i' || str[i] =='o' || str[i] =='u' )
        {
            vowel++;
        }
        else
        {
            conso++;
        }
    }
    cout<<"vowels:"<<vowel<<endl;
    cout<<"consonants"<<conso<<endl;
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

    string str2 = "aabbzccdee";
    non_repeat(str2,size(str2));
    count(str,str.length());


    return 0;
}