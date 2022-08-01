#include<iostream>
using namespace std;

// Function Signature
void printCounting(int n)
{
    // Function Body
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n;

    // Function Call
    printCounting(n);
}