//Program that inputs a year and finds whether it is a leap year or not using if-else.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int year;
    
    cout<<"Enter a year\n";
    cin>>year;
    
    /*
     Each leap year has 366 days instead of the usual 365, 
     by extending February to 29 days rather than the common 28.
     These extra days occur in years which are multiples of four.
     Therefore we apply condition if year%4==0 means if years module 4
     gives remainder 0 then it is a leap year.
    */
    
    if(year%4==0)
    
    cout<<"Year is a leap year\n";
    
    else
    cout<<"Year is not a leap year";
    
    getch();
    
}
