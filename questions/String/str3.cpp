#include "iostream"
using namespace std;


void reverse(string &str)
{
    int start = 0;
    int end = str.length()-1;
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
    string str = "Hello";
    reverse(str);
    printstring(str);


    return 0;
}