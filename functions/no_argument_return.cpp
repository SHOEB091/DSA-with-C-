#include<iostream>
using namespace std;

void prime();

int main()
{
    //No argument is oassed to prime()
    prime();
    return 0;
}

// retrurn tupe of the function is void beacause value is not returned.
void prime()
{
    int num,i,flag=0;
    cout<<"Enter a positive integer enter to check; \n";
    cin>>num;
    for(i=2;i<=num/2;i++)
    {
        if(num==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<num<<"is not a prime number.\n";
    }
    else{
        cout<<num<<" "<<"is a prime number.\n";
    }
}
