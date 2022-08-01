/*#include<iostream>
using namespace std;

int sumArr(int arr[],int size)
{
    int sum=0;
    for(int i=0i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int arr[10],size;
    cout<<"Enter the size of an array\n";
    cin>>size;

    cout<<"Enter the elements of an array\n";
    for(int i=0;i<size;i++)
    {
        cin<<arr[i]
    }
    cout<<"The sum of all the elements of an array is:"<<sumArr(arr,size)<<endl;
}*/

#include<iostream>
using namespace std;

int sumArr(int arr[],int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}

int main() {
    int a[100],n;
    //Taking the size of the array
    cin>>n;
    //Taking the array from the user
    for(int i = 0; i<n; i++) {
        cin>>a[i];
    }
    cout<<"The sum of all the elements in the array is: " << sumArr(a,n) << endl;
}