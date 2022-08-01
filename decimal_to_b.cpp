#include<iostream>
using namespace std;
void decimalToBinary(int n)
{
    //array to store binary number;
    int binaryNum[32];

    int i=0;
    while(n>0)
    {
        binaryNum[i]=n%2;
        n=n/2;
        i++;
    }
    // printing binary array in reverse order 
    for(int j=i-1;j>=0;j--)
    cout<<binaryNum[j];
}
// Driver program to test above function

int main()
{
    int n;
    cout<<"ENter the number\n";
    cin>>n;
    decimalToBinary(n);
}
