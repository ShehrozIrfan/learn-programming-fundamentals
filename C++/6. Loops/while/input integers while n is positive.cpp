//Program that inputs integers from the user and stop taking integers when user enters a negative value .

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,i=1,negativeflag=0;
    
    while(i<=20 && negativeflag==0)//Here we set the condition that i<=20 and negativeflag==0.The loop runs until both the conditions are true.
    {
    
    cout<<"Enter an integer\n";
    cin>>num;
    
    if(num<1)//If user enters a negative value then it assign 1 to negativeflag.So when number<0 the loop is terminated.Because the condition in while becomes false.
    {
    negativeflag=1;
    }
    i++;//if number is not less than 0 then it increment in the value of i.
    }
    if(num<1)//If number is negative then it shows the following message.
    {
    cout<<"You entered a negative number loop is terminated!\n";
    }
    else//else when number is not negative it prints the following message.
    {
    cout<<"You Entered 20 integers\n";
    }
//In this program actually negativeflag is the indicator that the value must be greater than zero.
    
    getch();
} 
