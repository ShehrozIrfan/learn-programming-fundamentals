//Program that inputs five numbers from the user in an array and display the maximum number.

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
    
    int maximum;
     maximum=arr[0];//This is because array starts from 0.
     
     for(i=0;i<5;i++)
     {
     if(maximum<arr[i])
     {
     maximum=arr[i];
     }
     }
     
     cout<<"Maximum="<<maximum;
     
     getch();
    
} 
