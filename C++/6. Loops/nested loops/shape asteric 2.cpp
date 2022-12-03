/*
Program that displays the following block using nested for loop.
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int i,j;
 
 for(i=1;i<=5;i++)//It is used to specify the number of rows.So we apply condition here <=5 so it obtains five rows.
 {
                       
  for(j=1;j<=5;j++)//This loop is used for specify the spaces and for printing message on screen.
  
  {
                          
  cout<<"*"<<" ";
 
  }
  
  cout<<endl;
 
 }
 
 getch();

 }

