#include<iostream>
using namespace std;

// 1-> Prime no.
// 0->Not a prime number.
bool isPrime(int n)
{
    for(int i =2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    if(isPrime(n))
    {
        cout<<"is a prime number"<<endl;
    }
    else
    {
    cout<<"is Not a Prime Number"<<endl;

    }

}
