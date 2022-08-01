#include<iostream>
using namespace std;

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int indInsertion(int arr[],int size, int element,int capacity, int index)
{
    if(size>=capacity)
    {
        return -1;
    }
    for (int i = size -1; i <index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;   
}

int main()
{
    int arr[100],size,index,element;
    cout<<"enter the size of an array\n";
    cin>>size;

    cout<<"Enter the elements in an array\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the index value on which you want to insert\n";
    cin>>index;

    cout<<"Enter the element you want to insert\n";
    cin>>element;
    indInsertion(arr,size,element,100,index);
    size=size+1;
    display(arr,size);
    return 0;
}