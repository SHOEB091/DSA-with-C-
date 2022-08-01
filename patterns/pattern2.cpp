#include<iostream>
using namespace std;
int main()
{
    int rows,columns,i,j;
    cout<<"Enter no of rows and columns\n";
    cin>>rows>>columns;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=columns;j++)
        {
            if(i==1||i==rows)
            {
                cout<<"*";
            }
        }
    }

}