//program that inputs five numbers in an array and displays them in actual and reverse order.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int number[5],i;
    
    for(i=0;i<5;i++)
    {
    cout<<"Enter Number\n";
    cin>>number[i];
    }
    
    cout<<"Number in actual order:\n";
    for(i=0;i<5;i++)
    {
    cout<<number[i]<<"  ";
    }
    cout<<"\n";
    cout<<"Number in reverse order:\n";
    for(i=4;i>=0;i--)
    {
    cout<<number[i]<<"  ";
    }
    
    getch();
    
}
