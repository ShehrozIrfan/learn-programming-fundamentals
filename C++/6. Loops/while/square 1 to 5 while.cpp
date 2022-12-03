//Program that displays five numbers and display their square.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    
    int n=1;
    
    while(n<=5)
    
    {
/*
Here first it checks the condition n<=5 so condition is true as n=1 it comes inside the loop body and first prints n which is 1 and then apply
the formula of square that is n*n and display the square and then it adds 1 to n that is n=n+1 implies that n=1+1 so n=2 so it goes up and checks the
condition and execute the loop till n<=5 when condition is false the loop is terminated.a
*/
      cout<<n<<" "<<n*n<<endl;
      
      n=n+1;
    
    }
    
    getch();
    
}
