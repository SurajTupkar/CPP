#include "iostream"
#include "vector"
using namespace std;

int main()
{
    vector<vector<int>> arr(5,vector<int>(4,0));
    int totalRows = arr.size(); // 4
    int totalcolumn = arr[0].size(); //5
    cout<<"toatlRows:"<<totalRows<<endl;
    cout<<"totalcolumn:"<<totalcolumn<<endl;



    return 0;
}