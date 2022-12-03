/*
program that inputs the height of triangle and displays a triangle of characters.For example,if user enters 5,it displays the following:
        A
        B C
        D E F
        G H I J
        K L M N O
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int r,p,n;
    char ch='A';
    
    cout<<"Enter the height of triangle\n";
    cin>>n;
    
    for(r=1;r<=n;r++)//this loop is responsible for number of rows so rows are <= number entered by user.
    {
      for(p=1;p<=r;p++)//This is responsible for spacing/printing . 
      {
      cout<<ch<<" ";//we print here character and incremented it.Remember we also printed a space as given in pattern.
      ch++;
      
      }
      cout<<"\n";
    }
    getch();
}
