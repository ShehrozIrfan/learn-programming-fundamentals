//Program that inputs a number from the user and finds its factorial.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    
    int n,c,f;
    c=1;
    f=1;
    
    cout<<"Enter a number\n";
    cin>>n;
    /*
    let user enters 3 which is stored in n. Now it comes in the loop and checks the condition c<=n as c=1 and n=3 so 1<3 the condition is true it goes
    inside the loop body. Now f=f*c implies that f=1*1 because we declare f=1 and c=1 so here f=1  then it goes to next step that is
    c=c+1 implies that c=1+1 hence c=2 here. Now it goes up and checks the condition as 2<3 so the condition is true it goes inside the loop body.And
    execute the step f=f*c which implies that f=1*2 because f and c were 1 and 2 respectively which gives f=2. now it executes next step that is c=c+1
    so c=2+1 implies that c=3.Now it goes up again and checks the condition c<=n as 3=3 so condition is true it comes inside and execute the step f=f*c
    that is f=2*3 because the value of f and c was 2 and 3 respectively which gives f=6. nOw it execute the next step that is c=c+1 implies that c=3+1
    so c=4. now it comes up and checks the condition that is c<=n that is false so loop is terminated and gives the value of f that is 6.
    */
    while(c<=n)
    {
               
    f=f*c;
    
    c=c+1;           
               
    }
    
    cout<<"factorial of number\n"<<n<<"="<<f;
    
    getch();
    
}
