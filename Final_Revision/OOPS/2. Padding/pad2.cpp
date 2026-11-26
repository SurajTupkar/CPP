#include "iostream"
using namespace std;

/*
Why we required trailing padding ?
-> Trailing padding makes sure that when objects are placed next to each other, the members inside the next object are also properly aligned.

class Vehicle
{
    int a;
    char ch;
};

Typical memory:

int a       → 4 bytes
char ch     → 1 byte
padding     → 3 bytes
-----------------------
total       → 8 bytes


So:

sizeof(Vehicle)   // 8

ut why 3 bytes at the end?

Ye samajhne ke liye array ka example dekhte hain.

Suppose compiler ne trailing padding nahi diya aur object ka size 5 bytes hota:

Vehicle object

0   1   2   3   4
[   int   ][ch]

Now:

Vehicle arr[2];

Array ka matlab hai objects one after another memory mein stored honge.

So:

arr[0]                 arr[1]

0  1  2  3  4         5  6  7  8  9
[   int   ][ch]       [   int   ][ch]

Problem dekho:

arr[1].a ka int start ho raha hai:

address 5

But int ko typically 4-byte aligned address chahiye:

0, 4, 8, 12...

5 properly aligned nahi hai ❌


Isliye trailing padding

Compiler Vehicle ka size 8 bytes kar deta hai:
arr[0]

0  1  2  3  4  5  6  7
[    int    ][ch][pad][pad][pad]
    Then arr[1] starts at:

8

So:

arr[1]

8  9  10  11  12  13  14  15
[    int     ][ch][pad][pad][pad]

Now arr[1].a starts at address 8.

0  → aligned
4  → aligned
8  → aligned
12 → aligned

✅ Everything is properly aligned.

Simple way to remember

Trailing padding makes sure that when objects are placed next to each other, the members inside the next object are also properly aligned.

So:

Without trailing padding:
Object 1 = 5 bytes
Object 2 starts at 5 ❌

With trailing padding:
Object 1 = 8 bytes
Object 2 starts at 8 ✅
*/


class vehicle
{
    public:
    int a;
    char ch;

};

int main()
{
    vehicle arr[2];
    cout<<sizeof(arr[0].a)<<endl;
    cout<<sizeof(arr[1].a)<<endl;




    return 0;
}