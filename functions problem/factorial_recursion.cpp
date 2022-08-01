#include<iostream>
using namespace std;

int factorial(int n);
int main()
{
    int n;
    cout<<"\nEnter any positive interger::";
    cin>>n;
    cout<<"\n Factorial of ["<<n<<"] = ["<<factorial(n)<<"]\n";
    return 0;

}
int factorial(int n)
{
    if(n>1)
    return n* factorial(n-1);
    else
    return 1;
}