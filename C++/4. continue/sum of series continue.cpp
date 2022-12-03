//Program that displays the sum of following series:  1+3+5+...+100.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,sum=0;
    
    for(i=1;i<=100;i++)
    {
    if(i%2==0)//Here we apply the condition that if number is even then it didn't go to next step.It goes up to loop and again executed till the if condition is false.
    {
    continue;
    }
    sum=sum+i;//when if condition is false then it comes here and calculates the sum.And after calculating sum it goes up to loop till the condition in loop is true.
    }
    cout<<"Sum="<<sum;//When condition in loop becomes false then it prints the sum.
    
    getch();
}
