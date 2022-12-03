//program that displays first 10 numbers and then their sum using while loop.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n=1;
    int sum=0;
    //here we declare int type variable n=1 and sum=0.
    
    while(n<=10)
    
    {
    /*
   here it first checks the condition n<=10 as n=1 so condition is true it goes inside the loop body and first prints n that is n=1 then it calculates
   sum=sum+n which is equal to sum=0+1 because we declared sum=0 and value of n here is 1 so sum=1 here and then it add 1 to n so after adding 1
   the value of n=2 now . Then it goes up and again checks the condition n<=10 which is true so it comes inside and first prints n which is n=2 and 
   then calculates sum=sum+1 which is equal to sum=1+2 implies that sum=3 now.It repeats the same procedure till condition is true when condition becomes
   false the loop is terminated and it prints the sum of ten numbers. 
    */            
    cout<<n<<endl;
    
    sum=sum+n;
    
    n=n+1;
    
    }
    
    cout<<"sum of first 10 numbers="<<sum;
    
    getch();

} 
