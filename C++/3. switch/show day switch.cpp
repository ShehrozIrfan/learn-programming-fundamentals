//Program that inputs number of week's day and display the name of the day using switch. e.g; if user enters 1 it displays Monday.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    
    switch(n)/* In this step we write within the parenthesis that variable to which we are applying switch statement.As we are applying switch
    statement to 'n' therefore we write it in parenthesis after switch. */
    {
    case 1:
         /*
         we write here 1 after case because it represent the input if user enters 1 so this case is applicable and it prints Monday on the screen.
         similarly other cases.
         */
         {
         cout<<"Monday";
         break;//break; is used to exit from switch statement.if break is not used,all case blocks that come after the matching case will also executed.
         }
    case 7:
         {
         cout<<"Sunday";
         break;
         }
   default:
           /*
           the default label appears at the end of all case blocks.It is executed only when the result of expression does not match with any case label.
           its use is optional.Its position is not fixed. It may be placed before the first case statement or after the last one. 
           */
         {
         cout<<"Invalid input"; 
         } 
         
    }  
    getch();  
    
}
