#include "iostream"
using namespace std;



int main()
{

    // pointer to const

    int a = 10;
    int b = 20;
    const int *p = &a;
    // *p = 30;
    p =&b;

    // const to pointer

    int c = 10;
    int *const q = &c;
    *q = 50;
   //  q = &b;   // Not Allowed because const to pointer which is not allowed to change the address





    return 0;
}