#include<iostream>
using namespace std;

void duplicate_element(int arr[], int num) // finding duplicate values
{
int i, j;
printf("Repeating elements are following: ");
for(i = 0;i < num;i++)
{
  for(j = i+1;j < num;j++)
  {
    if(arr[i] == arr[j])
    {
     cout << arr[j] << " ";
    }
  }
}
}
int main()
{
int no; 
cout<<"enter the size of array";
cin >> no; // taking size of array
int ele[100];  
int i;
cout<<"\n enter elements:";  // taking elements.
for(i = 0; i < no; i++)
{
cin >> ele[i];
}
duplicate_element(ele,10); // passing value to function
return 0;
}