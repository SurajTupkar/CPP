#include "iostream"
using namespace std;


class vehicle
{
    char a; // 1 bytes
    char b; // 1 bytes 1+1 = 2 bytes
            // 2 bytes padding = 2+2 = 4 bytes
    int c;  // 4 bytes 
           //  8 bytes 

};

class vehicle1
{
    char a;   // 1 byte
              // 3 bytes -> padding , 3+1 = 4 bytes
    int b;   //  4 bytes 
    char c;  // 1 byte
            // 3 bytes padding 
            // Total : 4+4+4 = 12 bytes


};

int main()
{
    vehicle obj;
    cout<<sizeof(obj)<<endl; // 8
    
    vehicle1 obj1;
    cout<<sizeof(obj1)<<endl; // 12



    return 0;
}