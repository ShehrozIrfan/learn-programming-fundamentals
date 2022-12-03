//program that inputs five values from the user store them in an array and display the sum and average of these numbers.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr[5],i,sum=0;
    float avg=0;
    
    for(i=0;i<5;i++)//Array index start from 0 therefore we initialize i=0; and the next condition is i<5 because it has to store 5 value.
    
    {
    cout<<"Enter an integer\n";
    cin>>arr[i];
    
    sum=sum+arr[i];
    }
    
    avg=sum/5; //formula for finding average.
    
    cout<<"Sum="<<sum<<"\n"<<"Average="<<avg;
    
    getch();
    
}
