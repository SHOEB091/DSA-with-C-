#include<iostream>
using namespace std;
int main()
{
    // a = 5(00000101), b = 9(00001001)  
    unsigned char a = 5, b = 9;  
  
    // The result is 00000010  
  
    cout<< "a>>1: " <<  (a >> 1) << "\n";  
  
    // The result is 00000100  
    cout<< "b>>1: " <<  (b >> 1);  
    return 0;  
}