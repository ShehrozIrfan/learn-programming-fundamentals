/*
Program that displays the following shape using nested loops.Outer loop should be for and inner loop should be while.

* * * * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*

*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,k;
    
    for(i=1;i<=7;i++)
    {
    j=i;
     /*In this step j=i means j=1 so it goes to while and checks the condition that is true and it prints '*' it comes again at while and checks the 
    condition that is true and print '*' and do the same five more times because the condition is true.When it becomes false it comes outside the loop
    and goes up and check the condition of for in this step now i=2 as condition is true so j=2,it comes inside and checks the while condition that is 
    also true so it prints the '*' goes outside and again come in while and checks the condition that is true because j<=7 now so it prints '*' five more
    times and repeat the all procedure till the given condition is true. */  
    while(j<=7)
    {
    cout<<"*"<<" ";
    j++;
    }
    cout<<"\n";
    }
    getch();
}
