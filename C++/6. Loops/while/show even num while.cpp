//Program that inputs starting and ending number from the user and display all even numbers in the given range using while loop.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    
    int n,s,e;
    
    cout<<"Enter starting number\n";
    cin>>s;
    
    cout<<"Enter Ending number\n";
    cin>>e;
    
    n=s;
    
    
    while(n<=e)
    
    {
       if(n%2==0)//If this condition is true means that number is even so it prints the number.If this condition is false then it execute n=n+1;a
       {
       cout<<"Even number="<<n<<endl;          
       }     
          
       n=n+1;        
               
    }
    
    getch();
} 
