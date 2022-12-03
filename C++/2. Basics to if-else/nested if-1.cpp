// now we are starting nested if statement.
/* syntax of nested if statement is
if(condition-1)
{
//executes only if condition-1 one is true.
 if(condition-2)
 {
//executes only if condition-2 is true.
  statements;            
  }            
}
.
*/
//this is a program for nested if statements.
#include<iostream>
using namespace std;
int main()
{
 int a=5,b=3,c=9,d=6;

 /*here first of all it checks the statement a>b. as a>b so it goes inside the if. then it checks the statement c>d. which is
also true . then it prints the message good job.
if the statement a>b is false then it didn't go inside and give no output.  */
if(a>b)
{
 if(c>d)
 {
   cout<<"good job"<<endl;     
        }      
       }
            system("pause");  
}
