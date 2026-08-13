#include "iostream"
#include <string>
using namespace std;


int main()
{
    string feedbacks = "neutral; negative; positive; negative";
    int score = 0;
    string word = "";
    for(char ch:feedbacks)
    {
        if(ch == ';')
        {
            if(word == "positive")
            {
                score++;
            }
            else if(word == "negative")
            {
                score--;
            }

            word = "";
        }
        else if( ch != ' ')
        {
            word+=ch;
        }
    }

    if(word == "positive")
    {
        score++;
    }
    else if(word == "negative")
    {
        score--;
    }

    cout<<score<<endl;

    return 0;
}