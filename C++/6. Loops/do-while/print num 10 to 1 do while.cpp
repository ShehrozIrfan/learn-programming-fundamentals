//Program that displays back-counting from 10 to 1 using do-while loop.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    
    int n;
    n=10;
    
    do
    {
         cout<<n<<endl; //here it first displays the number that is initialized as n=10;
         
         n=n-1; //It subtract 1 from n because we have to print numbers from 10 to 1 so we have to subtract 1 from 10 and so on.
         
    }
    
    while(n>=1); //condition is applied n>=1 the loop is executed till the condition is true.It is terminated when condition is false.
    
    getch();    
    
}
