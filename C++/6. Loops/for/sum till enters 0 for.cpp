//Program to add numbers until user enters 0 using for loop.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,c,sum;
    sum=0;


    for(n=1;n!=0;)
  
    { 
    cout<<"Enter a Number\n";
    cin>>n;          
                  
    sum+=n;//It means that sum=sum+n;
    }

    
    cout<<"Total Sum="<<sum; //When loop is terminated it gives the total sum.
    
    getch();
    
    
}
