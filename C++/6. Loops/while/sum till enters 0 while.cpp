//Program to add numbers until user enters 0 using while loop.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,c,sum;
    n=1;
    sum=0;


    
    while(n!=0)
    { 
    cout<<"Enter a Number\n";
    cin>>n;          
                  
    sum+=n;//It means that sum=sum+n;
    }

    
    cout<<"Total Sum="<<sum; //When loop is terminated it gives the total sum.
    
    getch();
    
    
}
