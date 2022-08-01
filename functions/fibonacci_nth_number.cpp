#include<iostream>
using namespace std;

int fibonacci(int n)
{
    int a=0;
    int b=1;
    for(int i=2;i<n;i++)
    {
        int next=a+b;
        a=b;
        b=next;
    }
    return b;
}
int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n; 
    cout<<"The"<<n<<"th term of the series is="<<fibonacci(n)<<endl;
}
// output
/*Enter the number
10
The10th term of the series is=34*/