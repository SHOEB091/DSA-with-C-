#include<iostream>
using namespace std;

void printArray(int arr[],int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[10];
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    cout<<"Enter the elements of an array\n";
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    printArray(arr,n);
    
}