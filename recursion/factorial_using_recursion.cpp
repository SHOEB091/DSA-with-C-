#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==0)
    return 1;
    int partialAns=factorial(n-1);
    return n*partialAns;
}
int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    if(n<0)
    {
        cout<<"Error";
    }
    else
    {
        cout<<factorial(n);
    }
    return 0;
}