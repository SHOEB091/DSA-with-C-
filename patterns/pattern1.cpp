#include<iostream>
using namespace std;
int main()
{
    int rows,columns;
    cout<<"Enter no of rows and columns\n";
    cin>>rows>>columns;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=columns;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}