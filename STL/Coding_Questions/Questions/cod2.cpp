/* Question 2 : n a financial system, you receive a stream of transaction IDs. Some IDs repeat because of retries or reversals. Write a function that finds the first transaction ID that appears exactly once in the stream.
Input: 
std::vector<std::string> transactions = {"TX101", "TX102", "TX101", "TX103", "TX102"}
Output: "TX103"
Constraint: You must solve this in O(n) time
*/


#include "iostream"
#include "vector"
#include "unordered_map"
using namespace std;


int main()
{
    vector<string> transactions = {"TX101", "TX102", "TX101", "TX103", "TX102"};
    unordered_map<string,int> freq;
    for(auto x : transactions)
    {
        freq[x]++;
    }

    cout<<freq.size()<<endl; // 3

    for(auto it : transactions)
    {
        if(freq[it]==1)
        {
            cout<<it<<endl;
            break;
        }
    }

    


    return 0;
}