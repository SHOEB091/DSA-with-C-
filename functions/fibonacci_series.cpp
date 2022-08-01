#include <iostream>
using namespace std;
int fibo(int n);
int main()
{
    int n, i = 0;
    cout << "\nEnter How Many Terms You Want To Print Fibonacci Series ";
    cin >> n;
    cout << "\nFibonnaci Series Is Given Below\n\n";

    while (i < n)
    {
        cout << " " << fibo(i);
        i++;
    }
    cout << " \n\n";
    return 0;
}
int fibo(int n)
{
    if ((n == 1) || (n == 0))
    {
        return (n);
    }
    else
    {
        return (fibo(n - 1) + fibo(n - 2));
    }
}