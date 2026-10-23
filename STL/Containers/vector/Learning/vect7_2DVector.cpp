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

    // Jagged or Ragged Array
    vector<vector<int>> brr;
    brr.push_back(vector<int>(4));
    brr.push_back(vector<int>(2));
    brr.push_back(vector<int>(5));

    cout<<"No.of.rows:"<<brr.size()<<endl; // 3
    cout<<"No.of.columns:"<<brr[0].size()<<endl; // 4



    return 0;
}