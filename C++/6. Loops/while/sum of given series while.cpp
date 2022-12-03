/*
program that displays sum of following series using while loop:
        1+1/2+1/4+......+1/100
*/


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   float s,c; //here we declare float type variables because sum of series is in floating points and we also store values in s and r in floating point.
   s=1.0;
   c=2.0;
   /*here we declare c=2 because if we see the given question the sum of series is 1+1/2+1/4... that part that is divided by 2 is the sum of 2 means that
   it is first 2 then 4 then 6 and so on therefore we apply the condition here c=c+2 which adds 2 in the c according to the question .
   */
   while(c<=100)
   {
    
    s=s+1/c;
    //As s=1 so step s=s+1/c implies that 1.0+1/2.
    
    c=c+2;            
                  
   } 
    
   cout<<"Sum of series="<<s;
   
   getch();
    
}
