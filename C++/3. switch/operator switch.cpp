/*
Program that inputs a floating point number, an operator and another floating point number.It displays the result 
by performing the operation on the given numbers.If the operator is a division , it should check to make sure that the divisor is not equal to zero.
if operator is not +,-,/ or * then program should print an error message. 
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   float a,b;
   char op;
   
   cout<<"Enter a Floating point number\n";
   cin>>a;
   
   cout<<"Enter an operator\n";
   cin>>op;
   
   cout<<"Enter a Floating point number\n";
   cin>>b;
   
   switch(op)
   {
     {        
      case '+' :
      cout<<a+b<<endl;
      break;
     }            
     {
     case '-' :
     cout<<a-b<<endl;
     break;
     }        
     {
     case '*' :
     cout<<a*b<<endl;
     break;
     }        
     {
     case'/' :
       if(b==0)//As a/b so if user enters b=0 then division is not possible. 
       {
       cout<<"Division is not possible\n"<<"Divided by zero!\n";
       }
       else
       {
       cout<<a/b<<endl;    
       }
       break;         
     }
     default:
     {
     cout<<"Invalid Operator\n"<<"Error!";
     }
        
   } 
   getch();
}
