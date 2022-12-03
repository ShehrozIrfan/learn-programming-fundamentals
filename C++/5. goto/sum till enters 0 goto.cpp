//Program to add numbers until user enters 0 using goto statement.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,c,sum;
    c=1;
    sum=0;

    addition:
    cout<<"Enter a Number\n";
    cin>>n;
    
    sum+=n;//It means that sum=sum+n;
    
    if(n!=0)//The loop executes till the user enters 0.
    
    goto addition;
    
    cout<<"Total Sum="<<sum; //When loop is terminated it gives the total sum.
    
    getch();
    
    
}
