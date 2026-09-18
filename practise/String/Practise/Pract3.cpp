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
    
    // reverse

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


};

int main()
{
    string str = "Hello";
    questions* ptr = new questions();
    ptr->reverse(str,str.length());




    return 0;
}