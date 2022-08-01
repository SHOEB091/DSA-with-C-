#include<iostream>
#include<climits>
using namespace std;

int getMax(int arr[],int n)
{
    int max= INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    // returning max value
    return max;
}
int getMin(int arr[],int n)
{
    int min= INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    // returning max value
    return min;
}

int main()
{
    int arr[10],size;
    cout<<"Enter the for loop range size \n";
    cin>>size;

    cout<<"Enter the elements in an array\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Maximum value is"<<getMax(arr,size)<<endl;
    cout<<"Minimum value is"<<getMin(arr,size)<<endl;

}