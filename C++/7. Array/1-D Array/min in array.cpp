//Program that inputs five numbers from the user in an array and display the minimum number.

#include<iostream>
#include<conio.h>
using  namespace std;
int main()
{
    int arr[5],i;
    
    for(i=0;i<5;i++)
    {
    cout<<"Enter Number\n";
    cin>>arr[i];
    }
    
    int minimum;
     minimum=arr[0];//This is because array starts from 0.
     
     for(i=0;i<5;i++)
     {
     if(minimum>arr[i])
     {
     minimum=arr[i];
     }
     }
     
     cout<<"Minimum="<<minimum;
     
     getch();
    
} 
