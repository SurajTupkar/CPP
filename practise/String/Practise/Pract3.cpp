/*
1. Reverse 
2. Check palindrome
3. First non-repeating character in a string
4. Count vowels/consonants
*/

#include "iostream"
using namespace std;


class questions
{
    public:
    
    // 1. reverse
    void reverse(string str,int size)
    {
        cout<<"Before Reversing"<<endl;
         for(int i=0;i<size;i++)
        {
            cout<<str[i]<<" ";
        }
        int start = 0;
        int end   = size - 1;

        while(start<end)
        {
            swap(str[start],str[end]);
            start++;
            end--;
        }

        cout<<endl;
        cout<<"After Reversing"<<endl;
        for(int i=0;i<size;i++)
        {
            cout<<str[i]<<" ";
        }
    }

    // 2. Check palindrome
    bool check_palindrome(string str,int size)
    {
        cout<<endl;
        int start = 0;
        int end   = size-1;
        while (start<end)
        {
            if(tolower(str[start]) != tolower(str[end]))
            {
                return false;
            }
            start++;
            end--;
        }
        return true;

    }

    // 3. First non-repeating character in a string
    void first_no_repeating_char(string str,int size)
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

};

int main()
{
    string str = "Hello";
    string str1 = "Nayan";
    questions* ptr = new questions();
    ptr->reverse(str,str.length());
    if(ptr->check_palindrome(str1,str1.length()))
    {
        cout<<"It's a palindrome string"<<endl;
    }
    else
    {
        cout<<"It's not a palindrome string"<<endl;
    }

    string str2 = "aabbcddeffghi";
    ptr->first_no_repeating_char(str2,str2.length());


    return 0;
}