#include "iostream"
using namespace std;



int sum(int* a, int* b)
{
    // a = 20;
    // b = 20;
    return a+b;
}

int main()
{
    int a = 10;
    int b = 5;
    cout<<sum(&a,&b)<<endl;




    return 0;
}