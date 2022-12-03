//Program that inputs five integers and find the smallest and the largest integer.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int a,b,c,d,e,min,max;
   
   cout<<"Enter Five numbers\n";
   cin>>a>>b>>c>>d>>e;
   
   max=min=a; /*Here we declare minimum and maximum number is equal to 'a'. So when it checks the condition (b<min) it is checking actually
                if b<a; so if the condition is true then minimum is now 'b'. Now it checks the next condition (c<min) it is checking actually
                c<b if condition is true then minimun is now 'c'.It checks the other conditions similarly. If one or more of the condition is 
                false then it skips that condition and goes to next condition and so on and then finds the maximum and minimum number.    */
   
   if(b<min)
   min=b;
   if(c<min)
   min=c;
   if(d<min)
   min=d;
   if(e<min)
   min=e;
   
   /*Here we declare minimum and maximum number is equal to 'a'. So when it checks the condition (b>max) it is checking actually
    if b>a; so if the condition is true then maximum is now 'b'. Now it checks the next condition (c>max) it is checking actually
    c>b if condition is true then maximum is now 'c'.It checks the other conditions similarly. If one or more of the condition is 
                false then it skips that condition and goes to next condition and so on and then finds the maximum and minimum number.    */
    
   
   
   if(b>max)
   max=b;
   if(c>max)
   max=c;
   if(d>max)
   max=d;
   if(e>max)
   max=e;
   
   cout<<"Maximum Number="<<max<<endl;
   cout<<"Minimum Number="<<min;
   
   getch();
    
} 
