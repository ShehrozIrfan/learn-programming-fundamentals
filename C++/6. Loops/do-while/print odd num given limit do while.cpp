//Program that gets starting and ending point from the user and displays all odd numbers in the given range using do-while loop.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int s,e,c;
    
    cout<<"Enter starting number\n";
    cin>>s;
    
    cout<<"Enter ending number\n";
    cin>>e;
    
    c=s;
    do
    {
     if(c%2!=0)//The numbers which do not give remainder 0 when divided with 2 are odd numbers.So here we applied the condition for odd numbers.
     cout<<c<<endl;
     c=c+1;   //It adds 1 to c and then checks the while condition.
    }
    while(c<=e); //As we have to print odd numbers between starting and ending number so we applied condition that c<=e as e is ending point.
    //when this condition is false loop is terminated.
    getch();
}
